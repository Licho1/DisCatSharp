<!DOCTYPE html>
<!--[if IE]><![endif]-->
<html>
    
    <head>
      <meta charset="utf-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
      <title>Class DiscordInteractionResponseBuilder
     | DisCatSharp Docs </title>
      <meta name="viewport" content="width=device-width">
      <meta name="title" content="Class DiscordInteractionResponseBuilder
     | DisCatSharp Docs ">
      <meta name="generator" content="docfx 2.60.1.0">
      
    <link rel="apple-touch-icon" sizes="57x57" href="../../apple-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="../../apple-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="../../apple-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="../../apple-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="../../apple-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="../../apple-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="../../apple-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="../../apple-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="../../apple-icon-180x180.png">
    <link rel="icon" type="image/png" sizes="192x192" href="../../android-icon-192x192.png">
    <link rel="icon" type="image/png" sizes="32x32" href="../../favicon-32x32.png">
    <link rel="icon" type="image/png" sizes="96x96" href="../../favicon-96x96.png">
    <link rel="icon" type="image/png" sizes="16x16" href="../../favicon-16x16.png">
    <link rel="manifest" href="/manifest.json">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="msapplication-TileImage" content="../../ms-icon-144x144.png">
    <meta name="theme-color" content="#ffffff">
      <link rel="shortcut icon" href="../../favicon.ico">
      <script defer="" src='https://static.cloudflareinsights.com/beacon.min.js' data-cf-beacon='{"token": "de6c22ce0b3e4c17bb78c8c31b4e695b"}'></script>
      <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;400;500;700&display=swap" rel="stylesheet">
      <link rel="stylesheet" href="//cdnjs.cloudflare.com/ajax/libs/highlight.js/10.1.1/styles/night-owl.min.css">
      <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.7.2/font/bootstrap-icons.css" integrity="sha384-EvBWSlnoFgZlXJvpzS+MAUEjvN7+gcCwH+qh7GRFOGgZO0PuwOFro7qPOJnLfe7l" crossorigin="anonymous">
      <link rel="stylesheet" href="../../src/styles/config.css">
      <link rel="stylesheet" href="../../src/styles/discord.css">
      <link rel="stylesheet" href="../../src/styles/dcs.css">
      <link rel="stylesheet" href="../../src/styles/main.css">
      <link rel="stylesheet" href="../../src/styles/colors.css">
      <link rel="stylesheet" href="../../src/styles/highlight/github-dark.min.css">
      <meta property="docfx:navrel" content="../../toc.html">
      <meta property="docfx:tocrel" content="toc.html">
      
      <meta property="docfx:rel" content="../../">
      <meta property="docfx:newtab" content="true">
    </head>

    <body>
        <div class="top-navbar">
            <a class="burger-icon" onclick="toggleMenu()">
                <svg name="Hamburger" style="vertical-align: middle;" width="34" height="34" viewbox="0 0 24 24"><path fill="currentColor" fill-rule="evenodd" clip-rule="evenodd" d="M20 6H4V9H20V6ZM4 10.999H20V13.999H4V10.999ZM4 15.999H20V18.999H4V15.999Z"></path></svg>
            </a>

            
            <a class="navbar-brand" href="../../index.html">
              <img id="logo" class="svg" src="../../logo.png" alt="DisCatSharp">
            </a>
        </div>

        <div class="body-content">
            <div id="blackout" class="blackout" onclick="toggleMenu()"></div>

            <nav id="sidebar" role="navigation">
                <div class="sidebar">
                    
                    <div>
                      <div class="mobile-hide">
                        
                        <a class="navbar-brand" href="../../index.html">
                          <img id="logo" class="svg" src="../../logo.png" alt="DisCatSharp">
                        </a>
                      </div>

                      <div class="sidesearch">
                        <form id="search" role="search" class="search">
                            <i class="bi bi-search search-icon"></i>
                            <input type="text" id="search-query" placeholder="Search" autocomplete="off">
                        </form>
                      </div>
                    
                      <div id="navbar">
                      </div>
                    </div>
                    <div class="sidebar-item-separator"></div>
                        
                        <div id="sidetoggle">
                          <div id="sidetoc"></div>
                        </div>
                </div>
                <div class="footer">
                  <strong>Made with ♥ by AITSYS</strong>
                  
                </div>
            </nav>

            <main class="main-panel">
                
                <div id="search-results" style="display: none;">
                  <h1 class="search-list">Search Results for <span></span></h1>
                  <div class="sr-items">
                    <p class="lsearch"><i class="bi bi-hourglass-split index-loading"></i></p>
                  </div>
                  <ul id="pagination" data-first="First" data-prev="Previous" data-next="Next" data-last="Last"></ul>
                </div>

                <div role="main" class="hide-when-search">
                        
                        <div class="subnav navbar navbar-default">
                          <div class="container hide-when-search" id="breadcrumb">
                            <ul class="breadcrumb">
                              <li></li>
                            </ul>
                          </div>
                        </div>
						
						<div id="sidetoggle">
						  <div id="sidetoc"></div>
						</div>
						<div class="article row grid-right">

                    <article class="content wrap" id="_content" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder">
  
  
  <h1 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder" class="text-break">Class DiscordInteractionResponseBuilder
  </h1>
  <div class="markdown level0 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Constructs an interaction response.</p>
</div>
  <div class="markdown level0 conceptual"></div>
  <div class="inheritance">
    <h5>Inheritance</h5>
    <div class="level0"><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.object">Object</a></div>
    <div class="level1"><span class="xref">DiscordInteractionResponseBuilder</span></div>
  </div>
  <h6><strong>Namespace</strong>: <a class="xref" href="DisCatSharp.Entities.html">DisCatSharp.Entities</a></h6>
  <h6><strong>Assembly</strong>: DisCatSharp.dll</h6>
  <h5 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_syntax">Syntax</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public sealed class DiscordInteractionResponseBuilder : object</code></pre>
  </div>
  <h3 id="constructors">Constructors
  </h3>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder__ctor.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.%23ctor%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L96">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder__ctor_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.#ctor*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder__ctor" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.#ctor">DiscordInteractionResponseBuilder()</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Constructs a new empty interaction response builder.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder()</code></pre>
  </div>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder__ctor_DisCatSharp_Entities_DiscordMessageBuilder_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.%23ctor(DisCatSharp.Entities.DiscordMessageBuilder)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L103">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder__ctor_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.#ctor*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder__ctor_DisCatSharp_Entities_DiscordMessageBuilder_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.#ctor(DisCatSharp.Entities.DiscordMessageBuilder)">DiscordInteractionResponseBuilder(DiscordMessageBuilder)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Constructs a new <a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a> based on an existing <a class="xref" href="DisCatSharp.Entities.DiscordMessageBuilder.html">DiscordMessageBuilder</a>.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder(DiscordMessageBuilder builder)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordMessageBuilder.html">DiscordMessageBuilder</a></td>
        <td><span class="parametername">builder</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The builder to copy.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h3 id="properties">Properties
  </h3>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Choices.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Choices%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L83">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Choices_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Choices*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Choices" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Choices">Choices</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="3">The choices to send on this interaction response.
Mutually exclusive with content, embed, and components.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public IReadOnlyList&lt;DiscordApplicationCommandAutocompleteChoice&gt; Choices { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IReadOnlyList</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice.html">DiscordApplicationCommandAutocompleteChoice</a>&gt;</td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Components.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Components%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L76">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Components_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Components*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Components" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Components">Components</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Components to send on this interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public IReadOnlyList&lt;DiscordActionRowComponent&gt; Components { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IReadOnlyList</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordActionRowComponent.html">DiscordActionRowComponent</a>&gt;</td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Content.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Content%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L48">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Content_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Content*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Content" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Content">Content</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Content of the message to send.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public string Content { get; set; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.string">String</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Embeds.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Embeds%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L63">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Embeds_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Embeds*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Embeds" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Embeds">Embeds</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Embeds to send on this interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public IReadOnlyList&lt;DiscordEmbed&gt; Embeds { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IReadOnlyList</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordEmbed.html">DiscordEmbed</a>&gt;</td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Files.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Files%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L70">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Files_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Files*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Files" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Files">Files</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Files to send on this interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public IReadOnlyList&lt;DiscordMessageFile&gt; Files { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IReadOnlyList</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordMessageFile.html">DiscordMessageFile</a>&gt;</td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_IsEphemeral.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.IsEphemeral%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L43">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_IsEphemeral_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.IsEphemeral*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_IsEphemeral" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.IsEphemeral">IsEphemeral</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Whether this interaction response should be ephemeral.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public bool IsEphemeral { get; set; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_IsTts.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.IsTts%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L38">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_IsTts_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.IsTts*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_IsTts" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.IsTts">IsTts</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Whether this interaction response is text-to-speech.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public bool IsTts { get; set; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Mentions.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Mentions%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L90">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Mentions_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Mentions*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Mentions" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Mentions">Mentions</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Mentions to send on this interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public IReadOnlyList&lt;IMention&gt; Mentions { get; }</code></pre>
  </div>
  <h5 class="propertyValue">Property Value</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IReadOnlyList</span>&lt;<a class="xref" href="DisCatSharp.Entities.IMention.html">IMention</a>&gt;</td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <h3 id="methods">Methods
  </h3>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoice_DisCatSharp_Entities_DiscordApplicationCommandAutocompleteChoice_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoice(DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L307">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoice_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoice*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoice_DisCatSharp_Entities_DiscordApplicationCommandAutocompleteChoice_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoice(DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice)">AddAutoCompleteChoice(DiscordApplicationCommandAutocompleteChoice)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds a single auto-complete choice to the builder.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddAutoCompleteChoice(DiscordApplicationCommandAutocompleteChoice choice)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice.html">DiscordApplicationCommandAutocompleteChoice</a></td>
        <td><span class="parametername">choice</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The choice to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The current builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoices_DisCatSharp_Entities_DiscordApplicationCommandAutocompleteChoice___.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoices(DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice%5B%5D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L329">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoices_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoices*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoices_DisCatSharp_Entities_DiscordApplicationCommandAutocompleteChoice___" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoices(DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice[])">AddAutoCompleteChoices(DiscordApplicationCommandAutocompleteChoice[])</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds auto-complete choices to the builder.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddAutoCompleteChoices(params DiscordApplicationCommandAutocompleteChoice[] choices)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice.html">DiscordApplicationCommandAutocompleteChoice</a>[]</td>
        <td><span class="parametername">choices</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The choices to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The current builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoices_IEnumerable_DisCatSharp_Entities_DiscordApplicationCommandAutocompleteChoice__.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoices(IEnumerable%7BDisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice%7D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L318">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoices_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoices*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddAutoCompleteChoices_IEnumerable_DisCatSharp_Entities_DiscordApplicationCommandAutocompleteChoice__" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddAutoCompleteChoices(IEnumerable{DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice})">AddAutoCompleteChoices(IEnumerable&lt;DiscordApplicationCommandAutocompleteChoice&gt;)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds auto-complete choices to the builder.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddAutoCompleteChoices(IEnumerable&lt;DiscordApplicationCommandAutocompleteChoice&gt; choices)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IEnumerable</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordApplicationCommandAutocompleteChoice.html">DiscordApplicationCommandAutocompleteChoice</a>&gt;</td>
        <td><span class="parametername">choices</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The choices to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The current builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_DisCatSharp_Entities_DiscordComponent___.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents(DisCatSharp.Entities.DiscordComponent%5B%5D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L118">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_DisCatSharp_Entities_DiscordComponent___" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents(DisCatSharp.Entities.DiscordComponent[])">AddComponents(DiscordComponent[])</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Appends a collection of components to the builder. Each call will append to a new row.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddComponents(params DiscordComponent[] components)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordComponent.html">DiscordComponent</a>[]</td>
        <td><span class="parametername">components</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The components to append. Up to five.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The current builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_IEnumerable_DisCatSharp_Entities_DiscordActionRowComponent__.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents(IEnumerable%7BDisCatSharp.Entities.DiscordActionRowComponent%7D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L126">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_IEnumerable_DisCatSharp_Entities_DiscordActionRowComponent__" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents(IEnumerable{DisCatSharp.Entities.DiscordActionRowComponent})">AddComponents(IEnumerable&lt;DiscordActionRowComponent&gt;)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Appends several rows of components to the message</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddComponents(IEnumerable&lt;DiscordActionRowComponent&gt; components)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IEnumerable</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordActionRowComponent.html">DiscordActionRowComponent</a>&gt;</td>
        <td><span class="parametername">components</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The rows of components to add, holding up to five each.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_IEnumerable_DisCatSharp_Entities_DiscordComponent__.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents(IEnumerable%7BDisCatSharp.Entities.DiscordComponent%7D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L145">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddComponents_IEnumerable_DisCatSharp_Entities_DiscordComponent__" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddComponents(IEnumerable{DisCatSharp.Entities.DiscordComponent})">AddComponents(IEnumerable&lt;DiscordComponent&gt;)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Appends a collection of components to the builder. Each call will append to a new row.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddComponents(IEnumerable&lt;DiscordComponent&gt; components)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IEnumerable</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordComponent.html">DiscordComponent</a>&gt;</td>
        <td><span class="parametername">components</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The components to append. Up to five.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The current builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddEmbed_DisCatSharp_Entities_DiscordEmbed_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddEmbed(DisCatSharp.Entities.DiscordEmbed)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L192">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddEmbed_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddEmbed*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddEmbed_DisCatSharp_Entities_DiscordEmbed_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddEmbed(DisCatSharp.Entities.DiscordEmbed)">AddEmbed(DiscordEmbed)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds an embed to send with the interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddEmbed(DiscordEmbed embed)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordEmbed.html">DiscordEmbed</a></td>
        <td><span class="parametername">embed</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Embed to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddEmbeds_IEnumerable_DisCatSharp_Entities_DiscordEmbed__.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddEmbeds(IEnumerable%7BDisCatSharp.Entities.DiscordEmbed%7D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L203">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddEmbeds_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddEmbeds*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddEmbeds_IEnumerable_DisCatSharp_Entities_DiscordEmbed__" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddEmbeds(IEnumerable{DisCatSharp.Entities.DiscordEmbed})">AddEmbeds(IEnumerable&lt;DiscordEmbed&gt;)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds the given embeds to send with the interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddEmbeds(IEnumerable&lt;DiscordEmbed&gt; embeds)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IEnumerable</span>&lt;<a class="xref" href="DisCatSharp.Entities.DiscordEmbed.html">DiscordEmbed</a>&gt;</td>
        <td><span class="parametername">embeds</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Embeds to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFile_FileStream_System_Boolean_System_String_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFile(FileStream%2CSystem.Boolean%2CSystem.String)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L240">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFile_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFile*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFile_FileStream_System_Boolean_System_String_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFile(FileStream,System.Boolean,System.String)">AddFile(FileStream, Boolean, String)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Sets if the message has files to be sent.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddFile(FileStream stream, bool resetStreamPosition = false, string description = null)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">FileStream</span></td>
        <td><span class="parametername">stream</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The Stream to the file.</p>
</td>
      </tr>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td><span class="parametername">resetStreamPosition</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Tells the API Client to reset the stream position to what it was after the file is sent.</p>
</td>
      </tr>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.string">String</a></td>
        <td><span class="parametername">description</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Description of the file.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFile_System_String_Stream_System_Boolean_System_String_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFile(System.String%2CStream%2CSystem.Boolean%2CSystem.String)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L217">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFile_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFile*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFile_System_String_Stream_System_Boolean_System_String_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFile(System.String,Stream,System.Boolean,System.String)">AddFile(String, Stream, Boolean, String)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds a file to the interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddFile(string filename, Stream data, bool resetStreamPosition = false, string description = null)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.string">String</a></td>
        <td><span class="parametername">filename</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Name of the file.</p>
</td>
      </tr>
      <tr>
        <td><span class="xref">Stream</span></td>
        <td><span class="parametername">data</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">File data.</p>
</td>
      </tr>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td><span class="parametername">resetStreamPosition</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Tells the API Client to reset the stream position to what it was after the file is sent.</p>
</td>
      </tr>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.string">String</a></td>
        <td><span class="parametername">description</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Description of the file.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFiles_Dictionary_System_String_Stream__System_Boolean_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFiles(Dictionary%7BSystem.String%2CStream%7D%2CSystem.Boolean)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L262">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFiles_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFiles*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddFiles_Dictionary_System_String_Stream__System_Boolean_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddFiles(Dictionary{System.String,Stream},System.Boolean)">AddFiles(Dictionary&lt;String, Stream&gt;, Boolean)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds the given files to the interaction response builder.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddFiles(Dictionary&lt;string, Stream&gt; files, bool resetStreamPosition = false)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">Dictionary</span>&lt;<a class="xref" href="https://learn.microsoft.com/dotnet/api/system.string">String</a>, <span class="xref">Stream</span>&gt;</td>
        <td><span class="parametername">files</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Dictionary of file name and file data.</p>
</td>
      </tr>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td><span class="parametername">resetStreamPosition</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Tells the API Client to reset the stream position to what it was after the file is sent.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">The builder to chain calls with.</p>
</td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddMention_DisCatSharp_Entities_IMention_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddMention(DisCatSharp.Entities.IMention)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L286">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddMention_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddMention*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddMention_DisCatSharp_Entities_IMention_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddMention(DisCatSharp.Entities.IMention)">AddMention(IMention)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds the mention to the mentions to parse, etc. with the interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddMention(IMention mention)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.IMention.html">IMention</a></td>
        <td><span class="parametername">mention</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Mention to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddMentions_IEnumerable_DisCatSharp_Entities_IMention__.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddMentions(IEnumerable%7BDisCatSharp.Entities.IMention%7D)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L296">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddMentions_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddMentions*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AddMentions_IEnumerable_DisCatSharp_Entities_IMention__" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AddMentions(IEnumerable{DisCatSharp.Entities.IMention})">AddMentions(IEnumerable&lt;IMention&gt;)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Adds the mentions to the mentions to parse, etc. with the interaction response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AddMentions(IEnumerable&lt;IMention&gt; mentions)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="xref">IEnumerable</span>&lt;<a class="xref" href="DisCatSharp.Entities.IMention.html">IMention</a>&gt;</td>
        <td><span class="parametername">mentions</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Mentions to add.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_AsEphemeral_System_Boolean_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.AsEphemeral(System.Boolean)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L172">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AsEphemeral_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AsEphemeral*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_AsEphemeral_System_Boolean_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.AsEphemeral(System.Boolean)">AsEphemeral(Boolean)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Sets the interaction response to be ephemeral.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder AsEphemeral(bool ephemeral = true)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td><span class="parametername">ephemeral</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Whether the response should be ephemeral. Defaults to true.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_Clear.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.Clear%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L341">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Clear_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Clear*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_Clear" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.Clear">Clear()</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Allows for clearing the Interaction Response Builder so that it can be used again to send a new response.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public void Clear()</code></pre>
  </div>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_ClearComponents.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.ClearComponents%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L335">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_ClearComponents_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.ClearComponents*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_ClearComponents" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.ClearComponents">ClearComponents()</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Clears all message components on this builder.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public void ClearComponents()</code></pre>
  </div>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_WithContent_System_String_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.WithContent(System.String)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L182">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_WithContent_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.WithContent*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_WithContent_System_String_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.WithContent(System.String)">WithContent(String)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Sets the content of the message to send.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder WithContent(string content)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.string">String</a></td>
        <td><span class="parametername">content</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Content to send.</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>
  <span class="small pull-right mobile-hide">
    <span class="divider">|</span>
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/new/main/apiSpec/new?filename=DisCatSharp_Entities_DiscordInteractionResponseBuilder_WithTts_System_Boolean_.md&amp;value=---%0Auid%3A%20DisCatSharp.Entities.DiscordInteractionResponseBuilder.WithTts(System.Boolean)%0Asummary%3A%20'*You%20can%20override%20summary%20for%20the%20API%20here%20using%20*MARKDOWN*%20syntax'%0A---%0A%0A*Please%20type%20below%20more%20information%20about%20this%20API%3A*%0A%0A">Improve this Doc</a>
  </span>
  <span class="small pull-right mobile-hide">
    <a href="https://github.com/Aiko-IT-Systems/DisCatSharp/blob/main/DisCatSharp/Entities/Interaction/DiscordInteractionResponseBuilder.cs/#L162">View Source</a>
  </span>
  <a id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_WithTts_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.WithTts*"></a>
  <h4 id="DisCatSharp_Entities_DiscordInteractionResponseBuilder_WithTts_System_Boolean_" data-uid="DisCatSharp.Entities.DiscordInteractionResponseBuilder.WithTts(System.Boolean)">WithTts(Boolean)</h4>
  <div class="markdown level1 summary"><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="2" sourceendlinenumber="2">Indicates if the interaction response will be text-to-speech.</p>
</div>
  <div class="markdown level1 conceptual"></div>
  <h5 class="decalaration">Declaration</h5>
  <div class="codewrapper">
    <pre><code class="lang-csharp hljs">public DiscordInteractionResponseBuilder WithTts(bool tts)</code></pre>
  </div>
  <h5 class="parameters">Parameters</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Name</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="https://learn.microsoft.com/dotnet/api/system.boolean">Boolean</a></td>
        <td><span class="parametername">tts</span></td>
        <td><p sourcefile="api/DisCatSharp/DisCatSharp.Entities.DiscordInteractionResponseBuilder.yml" sourcestartlinenumber="1" sourceendlinenumber="1">Text-to-speech</p>
</td>
      </tr>
    </tbody>
  </table>
  <h5 class="returns">Returns</h5>
  <table class="table table-bordered table-striped table-condensed">
    <thead>
      <tr>
        <th>Type</th>
        <th>Description</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><a class="xref" href="DisCatSharp.Entities.DiscordInteractionResponseBuilder.html">DiscordInteractionResponseBuilder</a></td>
        <td></td>
      </tr>
    </tbody>
  </table>

</article>
                </div>

                <div class="copyright-footer">
                    <span>&#169; Aiko IT Systems. All rights reserved.</span>
                </div>
            </div></main>
        

        
        <script src="https://code.jquery.com/jquery-3.5.1.min.js" integrity="sha256-9/aliU8dGd2tb6OSsuzixeV4y/faTqgFtohetphbbj0=" crossorigin="anonymous"></script>
        <script type="text/javascript" src="../../src/scripts/docfx.vendor.js"></script>
        <script type="text/javascript" src="../../src/scripts/docfx.js"></script>
        <script type="text/javascript" src="../../src/scripts/url.min.js"></script>
        <script type="text/javascript" src="../../src/scripts/highlight/highlight.min.js"></script>
        <script>hljs.highlightAll();</script>
        <script src="https://cdn.jsdelivr.net/npm/anchor-js/anchor.min.js"></script>
        <script type="text/javascript" src="../../src/scripts/jquery.twbsPagination.js"></script>
        <script type="text/javascript" src="../../src/scripts/dcs.js"></script>
        <script type="text/javascript" src="../../src/scripts/lunr.js"></script>
    </div></body>
</html>