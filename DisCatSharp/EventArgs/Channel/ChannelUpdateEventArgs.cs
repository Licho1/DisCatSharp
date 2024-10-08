using System;

using DisCatSharp.Entities;

namespace DisCatSharp.EventArgs;

/// <summary>
///     Represents arguments for <see cref="DiscordClient.ChannelUpdated" /> event.
/// </summary>
public class ChannelUpdateEventArgs : DiscordEventArgs
{
	/// <summary>
	///     Initializes a new instance of the <see cref="ChannelUpdateEventArgs" /> class.
	/// </summary>
	internal ChannelUpdateEventArgs(IServiceProvider provider)
		: base(provider)
	{ }

	/// <summary>
	///     Gets the post-update channel.
	/// </summary>
	public DiscordChannel ChannelAfter { get; internal set; }

	/// <summary>
	///     Gets the pre-update channel.
	/// </summary>
	public DiscordChannel ChannelBefore { get; internal set; }

	/// <summary>
	///     Gets the guild in which the update occurred.
	/// </summary>
	public DiscordGuild Guild { get; internal set; }
}
