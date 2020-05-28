<p>
  Use the following routine to display the Windows &quot;Browse for
  Folder&quot; dialog box.
</p>

<div class="frame">
<!-- Highlighted Pascal code generated by DelphiDabbler PasH -->
<pre class="pas-source"><span class="pas-kwd">function</span> FindFolder(Handle: THandle;
  Title: <span class="pas-kwd">string</span> = <span class="pas-str">'Please specify a folder'</span>): <span class="pas-kwd">string</span>;
<span class="pas-kwd">var</span>
  lpItemID: PItemIDList;
  BrowseInfo: TBrowseInfo;
  DisplayName: <span class="pas-kwd">array</span>[<span class="pas-num">0</span>..MAX_PATH] <span class="pas-kwd">of</span> char;
  TempPath: <span class="pas-kwd">array</span>[<span class="pas-num">0</span>..MAX_PATH] <span class="pas-kwd">of</span> char;
<span class="pas-kwd">begin</span>
  Result := <span class="pas-str">''</span>;
  FillChar(BrowseInfo, sizeof(TBrowseInfo), <span class="pas-str">#0</span>);
  BrowseInfo.hwndOwner := Handle;
  BrowseInfo.pszDisplayName := @DisplayName;
  BrowseInfo.lpszTitle := PChar(Title);
  BrowseInfo.ulFlags := BIF_RETURNONLYFSDIRS;
  lpItemID := SHBrowseForFolder(BrowseInfo);
  <span class="pas-kwd">if</span> lpItemId &lt;&gt; <span class="pas-kwd">nil</span> <span class="pas-kwd">then</span>
  <span class="pas-kwd">begin</span>
    SHGetPathFromIDList(lpItemID, TempPath);
    Result := TempPath;
    GlobalFreePtr(lpItemID);
  <span class="pas-kwd">end</span>;
<span class="pas-kwd">end</span>;</pre>
</div>

<p>
  You will need to use the <code>Windows</code> and <code>ShlObj</code> units
  to get the code to compile.
</p>