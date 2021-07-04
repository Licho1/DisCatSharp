// This file is part of the DSharpPlus project.
//
// Copyright (c) 2015 Mike Santiago
// Copyright (c) 2016-2021 DSharpPlus Contributors
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

using System;
using DSharpPlusNextGen.Entities;
using DSharpPlusNextGen.VoiceNext.Codec;

namespace DSharpPlusNextGen.VoiceNext.Entities
{
    internal class AudioSender : IDisposable
    {
        public uint SSRC { get; }
        public ulong Id => this.User?.Id ?? 0;
        public OpusDecoder Decoder { get; }
        public DiscordUser User { get; set; } = null;
        public ushort LastSequence { get; set; } = 0;

        public AudioSender(uint ssrc, OpusDecoder decoder)
        {
            this.SSRC = ssrc;
            this.Decoder = decoder;
        }

        public void Dispose() => this.Decoder?.Dispose();
    }
}