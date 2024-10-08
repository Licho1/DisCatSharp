using Newtonsoft.Json;

namespace DisCatSharp.Entities;

/// <summary>
///     Represents a interaction response.
/// </summary>
public sealed class DiscordInteractionCallbackResponse : ObservableApiObject
{
	/// <summary>
	///     Gets the created interaction.
	/// </summary>
	[JsonProperty("interaction")]
	public DiscordInteractionCallback Interaction { get; internal set; }

	/// <summary>
	///     Gets the interaction resource.
	/// </summary>
	[JsonProperty("resource")]
	public DiscordInteractionResource Resource { get; internal set; }

	/// <summary>
	///     Gets the created message from the <see cref="Resource" />.
	/// </summary>
	[JsonIgnore]
	public DiscordMessage? Message
		=> this.Resource.Message;
}
