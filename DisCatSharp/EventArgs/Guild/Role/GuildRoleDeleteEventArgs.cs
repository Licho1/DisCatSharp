using System;

using DisCatSharp.Entities;

namespace DisCatSharp.EventArgs;

/// <summary>
///     Represents arguments for <see cref="DiscordClient.GuildRoleDeleted" /> event.
/// </summary>
public class GuildRoleDeleteEventArgs : DiscordEventArgs
{
	/// <summary>
	///     Initializes a new instance of the <see cref="GuildRoleDeleteEventArgs" /> class.
	/// </summary>
	internal GuildRoleDeleteEventArgs(IServiceProvider provider)
		: base(provider)
	{ }

	/// <summary>
	///     Gets the guild in which the role was deleted.
	/// </summary>
	public DiscordGuild Guild { get; internal set; }

	/// <summary>
	///     Gets the role that was deleted.
	/// </summary>
	public DiscordRole? Role { get; internal set; }
}
