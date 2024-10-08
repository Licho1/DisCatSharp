using System;

using DisCatSharp.Entities;

namespace DisCatSharp.EventArgs;

/// <summary>
///     Represents arguments for <see cref="DiscordClient.MessageReactionsCleared" /> event.
/// </summary>
public class MessageReactionsClearEventArgs : DiscordEventArgs
{
	/// <summary>
	///     Initializes a new instance of the <see cref="MessageReactionsClearEventArgs" /> class.
	/// </summary>
	internal MessageReactionsClearEventArgs(IServiceProvider provider)
		: base(provider)
	{ }

	/// <summary>
	///     Gets the message for which the update occurred.
	/// </summary>
	public DiscordMessage Message { get; internal set; }

	/// <summary>
	///     Gets the channel to which this message belongs.
	/// </summary>
	/// <remarks>
	///     This will be <c>null</c> for an uncached channel, which will usually happen for when this event triggers on
	///     DM channels in which no prior messages were received or sent.
	/// </remarks>
	public DiscordChannel Channel
		=> this.Message.Channel;

	/// <summary>
	///     Gets the guild in which the reactions were cleared.
	/// </summary>
	public DiscordGuild Guild
		=> this.Channel.Guild;
}
