using System;

using DisCatSharp.Entities;
using DisCatSharp.EventArgs;

namespace DisCatSharp.VoiceNext.EventArgs;

/// <summary>
///     Represents arguments for VoiceReceived events.
/// </summary>
public class VoiceReceiveEventArgs : DiscordEventArgs
{
	/// <summary>
	///     Initializes a new instance of the <see cref="VoiceReceiveEventArgs" /> class.
	/// </summary>
	internal VoiceReceiveEventArgs(IServiceProvider provider)
		: base(provider)
	{ }

	/// <summary>
	///     Gets the SSRC of the audio source.
	/// </summary>
	public uint Ssrc { get; internal set; }

	/// <summary>
	///     Gets the user that sent the audio data.
	/// </summary>
	public DiscordUser? User { get; internal set; }

	/// <summary>
	///     Gets the received voice data, decoded to PCM format.
	/// </summary>
	public ReadOnlyMemory<byte> PcmData { get; internal set; }

	/// <summary>
	///     Gets the received voice data, in Opus format. Note that for packets that were lost and/or compensated for, this
	///     will be empty.
	/// </summary>
	public ReadOnlyMemory<byte> OpusData { get; internal set; }

	/// <summary>
	///     Gets the format of the received PCM data.
	///     <para>
	///         Important: This isn't always the format set in <see cref="VoiceNextConfiguration.AudioFormat" />, and depends
	///         on the audio data received.
	///     </para>
	/// </summary>
	public AudioFormat AudioFormat { get; internal set; }

	/// <summary>
	///     Gets the millisecond duration of the PCM audio sample.
	/// </summary>
	public int AudioDuration { get; internal set; }
}
