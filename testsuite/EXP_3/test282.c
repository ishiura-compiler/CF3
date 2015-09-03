#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
volatile int64_t x10 = INT64_MIN;
uint64_t x14 = 744785538848939805LLU;
int32_t x17 = -374484;
uint32_t x19 = UINT32_MAX;
uint32_t x27 = 29308U;
uint16_t x29 = UINT16_MAX;
int64_t x32 = 24LL;
int32_t t8 = 6673;
volatile int8_t x48 = -1;
volatile uint16_t x51 = 3U;
static int16_t x52 = 936;
volatile int32_t t13 = -7621757;
int64_t x63 = 21LL;
int16_t x69 = -1;
volatile int32_t t16 = -7140;
volatile int32_t x86 = INT32_MIN;
volatile int8_t x87 = -23;
int32_t t21 = 414952;
volatile int64_t x96 = -103559456248155980LL;
uint16_t x100 = UINT16_MAX;
uint8_t x102 = 23U;
int32_t t26 = -3;
uint8_t x115 = UINT8_MAX;
static volatile int32_t t28 = 7090;
int32_t x121 = -264599;
int32_t t29 = 23;
int16_t x129 = 14;
volatile int64_t x132 = 3899160013518452LL;
int32_t t32 = 326;
int32_t t33 = -15285228;
int64_t x143 = -1LL;
static int16_t x144 = INT16_MIN;
static int16_t x151 = 272;
uint32_t x152 = UINT32_MAX;
volatile int32_t x153 = -23;
int64_t x154 = -1LL;
volatile uint16_t x155 = 3U;
int8_t x159 = INT8_MIN;
static volatile int64_t x164 = -717878030591837460LL;
volatile uint64_t x170 = 3004469069572LLU;
int16_t x175 = -1;
volatile int32_t t45 = 221648;
int32_t t46 = -668244;
uint32_t x194 = 5969438U;
volatile uint16_t x196 = 1584U;
uint64_t x197 = 4LLU;
volatile uint32_t x199 = UINT32_MAX;
uint32_t x200 = 371523553U;
int32_t t48 = -15;
int16_t x209 = -366;
volatile int32_t t50 = 46;
static int16_t x213 = -1;
static uint16_t x223 = 135U;
static int16_t x234 = INT16_MIN;
static int32_t x235 = -1;
int8_t x244 = INT8_MIN;
volatile int32_t t56 = -22489145;
int16_t x249 = -163;
uint64_t x251 = 322201LLU;
static volatile int32_t t57 = 2;
volatile int8_t x253 = 0;
int8_t x255 = INT8_MIN;
uint16_t x256 = 2818U;
volatile uint32_t x259 = 1998U;
uint8_t x260 = 1U;
static volatile int32_t t59 = 449399;
int8_t x262 = INT8_MAX;
static int32_t t60 = 665;
int16_t x268 = -1;
static int32_t x271 = INT32_MIN;
int32_t x272 = -14174;
static int16_t x282 = INT16_MIN;
int32_t x288 = -1;
int32_t t66 = 272443431;
volatile int64_t x290 = 31181LL;
int8_t x294 = INT8_MIN;
int32_t t70 = -373;
uint32_t x310 = UINT32_MAX;
uint64_t x312 = 21LLU;
int64_t x313 = INT64_MIN;
static uint8_t x320 = 92U;
int64_t x324 = INT64_MIN;
uint64_t x325 = UINT64_MAX;
int64_t x333 = 1LL;
uint16_t x334 = 33U;
uint8_t x336 = 3U;
static volatile int32_t t78 = 77822417;
uint16_t x342 = 0U;
int32_t t79 = 49202;
static int32_t t80 = 2451567;
volatile int16_t x349 = INT16_MIN;
static int8_t x352 = -1;
uint16_t x372 = UINT16_MAX;
uint32_t x376 = UINT32_MAX;
int8_t x382 = -1;
int32_t t87 = 1;
uint64_t x389 = UINT64_MAX;
int64_t x398 = -1LL;
volatile int32_t t92 = 39;
int8_t x406 = -1;
uint8_t x407 = UINT8_MAX;
static volatile int8_t x412 = INT8_MIN;
volatile uint16_t x415 = 168U;
uint16_t x417 = 23976U;
volatile int32_t t97 = 3790019;
int32_t x425 = INT32_MAX;


void f0(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = UINT32_MAX;
	static volatile int64_t x7 = 9157LL;
	volatile int32_t t0 = 1;

	t0 = ((x5<x6)<(x7-x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = -1;
	int32_t t1 = 80837;

	t1 = ((x9<x10)<(x11-x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	volatile int32_t x15 = 12;
	static int16_t x16 = -1;
	volatile int32_t t2 = 1;

	t2 = ((x13<x14)<(x15-x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x18 = -94690800;
	static volatile int16_t x20 = 3;
	int32_t t3 = -29167;

	t3 = ((x17<x18)<(x19-x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x21 = 36416658046282LLU;
	uint64_t x22 = 653021157896861LLU;
	volatile int32_t x23 = 44043;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 1611;

	t4 = ((x21<x22)<(x23-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	volatile uint8_t x28 = 36U;
	int32_t t5 = -4610;

	t5 = ((x25<x26)<(x27-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x30 = -14;
	static int8_t x31 = INT8_MIN;
	static int32_t t6 = -81;

	t6 = ((x29<x30)<(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -179718263;
	int64_t x35 = 493750890326LL;
	int64_t x36 = -1LL;
	volatile int32_t t7 = 6505;

	t7 = ((x33<x34)<(x35-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = -247;
	static int8_t x38 = 2;
	volatile uint16_t x39 = 1798U;
	int16_t x40 = INT16_MIN;

	t8 = ((x37<x38)<(x39-x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = -1940;
	int8_t x42 = INT8_MIN;
	static uint32_t x43 = 6384U;
	int8_t x44 = -12;
	volatile int32_t t9 = -91937;

	t9 = ((x41<x42)<(x43-x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	uint64_t x46 = 1088675657352LLU;
	volatile uint16_t x47 = 164U;
	int32_t t10 = 74901968;

	t10 = ((x45<x46)<(x47-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MAX;
	volatile int32_t t11 = 122;

	t11 = ((x49<x50)<(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MAX;
	static uint8_t x54 = 55U;
	volatile uint16_t x55 = 0U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 4;

	t12 = ((x53<x54)<(x55-x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 1761184U;
	int32_t x58 = 1;
	int8_t x59 = INT8_MAX;
	volatile int64_t x60 = 2912061645377310652LL;

	t13 = ((x57<x58)<(x59-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 15088LLU;
	int64_t x62 = INT64_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = -6053608;

	t14 = ((x61<x62)<(x63-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 6483;
	volatile int32_t x66 = -8995878;
	static int8_t x67 = INT8_MAX;
	static int8_t x68 = -48;
	int32_t t15 = -23724493;

	t15 = ((x65<x66)<(x67-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x70 = UINT8_MAX;
	static int64_t x71 = -1LL;
	volatile int16_t x72 = -1;

	t16 = ((x69<x70)<(x71-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 3U;
	uint16_t x74 = 20944U;
	uint16_t x75 = 0U;
	int8_t x76 = -1;
	static int32_t t17 = -77308551;

	t17 = ((x73<x74)<(x75-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 3;
	uint64_t x78 = 252157015063LLU;
	int16_t x79 = 7859;
	uint32_t x80 = UINT32_MAX;
	int32_t t18 = -771;

	t18 = ((x77<x78)<(x79-x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MIN;
	uint16_t x82 = 40U;
	static int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MAX;
	int32_t t19 = 58669048;

	t19 = ((x81<x82)<(x83-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 117U;
	static uint64_t x88 = UINT64_MAX;
	int32_t t20 = 29;

	t20 = ((x85<x86)<(x87-x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 46U;
	int64_t x90 = INT64_MAX;
	int16_t x91 = -39;
	int64_t x92 = -1849930LL;

	t21 = ((x89<x90)<(x91-x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -3;
	uint8_t x94 = 11U;
	static uint64_t x95 = 252743555409061LLU;
	volatile int32_t t22 = 45600;

	t22 = ((x93<x94)<(x95-x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	uint16_t x99 = 3U;
	volatile int32_t t23 = 300;

	t23 = ((x97<x98)<(x99-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -5;
	static int32_t x103 = INT32_MAX;
	volatile int32_t x104 = INT32_MAX;
	volatile int32_t t24 = -15;

	t24 = ((x101<x102)<(x103-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 2108223719LLU;
	int32_t x106 = -882731;
	int64_t x107 = -881054457094LL;
	uint16_t x108 = 1285U;
	int32_t t25 = -4;

	t25 = ((x105<x106)<(x107-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 8044670444709LLU;
	int64_t x110 = INT64_MAX;
	uint64_t x111 = UINT64_MAX;
	uint8_t x112 = UINT8_MAX;

	t26 = ((x109<x110)<(x111-x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t27 = -17837396;

	t27 = ((x113<x114)<(x115-x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	volatile int32_t x118 = INT32_MIN;
	volatile uint8_t x119 = 5U;
	int32_t x120 = 868751;

	t28 = ((x117<x118)<(x119-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x122 = INT16_MAX;
	uint64_t x123 = 218LLU;
	int32_t x124 = -1;

	t29 = ((x121<x122)<(x123-x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int16_t x127 = -1;
	static int64_t x128 = INT64_MAX;
	volatile int32_t t30 = 684866;

	t30 = ((x125<x126)<(x127-x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = INT64_MIN;
	static int16_t x131 = INT16_MIN;
	volatile int32_t t31 = 1755743;

	t31 = ((x129<x130)<(x131-x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x133 = 1521957148124LLU;
	int8_t x134 = INT8_MAX;
	static uint32_t x135 = 111428U;
	static int64_t x136 = -13917328023290LL;

	t32 = ((x133<x134)<(x135-x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	static int32_t x138 = 1260;
	int32_t x139 = -1;
	int32_t x140 = INT32_MIN;

	t33 = ((x137<x138)<(x139-x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = 1;
	int32_t x142 = INT32_MAX;
	static volatile int32_t t34 = -1;

	t34 = ((x141<x142)<(x143-x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = 78U;
	static uint64_t x146 = 7381613LLU;
	int8_t x147 = INT8_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t35 = -322557;

	t35 = ((x145<x146)<(x147-x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x149 = 45;
	int64_t x150 = INT64_MAX;
	static int32_t t36 = 819496197;

	t36 = ((x149<x150)<(x151-x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x156 = INT8_MIN;
	volatile int32_t t37 = -6;

	t37 = ((x153<x154)<(x155-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x158 = -7LL;
	static volatile int8_t x160 = INT8_MIN;
	int32_t t38 = 15985;

	t38 = ((x157<x158)<(x159-x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	int16_t x162 = -79;
	int8_t x163 = INT8_MAX;
	volatile int32_t t39 = 527151940;

	t39 = ((x161<x162)<(x163-x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = INT32_MAX;
	int8_t x167 = INT8_MAX;
	int64_t x168 = -15LL;
	static int32_t t40 = 117084328;

	t40 = ((x165<x166)<(x167-x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	uint64_t x171 = 319525LLU;
	uint32_t x172 = 116539U;
	volatile int32_t t41 = 11;

	t41 = ((x169<x170)<(x171-x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x173 = UINT16_MAX;
	static uint32_t x174 = UINT32_MAX;
	int32_t x176 = -7;
	int32_t t42 = -23;

	t42 = ((x173<x174)<(x175-x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -6614LL;
	static int16_t x178 = INT16_MAX;
	int8_t x179 = 0;
	volatile int64_t x180 = -154160LL;
	int32_t t43 = 815700904;

	t43 = ((x177<x178)<(x179-x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = 0;
	static int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t44 = 48669114;

	t44 = ((x181<x182)<(x183-x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	uint32_t x186 = 824291U;
	int16_t x187 = INT16_MIN;
	static int64_t x188 = -1LL;

	t45 = ((x185<x186)<(x187-x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = INT32_MIN;
	uint32_t x190 = 169401U;
	static int64_t x191 = INT64_MIN;
	int16_t x192 = -540;

	t46 = ((x189<x190)<(x191-x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 2;
	int32_t x195 = -1;
	volatile int32_t t47 = -1974;

	t47 = ((x193<x194)<(x195-x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x198 = UINT64_MAX;

	t48 = ((x197<x198)<(x199-x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MAX;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = 0;
	int16_t x208 = 10168;
	volatile int32_t t49 = 503117;

	t49 = ((x205<x206)<(x207-x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	volatile uint16_t x212 = 2U;

	t50 = ((x209<x210)<(x211-x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x214 = -1;
	static int32_t x215 = INT32_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t51 = -4673280;

	t51 = ((x213<x214)<(x215-x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = -29158;

	t52 = ((x221<x222)<(x223-x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x229 = -1;
	uint8_t x230 = 32U;
	volatile uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t53 = 1525;

	t53 = ((x229<x230)<(x231-x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x233 = UINT8_MAX;
	uint16_t x236 = 10U;
	int32_t t54 = -3007;

	t54 = ((x233<x234)<(x235-x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 433;
	int32_t x238 = INT32_MAX;
	volatile uint8_t x239 = 5U;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t55 = -58;

	t55 = ((x237<x238)<(x239-x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x241 = -122790LL;
	static int16_t x242 = -1;
	static int16_t x243 = INT16_MAX;

	t56 = ((x241<x242)<(x243-x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x250 = 63261258520982LLU;
	int16_t x252 = INT16_MIN;

	t57 = ((x249<x250)<(x251-x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x254 = -57;
	volatile int32_t t58 = 1017565120;

	t58 = ((x253<x254)<(x255-x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x257 = 10726769U;
	int64_t x258 = -34591223211630LL;

	t59 = ((x257<x258)<(x259-x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = -15375;
	int64_t x263 = -51LL;
	uint32_t x264 = UINT32_MAX;

	t60 = ((x261<x262)<(x263-x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 876;
	int8_t x266 = INT8_MIN;
	volatile int8_t x267 = 7;
	volatile int32_t t61 = 4391856;

	t61 = ((x265<x266)<(x267-x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = 61875870;
	volatile int8_t x270 = INT8_MIN;
	static volatile int32_t t62 = -946;

	t62 = ((x269<x270)<(x271-x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x273 = 13U;
	int32_t x274 = INT32_MAX;
	volatile int8_t x275 = -1;
	static volatile uint8_t x276 = UINT8_MAX;
	volatile int32_t t63 = -2;

	t63 = ((x273<x274)<(x275-x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1;
	uint64_t x278 = 59854LLU;
	volatile int64_t x279 = 12117475336086LL;
	static volatile uint8_t x280 = 6U;
	int32_t t64 = 33120734;

	t64 = ((x277<x278)<(x279-x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 105642935LLU;
	static uint8_t x283 = 98U;
	volatile uint8_t x284 = 55U;
	static volatile int32_t t65 = -220995;

	t65 = ((x281<x282)<(x283-x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 17045511522053864LLU;
	int16_t x287 = INT16_MAX;

	t66 = ((x285<x286)<(x287-x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = UINT16_MAX;
	uint16_t x291 = 1U;
	volatile int16_t x292 = INT16_MAX;
	int32_t t67 = -77;

	t67 = ((x289<x290)<(x291-x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 62U;
	static volatile uint32_t x295 = UINT32_MAX;
	volatile int64_t x296 = -1948641803891412301LL;
	int32_t t68 = -22587;

	t68 = ((x293<x294)<(x295-x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = 435;
	int16_t x299 = -1;
	uint64_t x300 = 485555717LLU;
	static int32_t t69 = 617762;

	t69 = ((x297<x298)<(x299-x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = 325U;
	int8_t x302 = INT8_MAX;
	int32_t x303 = 46;
	int16_t x304 = -178;

	t70 = ((x301<x302)<(x303-x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x309 = -1;
	int8_t x311 = -1;
	volatile int32_t t71 = -18659;

	t71 = ((x309<x310)<(x311-x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x314 = 525839546;
	static int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;
	int32_t t72 = 172616;

	t72 = ((x313<x314)<(x315-x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MAX;
	volatile uint64_t x318 = 66503811067062594LLU;
	int64_t x319 = -3758186819236318LL;
	int32_t t73 = 3799476;

	t73 = ((x317<x318)<(x319-x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = 1458819U;
	uint16_t x322 = 76U;
	static uint64_t x323 = 1306589125275008LLU;
	static volatile int32_t t74 = 1595;

	t74 = ((x321<x322)<(x323-x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x326 = 228130;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = -9;
	int32_t t75 = 193;

	t75 = ((x325<x326)<(x327-x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	volatile int32_t x331 = INT32_MIN;
	volatile int64_t x332 = -1LL;
	int32_t t76 = 92005;

	t76 = ((x329<x330)<(x331-x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x335 = 4;
	volatile int32_t t77 = 790908943;

	t77 = ((x333<x334)<(x335-x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x337 = INT8_MIN;
	uint32_t x338 = 6489U;
	uint32_t x339 = 4U;
	static uint16_t x340 = UINT16_MAX;

	t78 = ((x337<x338)<(x339-x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x341 = UINT16_MAX;
	uint64_t x343 = UINT64_MAX;
	int64_t x344 = INT64_MIN;

	t79 = ((x341<x342)<(x343-x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x345 = -1;
	int16_t x346 = -1;
	int64_t x347 = -37934701723LL;
	int16_t x348 = 6;

	t80 = ((x345<x346)<(x347-x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x350 = 144142644147207710LLU;
	volatile int16_t x351 = -1360;
	volatile int32_t t81 = 11504;

	t81 = ((x349<x350)<(x351-x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MIN;
	volatile uint64_t x354 = 22650282666742LLU;
	uint32_t x355 = 35981871U;
	int64_t x356 = 86148646062LL;
	static volatile int32_t t82 = 15986;

	t82 = ((x353<x354)<(x355-x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = -30;
	int8_t x363 = -21;
	int64_t x364 = 4LL;
	volatile int32_t t83 = 87;

	t83 = ((x361<x362)<(x363-x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -8;
	int16_t x370 = -1;
	int8_t x371 = -1;
	int32_t t84 = -16;

	t84 = ((x369<x370)<(x371-x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = -2;
	static uint8_t x375 = 49U;
	static int32_t t85 = 454362;

	t85 = ((x373<x374)<(x375-x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 2074463646468597120LLU;
	static int64_t x378 = -1LL;
	uint64_t x379 = 5248791028540847LLU;
	volatile uint64_t x380 = 17642556006476514LLU;
	volatile int32_t t86 = 322;

	t86 = ((x377<x378)<(x379-x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = -63025299;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = 535;

	t87 = ((x381<x382)<(x383-x384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x385 = 0U;
	static int64_t x386 = -2675726004517127LL;
	uint16_t x387 = 91U;
	int16_t x388 = INT16_MIN;
	int32_t t88 = 136;

	t88 = ((x385<x386)<(x387-x388));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x390 = -6138;
	uint64_t x391 = UINT64_MAX;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t89 = 1619;

	t89 = ((x389<x390)<(x391-x392));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x393 = INT32_MIN;
	static int32_t x394 = INT32_MAX;
	uint64_t x395 = 1LLU;
	uint8_t x396 = UINT8_MAX;
	int32_t t90 = 9984223;

	t90 = ((x393<x394)<(x395-x396));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x397 = INT8_MAX;
	int8_t x399 = -1;
	uint8_t x400 = 23U;
	static int32_t t91 = -69;

	t91 = ((x397<x398)<(x399-x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x401 = -148LL;
	uint16_t x402 = 1U;
	int64_t x403 = -1LL;
	int64_t x404 = -260765332LL;

	t92 = ((x401<x402)<(x403-x404));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x405 = 42982671314705541LLU;
	int8_t x408 = -3;
	int32_t t93 = -66037846;

	t93 = ((x405<x406)<(x407-x408));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = 1233;
	static int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	volatile int32_t t94 = 7817;

	t94 = ((x409<x410)<(x411-x412));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x413 = INT8_MIN;
	static int16_t x414 = INT16_MIN;
	static int16_t x416 = -1;
	volatile int32_t t95 = -7928;

	t95 = ((x413<x414)<(x415-x416));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x418 = INT32_MAX;
	uint32_t x419 = UINT32_MAX;
	volatile uint8_t x420 = 97U;
	static volatile int32_t t96 = 31530;

	t96 = ((x417<x418)<(x419-x420));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x421 = 28875189;
	int8_t x422 = INT8_MIN;
	static volatile int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;

	t97 = ((x421<x422)<(x423-x424));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x426 = -18;
	static uint32_t x427 = 32743351U;
	static int8_t x428 = 0;
	static volatile int32_t t98 = 24581;

	t98 = ((x425<x426)<(x427-x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 1U;
	int8_t x430 = 55;
	volatile uint16_t x431 = 10789U;
	uint64_t x432 = 8501123792199LLU;
	volatile int32_t t99 = -54314477;

	t99 = ((x429<x430)<(x431-x432));

	if (t99 != 1) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

