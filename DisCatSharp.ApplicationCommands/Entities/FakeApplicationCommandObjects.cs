using System.Collections.Generic;
using System.Linq;

using DisCatSharp.Entities;
using DisCatSharp.Enums;

using Newtonsoft.Json;

namespace DisCatSharp.ApplicationCommands.Entities;

// ReSharper disable InternalOrPrivateMemberNotDocumented
internal sealed class CommandGroupWithSubGroups : BaseCommand
{
	internal CommandGroupWithSubGroups(string name, string description, List<CommandGroup> subGroups, List<Command> commands, ApplicationCommandType type, Dictionary<string, string>? nameTranslations = null, Dictionary<string, string>? descriptionTranslations = null)
		: base(name, description, type, nameTranslations, descriptionTranslations)
	{
		this.SubGroups = subGroups;
		this.Commands = commands;
	}

	[JsonProperty("groups")]
	internal List<CommandGroup> SubGroups { get; set; }

	[JsonProperty("commands")]
	internal List<Command> Commands { get; set; }
}

internal sealed class CommandGroup : BaseCommand
{
	internal CommandGroup(string name, string description, List<Command> commands, ApplicationCommandType? type = null, Dictionary<string, string>? nameTranslations = null, Dictionary<string, string>? descriptionTranslations = null)
		: base(name, description, type, nameTranslations, descriptionTranslations)
	{
		this.Commands = commands;
	}

	[JsonProperty("commands")]
	internal List<Command> Commands { get; set; }
}

internal sealed class Command : BaseCommand
{
	internal Command(string name, string? description = null, List<DiscordApplicationCommandOption>? options = null, ApplicationCommandType? type = null, Dictionary<string, string>? nameTranslations = null, Dictionary<string, string>? descriptionTranslations = null)
		: base(name, description, type, nameTranslations, descriptionTranslations)
	{
		if (options is not null)
			this.Options = options.Select(OptionTranslator.FromApplicationCommandOption).ToList();
	}

	[JsonProperty("options")]
	internal List<OptionTranslator>? Options { get; set; }
}

internal class BaseCommand
{
	internal BaseCommand(string name, string? description = null, ApplicationCommandType? type = null, Dictionary<string, string>? nameTranslations = null, Dictionary<string, string>? descriptionTranslations = null)
	{
		this.Name = name;
		this.Type = type;
		this.Description = description;
		this.NameTranslations = nameTranslations;
		this.DescriptionTranslations = descriptionTranslations;
	}

	[JsonProperty("name")]
	internal string Name { get; set; }

	[JsonProperty("name_translations")]
	internal Dictionary<string, string>? NameTranslations { get; set; }

	[JsonProperty("description", NullValueHandling = NullValueHandling.Ignore)]
	internal string? Description { get; set; }

	[JsonProperty("description_translations", NullValueHandling = NullValueHandling.Ignore)]
	internal Dictionary<string, string>? DescriptionTranslations { get; set; }

	[JsonProperty("type", NullValueHandling = NullValueHandling.Ignore)]
	internal ApplicationCommandType? Type { get; set; }
}
// ReSharper restore InternalOrPrivateMemberNotDocumented
