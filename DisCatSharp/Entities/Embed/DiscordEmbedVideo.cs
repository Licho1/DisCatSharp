using System;

using Newtonsoft.Json;

namespace DisCatSharp.Entities;

/// <summary>
///     Represents a video inside an embed.
/// </summary>
public sealed class DiscordEmbedVideo : ObservableApiObject
{
	/// <summary>
	///     Initializes a new instance of the <see cref="DiscordEmbedVideo" /> class.
	/// </summary>
	internal DiscordEmbedVideo()
	{ }

	/// <summary>
	///     Gets the source url of the video.
	/// </summary>
	[JsonProperty("url", NullValueHandling = NullValueHandling.Ignore)]
	public Uri Url { get; internal set; }

	/// <summary>
	///     Gets the height of the video.
	/// </summary>
	[JsonProperty("height", NullValueHandling = NullValueHandling.Ignore)]
	public int Height { get; internal set; }

	/// <summary>
	///     Gets the width of the video.
	/// </summary>
	[JsonProperty("width", NullValueHandling = NullValueHandling.Ignore)]
	public int Width { get; internal set; }
}
