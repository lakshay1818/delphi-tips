<p>
  Converts an integer value to a string containing a roman numeric code
  (&quot;XVII&quot;):
</p>

<div class="frame">
<!-- Highlighted Pascal code generated by DelphiDabbler PasH -->
<pre class="pas-source"><span class="pas-comment">{</span>
<span class="pas-comment">Parameters:   Num: Integer to convert.</span>
<span class="pas-comment">Return Value: Roman numerical representation of the passed integer value.</span>
<span class="pas-comment">History:      12/7/99 &quot;Philippe Ranger&quot;</span>
<span class="pas-comment">}</span>
<span class="pas-kwd">function</span><span class="pas-space"> </span><span class="pas-ident">IntToRoman</span><span class="pas-sym">(</span><span class="pas-ident">num</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Cardinal</span><span class="pas-sym">)</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">string</span><span class="pas-sym">;</span>
<span class="pas-kwd">const</span>
<span class="pas-space">  </span><span class="pas-ident">Nvals</span><span class="pas-space"> </span><span class="pas-sym">=</span><span class="pas-space"> </span><span class="pas-num">13</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">vals</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">array</span><span class="pas-space"> </span><span class="pas-sym">[</span><span class="pas-num">1</span><span class="pas-sym">..</span><span class="pas-ident">Nvals</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-kwd">of</span><span class="pas-space"> </span><span class="pas-ident">word</span><span class="pas-space"> </span><span class="pas-sym">=</span>
<span class="pas-space">    </span><span class="pas-sym">(</span><span class="pas-num">1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">4</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">5</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">9</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">10</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">40</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">50</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">90</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">100</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">400</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">500</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">900</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">1000</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">roms</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">array</span><span class="pas-space"> </span><span class="pas-sym">[</span><span class="pas-num">1</span><span class="pas-sym">..</span><span class="pas-ident">Nvals</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-kwd">of</span><span class="pas-space"> </span><span class="pas-kwd">string</span><span class="pas-sym">[</span><span class="pas-num">2</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-sym">=</span>
<span class="pas-space">    </span><span class="pas-sym">(</span><span class="pas-str">'I'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'IV'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'V'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'IX'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'X'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'XL'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'L'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'XC'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'C'</span><span class="pas-sym">,</span>
<span class="pas-space">    </span><span class="pas-str">'CD'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'D'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'CM'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'M'</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-kwd">var</span>
<span class="pas-space">  </span><span class="pas-ident">b</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-num">1</span><span class="pas-sym">..</span><span class="pas-ident">Nvals</span><span class="pas-sym">;</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-ident">result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-str">''</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">b</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">Nvals</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-kwd">while</span><span class="pas-space"> </span><span class="pas-ident">num</span><span class="pas-space"> </span><span class="pas-sym">&gt;</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-space"> </span><span class="pas-kwd">do</span>
<span class="pas-space">  </span><span class="pas-kwd">begin</span>
<span class="pas-space">    </span><span class="pas-kwd">while</span><span class="pas-space"> </span><span class="pas-ident">vals</span><span class="pas-sym">[</span><span class="pas-ident">b</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-sym">&gt;</span><span class="pas-space"> </span><span class="pas-ident">num</span><span class="pas-space"> </span><span class="pas-kwd">do</span>
<span class="pas-space">      </span><span class="pas-ident">dec</span><span class="pas-sym">(</span><span class="pas-ident">b</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">    </span><span class="pas-ident">dec</span><span class="pas-space"> </span><span class="pas-sym">(</span><span class="pas-ident">num</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">vals</span><span class="pas-sym">[</span><span class="pas-ident">b</span><span class="pas-sym">]</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">    </span><span class="pas-ident">result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">result</span><span class="pas-space"> </span><span class="pas-sym">+</span><span class="pas-space"> </span><span class="pas-ident">roms</span><span class="pas-sym">[</span><span class="pas-ident">b</span><span class="pas-sym">]</span>
<span class="pas-space">  </span><span class="pas-kwd">end</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span></pre>
</div>

<div class="js-reveal-block">
  <p>
    <a
      id='demo-link'
      class='show-hide-link'
      href="javascript:void(0)"
      onclick="showDemo('demo-link', 'demo-code');"
    >Show demo code</a>
  </p>
  <div id="demo-code" class="demo-block">
    <p class="reporef">
      A ready made project containing this demo code is available.
      <?php
      echo DocPart::OffsiteTextLink(
        URL_VIEWREPO . '/tip-101',  'View the project'
      );
      ?>.
    </p>
    <p>
      This demo displays the roman numerals up to 3999, which is about as
      large a number as this routine can cope with. To create the demo
      start a new Delphi VCL application then:
    </p>
    <ul>
      <li>
        Drop a <var>TListBox</var> on the form. Set its
        <var>TabWidth</var> property to 30.
      </li>
      <li>
        Create an <var>OnCreate</var> event handler for the form.
      </li>
      <li>
        Name the form &quot;Form1&quot; and save the form unit as
        <code>Unit1.pas</code>.
      </li>
      <li>
        Now code <var>Unit1</var> as follows:
      </li>
    </ul>
    <div class="frame">
<!-- Highlighted Pascal code generated by DelphiDabbler PasH -->
<pre class="pas-source"><span class="pas-kwd">unit</span><span class="pas-space"> </span><span class="pas-ident">Unit1</span><span class="pas-sym">;</span>

<span class="pas-kwd">interface</span>

<span class="pas-kwd">uses</span>
<span class="pas-space">  </span><span class="pas-ident">SysUtils</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Forms</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Classes</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Controls</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">StdCtrls</span><span class="pas-sym">;</span>

<span class="pas-kwd">type</span>
<span class="pas-space">  </span><span class="pas-ident">TForm1</span><span class="pas-space"> </span><span class="pas-sym">=</span><span class="pas-space"> </span><span class="pas-kwd">class</span><span class="pas-sym">(</span><span class="pas-ident">TForm</span><span class="pas-sym">)</span>
<span class="pas-space">    </span><span class="pas-ident">ListBox1</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">TListBox</span><span class="pas-sym">;</span>
<span class="pas-space">    </span><span class="pas-kwd">procedure</span><span class="pas-space"> </span><span class="pas-ident">FormCreate</span><span class="pas-sym">(</span><span class="pas-ident">Sender</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">TObject</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-kwd">end</span><span class="pas-sym">;</span>

<span class="pas-kwd">var</span>
<span class="pas-space">  </span><span class="pas-ident">Form1</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">TForm1</span><span class="pas-sym">;</span>

<span class="pas-kwd">implementation</span>

<span class="pas-preproc">{$R *.dfm}</span>

<span class="pas-kwd">function</span><span class="pas-space"> </span><span class="pas-ident">IntToRoman</span><span class="pas-sym">(</span><span class="pas-ident">num</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Cardinal</span><span class="pas-sym">)</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">string</span><span class="pas-sym">;</span>
<span class="pas-kwd">const</span>
<span class="pas-space">  </span><span class="pas-ident">Nvals</span><span class="pas-space"> </span><span class="pas-sym">=</span><span class="pas-space"> </span><span class="pas-num">13</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">vals</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">array</span><span class="pas-space"> </span><span class="pas-sym">[</span><span class="pas-num">1</span><span class="pas-sym">..</span><span class="pas-ident">Nvals</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-kwd">of</span><span class="pas-space"> </span><span class="pas-ident">word</span><span class="pas-space"> </span><span class="pas-sym">=</span>
<span class="pas-space">    </span><span class="pas-sym">(</span><span class="pas-num">1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">4</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">5</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">9</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">10</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">40</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">50</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">90</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">100</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">400</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">500</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">900</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-num">1000</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">roms</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">array</span><span class="pas-space"> </span><span class="pas-sym">[</span><span class="pas-num">1</span><span class="pas-sym">..</span><span class="pas-ident">Nvals</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-kwd">of</span><span class="pas-space"> </span><span class="pas-kwd">string</span><span class="pas-sym">[</span><span class="pas-num">2</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-sym">=</span>
<span class="pas-space">    </span><span class="pas-sym">(</span><span class="pas-str">'I'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'IV'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'V'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'IX'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'X'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'XL'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'L'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'XC'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'C'</span><span class="pas-sym">,</span>
<span class="pas-space">    </span><span class="pas-str">'CD'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'D'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'CM'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-str">'M'</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-kwd">var</span>
<span class="pas-space">  </span><span class="pas-ident">b</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-num">1</span><span class="pas-sym">..</span><span class="pas-ident">Nvals</span><span class="pas-sym">;</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-ident">result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-str">''</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">b</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">Nvals</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-kwd">while</span><span class="pas-space"> </span><span class="pas-ident">num</span><span class="pas-space"> </span><span class="pas-sym">&gt;</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-space"> </span><span class="pas-kwd">do</span>
<span class="pas-space">  </span><span class="pas-kwd">begin</span>
<span class="pas-space">    </span><span class="pas-kwd">while</span><span class="pas-space"> </span><span class="pas-ident">vals</span><span class="pas-sym">[</span><span class="pas-ident">b</span><span class="pas-sym">]</span><span class="pas-space"> </span><span class="pas-sym">&gt;</span><span class="pas-space"> </span><span class="pas-ident">num</span><span class="pas-space"> </span><span class="pas-kwd">do</span>
<span class="pas-space">      </span><span class="pas-ident">dec</span><span class="pas-sym">(</span><span class="pas-ident">b</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">    </span><span class="pas-ident">dec</span><span class="pas-space"> </span><span class="pas-sym">(</span><span class="pas-ident">num</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">vals</span><span class="pas-sym">[</span><span class="pas-ident">b</span><span class="pas-sym">]</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">    </span><span class="pas-ident">result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">result</span><span class="pas-space"> </span><span class="pas-sym">+</span><span class="pas-space"> </span><span class="pas-ident">roms</span><span class="pas-sym">[</span><span class="pas-ident">b</span><span class="pas-sym">]</span>
<span class="pas-space">  </span><span class="pas-kwd">end</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span>

<span class="pas-comment">{ TForm1 }</span>

<span class="pas-kwd">procedure</span><span class="pas-space"> </span><span class="pas-ident">TForm1</span><span class="pas-sym">.</span><span class="pas-ident">FormCreate</span><span class="pas-sym">(</span><span class="pas-ident">Sender</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">TObject</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-kwd">var</span>
<span class="pas-space">  </span><span class="pas-ident">N</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Cardinal</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">R</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-kwd">string</span><span class="pas-sym">;</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-kwd">for</span><span class="pas-space"> </span><span class="pas-ident">N</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">1</span><span class="pas-space"> </span><span class="pas-kwd">to</span><span class="pas-space"> </span><span class="pas-num">3999</span><span class="pas-space"> </span><span class="pas-kwd">do</span>
<span class="pas-space">  </span><span class="pas-kwd">begin</span>
<span class="pas-space">    </span><span class="pas-ident">R</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">IntToRoman</span><span class="pas-sym">(</span><span class="pas-ident">N</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">    </span><span class="pas-ident">ListBox1</span><span class="pas-sym">.</span><span class="pas-ident">Items</span><span class="pas-sym">.</span><span class="pas-ident">Add</span><span class="pas-sym">(</span><span class="pas-ident">Format</span><span class="pas-sym">(</span><span class="pas-str">'%d'</span><span class="pas-str">#9</span><span class="pas-str">'%s'</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-sym">[</span><span class="pas-ident">N</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R</span><span class="pas-sym">]</span><span class="pas-sym">)</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-kwd">end</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span>

<span class="pas-kwd">end</span><span class="pas-sym">.</span></pre>
    </div>
    <p>
      Run the program. When it appears all the integers from 1 to 3999 are
      displayed in the list box as digits and as roman numbers.
    </p>
    <p class="credits">
      Demo by Peter Johnson
    </p>
  </div>
</div>