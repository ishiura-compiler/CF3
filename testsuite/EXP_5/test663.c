#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x12 = INT32_MIN;
uint64_t x16 = 13854178497272LLU;
int64_t x20 = INT64_MIN;
uint64_t t5 = 54165129034941LLU;
uint32_t x27 = UINT32_MAX;
int8_t x34 = -1;
static int16_t x38 = INT16_MAX;
int64_t t10 = 571LL;
int64_t x45 = INT64_MIN;
volatile int64_t t14 = -83697916386434690LL;
static int8_t x65 = INT8_MAX;
int16_t x74 = INT16_MAX;
static uint16_t x75 = UINT16_MAX;
int32_t x79 = INT32_MAX;
static int32_t x88 = INT32_MIN;
int8_t x96 = INT8_MIN;
volatile int32_t x97 = INT32_MIN;
uint8_t x100 = UINT8_MAX;
int8_t x106 = INT8_MAX;
int64_t x108 = INT64_MAX;
volatile int64_t t26 = 8LL;
uint8_t x121 = 63U;
uint16_t x123 = UINT16_MAX;
uint8_t x126 = 49U;
uint32_t x127 = UINT32_MAX;
uint64_t t31 = 1411LLU;
int16_t x137 = INT16_MIN;
int32_t x142 = INT32_MAX;
uint16_t x145 = 1U;
uint64_t x147 = 208333556711LLU;
int64_t x151 = INT64_MAX;
volatile uint32_t x162 = UINT32_MAX;
int64_t x163 = -1LL;
static int8_t x171 = -1;
static volatile int64_t t42 = 58762053LL;
int8_t x179 = INT8_MIN;
volatile int32_t x182 = -1;
int32_t x186 = INT32_MAX;
int8_t x187 = -7;
int8_t x190 = 10;
volatile uint16_t x191 = 1837U;
int64_t x193 = INT64_MAX;
int64_t x194 = INT64_MAX;
int64_t x197 = INT64_MIN;
static int64_t x199 = INT64_MIN;
int16_t x202 = -1;
uint64_t t50 = 1319389341512LLU;
int16_t x206 = 1;
int32_t x222 = 43286793;
int16_t x223 = -1;
static uint8_t x225 = 7U;
static int8_t x229 = 0;
static uint16_t x232 = 6U;
volatile int64_t t56 = -597377831567203714LL;
static int32_t x237 = INT32_MAX;
volatile int16_t x240 = 47;
int8_t x244 = 1;
uint8_t x252 = 1U;
int64_t t61 = -1120312LL;
static uint16_t x253 = 2U;
volatile int16_t x254 = -55;
int32_t x256 = INT32_MAX;
static int64_t x258 = -1080LL;
int8_t x260 = INT8_MAX;
int8_t x267 = INT8_MIN;
uint8_t x269 = UINT8_MAX;
uint8_t x270 = 67U;
static uint16_t x271 = 1215U;
volatile uint32_t x272 = 1167U;
uint8_t x275 = UINT8_MAX;
int16_t x276 = -9;
int64_t t67 = 4457778268LL;
volatile int8_t x290 = INT8_MIN;
volatile int16_t x300 = -1;
uint32_t x302 = 11374551U;
static volatile uint64_t x303 = UINT64_MAX;
int8_t x305 = INT8_MIN;
static int16_t x307 = INT16_MAX;
static volatile uint64_t t76 = 1098358059610231797LLU;
uint32_t x315 = 35584U;
static volatile int32_t x324 = -1321;
static uint64_t t80 = 873814547906923LLU;
static int8_t x331 = INT8_MIN;
static int8_t x335 = INT8_MAX;
uint32_t x344 = UINT32_MAX;
int16_t x346 = INT16_MIN;
uint8_t x349 = 0U;
int64_t x352 = -2076141959087619LL;
int32_t t86 = -4961772;
volatile uint32_t x359 = 1088214933U;
uint16_t x360 = 4U;
int32_t x362 = INT32_MAX;
static volatile int32_t x367 = 4215;
volatile int16_t x368 = INT16_MIN;
static int64_t x369 = 4631LL;
volatile uint32_t t91 = 0U;
int16_t x377 = -690;
uint8_t x384 = 5U;
volatile int64_t t94 = -4556873499LL;
volatile uint64_t x394 = 20400714LLU;
int64_t x396 = -161195124387355LL;
int32_t x402 = INT32_MIN;


void f0(void) {
	uint16_t x1 = 30346U;
	static int8_t x2 = -5;
	volatile int64_t x3 = 23306053388239769LL;
	volatile int16_t x4 = -1;
	volatile int64_t t0 = -230011LL;

	t0 = (x1^((x2/x3)|x4));

	if (t0 != -30347LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -399565LL;
	static int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = -584658545184079707LL;

	t1 = (x5^((x6/x7)|x8));

	if (t1 != 399564LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -3;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = 599238U;
	volatile uint32_t t2 = 1319784U;

	t2 = (x9^((x10/x11)|x12));

	if (t2 != 2147480066U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 18;
	int16_t x14 = INT16_MIN;
	static uint32_t x15 = UINT32_MAX;
	volatile uint64_t t3 = 997131578871LLU;

	t3 = (x13^((x14/x15)|x16));

	if (t3 != 13854178497258LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint64_t x18 = 177306562389LLU;
	uint8_t x19 = UINT8_MAX;
	uint64_t t4 = 517339024391242LLU;

	t4 = (x17^((x18/x19)|x20));

	if (t4 != 9223372038306939603LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	volatile uint64_t x24 = 0LLU;

	t5 = (x21^((x22/x23)|x24));

	if (t5 != 32766LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	volatile int64_t t6 = -2421677642888044LL;

	t6 = (x25^((x26/x27)|x28));

	if (t6 != 2147483520LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	uint64_t x30 = 24224488444244LLU;
	int8_t x31 = -1;
	volatile uint16_t x32 = UINT16_MAX;
	uint64_t t7 = 65330516LLU;

	t7 = (x29^((x30/x31)|x32));

	if (t7 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	static int8_t x36 = INT8_MIN;
	static int32_t t8 = -298;

	t8 = (x33^((x34/x35)|x36));

	if (t8 != -65409) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MIN;
	static int8_t x39 = 16;
	int16_t x40 = -1446;
	int32_t t9 = 1005870;

	t9 = (x37^((x38/x39)|x40));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 14U;
	volatile int16_t x42 = -1;
	int32_t x43 = -230595;
	static int64_t x44 = 3384823LL;

	t10 = (x41^((x42/x43)|x44));

	if (t10 != 3384825LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	volatile int32_t x47 = -4;
	int64_t x48 = INT64_MIN;
	int64_t t11 = -1663LL;

	t11 = (x45^((x46/x47)|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MAX;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -1;
	volatile int32_t t12 = -196095;

	t12 = (x49^((x50/x51)|x52));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 40960181272131LLU;
	int64_t x54 = INT64_MIN;
	volatile int8_t x55 = INT8_MAX;
	int16_t x56 = 49;
	volatile uint64_t t13 = 28683945542LLU;

	t13 = (x53^((x54/x55)|x56));

	if (t13 != 18374086932953186620LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static volatile uint8_t x58 = 2U;
	volatile int64_t x59 = -42658954LL;
	int8_t x60 = -1;

	t14 = (x57^((x58/x59)|x60));

	if (t14 != -4294967296LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = 684;
	uint32_t x63 = 1074U;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -7924915661LL;

	t15 = (x61^((x62/x63)|x64));

	if (t15 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MIN;
	int32_t x67 = 5802552;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -156;

	t16 = (x65^((x66/x67)|x68));

	if (t16 != 2147483520) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -4;
	volatile int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	static int32_t x72 = -429615964;
	int32_t t17 = 67721392;

	t17 = (x69^((x70/x71)|x72));

	if (t17 != 429550424) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 9759847LLU;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t18 = 111LLU;

	t18 = (x73^((x74/x75)|x76));

	if (t18 != 18446744071571827815LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = -1;
	static int32_t x80 = -1;
	int32_t t19 = INT32_MAX;

	t19 = (x77^((x78/x79)|x80));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int32_t x82 = -1;
	int64_t x83 = -1LL;
	uint64_t x84 = 7436LLU;
	static uint64_t t20 = 853553LLU;

	t20 = (x81^((x82/x83)|x84));

	if (t20 != 18446744073709544178LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	volatile uint32_t x86 = 3732490U;
	int64_t x87 = -1887LL;
	int64_t t21 = -985387LL;

	t21 = (x85^((x86/x87)|x88));

	if (t21 != 2147481670LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = 5;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 24245429564702724LLU;
	static uint64_t t22 = 1945485413248LLU;

	t22 = (x89^((x90/x91)|x92));

	if (t22 != 18422498646045065220LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MAX;
	static uint8_t x94 = UINT8_MAX;
	static int16_t x95 = -13;
	volatile int64_t t23 = 202146366002LL;

	t23 = (x93^((x94/x95)|x96));

	if (t23 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	static int64_t x99 = INT64_MIN;
	int64_t t24 = 832462788LL;

	t24 = (x97^((x98/x99)|x100));

	if (t24 != -2147483393LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 766893660LLU;
	volatile int16_t x102 = -10186;
	uint16_t x103 = 5U;
	volatile uint32_t x104 = 0U;
	volatile uint64_t t25 = 2599692314LLU;

	t25 = (x101^((x102/x103)|x104));

	if (t25 != 3528074839LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	static uint32_t x107 = UINT32_MAX;

	t26 = (x105^((x106/x107)|x108));

	if (t26 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 55U;
	int8_t x110 = 1;
	uint8_t x111 = 12U;
	volatile uint32_t x112 = 11917140U;
	volatile uint32_t t27 = 409853173U;

	t27 = (x109^((x110/x111)|x112));

	if (t27 != 11917155U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 11U;
	int8_t x115 = -1;
	uint8_t x116 = 1U;
	uint32_t t28 = 6228774U;

	t28 = (x113^((x114/x115)|x116));

	if (t28 != 10U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 1258LLU;
	int64_t x118 = -12LL;
	int64_t x119 = -889607162LL;
	int32_t x120 = INT32_MIN;
	uint64_t t29 = 2416820746LLU;

	t29 = (x117^((x118/x119)|x120));

	if (t29 != 18446744071562069226LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = 16571623LLU;

	t30 = (x121^((x122/x123)|x124));

	if (t30 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 58U;
	volatile uint64_t x128 = 5469417446345150288LLU;

	t31 = (x125^((x126/x127)|x128));

	if (t31 != 5469417446345150314LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int32_t x130 = -321035;
	volatile int32_t x131 = INT32_MIN;
	uint8_t x132 = 0U;
	static uint32_t t32 = UINT32_MAX;

	t32 = (x129^((x130/x131)|x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = INT64_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile uint32_t x136 = 2U;
	volatile int64_t t33 = -4154688911218657LL;

	t33 = (x133^((x134/x135)|x136));

	if (t33 != 36170086419038210LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x138 = INT64_MAX;
	int16_t x139 = 2;
	static uint32_t x140 = 6U;
	static volatile int64_t t34 = -1LL;

	t34 = (x137^((x138/x139)|x140));

	if (t34 != -4611686018427355137LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	uint16_t x144 = 1747U;
	volatile int64_t t35 = 712787536780LL;

	t35 = (x141^((x142/x143)|x144));

	if (t35 != -9223372036837865765LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	uint16_t x148 = UINT16_MAX;
	uint64_t t36 = 2359572175240502215LLU;

	t36 = (x145^((x146/x147)|x148));

	if (t36 != 88604670LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 1U;
	static int8_t x150 = INT8_MAX;
	uint64_t x152 = 119439364478320566LLU;
	uint64_t t37 = 2563552095LLU;

	t37 = (x149^((x150/x151)|x152));

	if (t37 != 119439364478320567LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 1051LLU;
	int8_t x154 = -1;
	volatile uint16_t x155 = 6U;
	int8_t x156 = INT8_MAX;
	volatile uint64_t t38 = 1949525332359344LLU;

	t38 = (x153^((x154/x155)|x156));

	if (t38 != 1124LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -30543;
	static volatile int8_t x158 = INT8_MIN;
	uint8_t x159 = 109U;
	uint8_t x160 = UINT8_MAX;
	static int32_t t39 = -986;

	t39 = (x157^((x158/x159)|x160));

	if (t39 != 30542) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static volatile uint16_t x164 = UINT16_MAX;
	int64_t t40 = 2860039791365LL;

	t40 = (x161^((x162/x163)|x164));

	if (t40 != 4294934527LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 8494;
	int16_t x166 = INT16_MAX;
	static int32_t x167 = INT32_MIN;
	static uint32_t x168 = UINT32_MAX;
	uint32_t t41 = 63213U;

	t41 = (x165^((x166/x167)|x168));

	if (t41 != 4294958801U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	volatile int16_t x170 = -14488;
	int16_t x172 = INT16_MIN;

	t42 = (x169^((x170/x171)|x172));

	if (t42 != -9223372036854757529LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 2U;
	int64_t x174 = INT64_MAX;
	static volatile uint32_t x175 = 351U;
	int64_t x176 = 296202566652776LL;
	int64_t t43 = 29653365LL;

	t43 = (x173^((x174/x175)|x176));

	if (t43 != 26282103327283192LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -14121755;
	int32_t x178 = INT32_MIN;
	int32_t x180 = -1;
	int32_t t44 = 463618;

	t44 = (x177^((x178/x179)|x180));

	if (t44 != 14121754) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int32_t x183 = 638956;
	static int16_t x184 = INT16_MAX;
	volatile int32_t t45 = 123621;

	t45 = (x181^((x182/x183)|x184));

	if (t45 != -2147450881) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MAX;
	uint8_t x188 = 26U;
	volatile int32_t t46 = 7104985;

	t46 = (x185^((x186/x187)|x188));

	if (t46 != -1840700287) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = 97438LLU;

	t47 = (x189^((x190/x191)|x192));

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x195 = 4U;
	static uint8_t x196 = 31U;
	int64_t t48 = -687300LL;

	t48 = (x193^((x194/x195)|x196));

	if (t48 != 6917529027641081856LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x198 = -1LL;
	int16_t x200 = -28;
	int64_t t49 = 10LL;

	t49 = (x197^((x198/x199)|x200));

	if (t49 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int16_t x203 = INT16_MIN;
	uint64_t x204 = UINT64_MAX;

	t50 = (x201^((x202/x203)|x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int8_t x207 = INT8_MAX;
	volatile int8_t x208 = -1;
	static uint64_t t51 = 821049932461969LLU;

	t51 = (x205^((x206/x207)|x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MAX;
	uint32_t x211 = 1794887U;
	volatile int64_t x212 = -1LL;
	int64_t t52 = 429406342908874553LL;

	t52 = (x209^((x210/x211)|x212));

	if (t52 != -256LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 3U;
	volatile uint64_t t53 = 2229LLU;

	t53 = (x217^((x218/x219)|x220));

	if (t53 != 32764LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -1;
	volatile int16_t x224 = 192;
	volatile int32_t t54 = 1586;

	t54 = (x221^((x222/x223)|x224));

	if (t54 != 43286792) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 38823081U;
	volatile int64_t t55 = -67LL;

	t55 = (x225^((x226/x227)|x228));

	if (t55 != 281475015533742LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x230 = 51U;
	static int64_t x231 = INT64_MIN;

	t56 = (x229^((x230/x231)|x232));

	if (t56 != 6LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -23;
	int16_t x234 = 86;
	volatile int32_t x235 = 2381238;
	uint16_t x236 = 364U;
	volatile int32_t t57 = 234003;

	t57 = (x233^((x234/x235)|x236));

	if (t57 != -379) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x238 = UINT32_MAX;
	int32_t x239 = INT32_MAX;
	uint32_t t58 = 4762033U;

	t58 = (x237^((x238/x239)|x240));

	if (t58 != 2147483600U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = 13LL;
	volatile int64_t t59 = -105556LL;

	t59 = (x241^((x242/x243)|x244));

	if (t59 != 119LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	static int16_t x246 = -1;
	uint64_t x247 = 6LLU;
	static uint16_t x248 = 17U;
	volatile uint64_t t60 = 9128340442764LLU;

	t60 = (x245^((x246/x247)|x248));

	if (t60 != 15372286728091292987LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -1;
	int64_t x250 = 184475447409963586LL;
	int16_t x251 = 5;

	t61 = (x249^((x250/x251)|x252));

	if (t61 != -36895089481992718LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x255 = INT64_MIN;
	int64_t t62 = 696269597LL;

	t62 = (x253^((x254/x255)|x256));

	if (t62 != 2147483645LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x257 = -1LL;
	int8_t x259 = INT8_MIN;
	int64_t t63 = 384965645588LL;

	t63 = (x257^((x258/x259)|x260));

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = INT16_MAX;
	static uint16_t x262 = 378U;
	int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t64 = 440502LL;

	t64 = (x261^((x262/x263)|x264));

	if (t64 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = UINT8_MAX;
	volatile uint8_t x266 = 79U;
	int64_t x268 = INT64_MIN;
	int64_t t65 = 37806821015731LL;

	t65 = (x265^((x266/x267)|x268));

	if (t65 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t t66 = 13U;

	t66 = (x269^((x270/x271)|x272));

	if (t66 != 1136U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = -1;
	int64_t x274 = INT64_MAX;

	t67 = (x273^((x274/x275)|x276));

	if (t67 != 8LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	uint32_t x279 = UINT32_MAX;
	uint32_t x280 = UINT32_MAX;
	static uint32_t t68 = 485U;

	t68 = (x277^((x278/x279)|x280));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 85U;
	uint32_t x282 = 797849854U;
	static volatile uint16_t x283 = 1167U;
	uint8_t x284 = UINT8_MAX;
	volatile uint32_t t69 = 285781U;

	t69 = (x281^((x282/x283)|x284));

	if (t69 != 683690U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 6122U;
	static volatile int64_t x286 = -1LL;
	static uint32_t x287 = UINT32_MAX;
	int64_t x288 = -64185LL;
	static int64_t t70 = -425265179189904LL;

	t70 = (x285^((x286/x287)|x288));

	if (t70 != -60755LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x289 = INT64_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	volatile uint8_t x292 = 7U;
	volatile int64_t t71 = 348188392LL;

	t71 = (x289^((x290/x291)|x292));

	if (t71 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x293 = UINT32_MAX;
	volatile uint16_t x294 = 1559U;
	static int32_t x295 = INT32_MIN;
	static volatile int16_t x296 = -1;
	uint32_t t72 = 820074U;

	t72 = (x293^((x294/x295)|x296));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = 5U;
	static int16_t x299 = INT16_MIN;
	int64_t t73 = 71635LL;

	t73 = (x297^((x298/x299)|x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = -29LL;
	uint64_t x304 = UINT64_MAX;
	static uint64_t t74 = 24LLU;

	t74 = (x301^((x302/x303)|x304));

	if (t74 != 28LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x306 = INT32_MIN;
	int32_t x308 = 105006;
	static volatile int32_t t75 = 436091192;

	t75 = (x305^((x306/x307)|x308));

	if (t75 != 126) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x309 = 27U;
	volatile int8_t x310 = INT8_MAX;
	int64_t x311 = INT64_MAX;
	uint64_t x312 = UINT64_MAX;

	t76 = (x309^((x310/x311)|x312));

	if (t76 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x313 = 166543U;
	static volatile int64_t x314 = -555553713LL;
	int8_t x316 = -29;
	static int64_t t77 = 58934LL;

	t77 = (x313^((x314/x315)|x316));

	if (t77 != -166552LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x317 = 55;
	static uint32_t x318 = 3U;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t x320 = 125;
	uint32_t t78 = 69077U;

	t78 = (x317^((x318/x319)|x320));

	if (t78 != 74U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -14814102;
	uint16_t x322 = UINT16_MAX;
	volatile int32_t x323 = 84451;
	int32_t t79 = 255645;

	t79 = (x321^((x322/x323)|x324));

	if (t79 != 14814909) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 100536381LLU;
	static uint8_t x326 = 0U;
	uint8_t x327 = UINT8_MAX;
	volatile int64_t x328 = -1LL;

	t80 = (x325^((x326/x327)|x328));

	if (t80 != 18446744073609015234LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x329 = 7312U;
	volatile uint16_t x330 = 1U;
	int8_t x332 = -1;
	volatile uint32_t t81 = 235871U;

	t81 = (x329^((x330/x331)|x332));

	if (t81 != 4294959983U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = -1LL;
	static int64_t x334 = -273205946LL;
	int32_t x336 = -1;
	static int64_t t82 = -4099327045LL;

	t82 = (x333^((x334/x335)|x336));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	static uint16_t x342 = 6U;
	int32_t x343 = -24475;
	static volatile uint32_t t83 = 195788U;

	t83 = (x341^((x342/x343)|x344));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x345 = INT64_MIN;
	volatile uint16_t x347 = 31823U;
	int16_t x348 = 459;
	int64_t t84 = INT64_MAX;

	t84 = (x345^((x346/x347)|x348));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MAX;
	int64_t t85 = 304790LL;

	t85 = (x349^((x350/x351)|x352));

	if (t85 != -2076141959087619LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = -1;
	uint8_t x354 = 1U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;

	t86 = (x353^((x354/x355)|x356));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	volatile int64_t t87 = -4LL;

	t87 = (x357^((x358/x359)|x360));

	if (t87 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -86;
	static uint64_t x363 = 17LLU;
	uint64_t x364 = 324LLU;
	uint64_t t88 = 6294982182360149LLU;

	t88 = (x361^((x362/x363)|x364));

	if (t88 != 18446744073583229037LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = UINT64_MAX;
	static volatile uint64_t t89 = 95439465660LLU;

	t89 = (x365^((x366/x367)|x368));

	if (t89 != 18446744073709502040LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	static volatile int64_t t90 = 766520LL;

	t90 = (x369^((x370/x371)|x372));

	if (t90 != -4632LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MAX;
	uint32_t x374 = 3887U;
	uint8_t x375 = 12U;
	volatile uint32_t x376 = UINT32_MAX;

	t91 = (x373^((x374/x375)|x376));

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MAX;
	int64_t t92 = 142248738174LL;

	t92 = (x377^((x378/x379)|x380));

	if (t92 != 33457LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = -19649;
	static volatile int64_t x382 = -120810LL;
	volatile int16_t x383 = INT16_MIN;
	int64_t t93 = 18785271268099233LL;

	t93 = (x381^((x382/x383)|x384));

	if (t93 != -19656LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x385 = 31398355LL;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MAX;

	t94 = (x385^((x386/x387)|x388));

	if (t94 != 9223372036823377452LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 115157419249LLU;
	int16_t x391 = 113;
	int64_t x392 = -1LL;
	volatile uint64_t t95 = 1804006930831336LLU;

	t95 = (x389^((x390/x391)|x392));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x393 = 1;
	static uint64_t x395 = 5835LLU;
	volatile uint64_t t96 = 14500903166167LLU;

	t96 = (x393^((x394/x395)|x396));

	if (t96 != 18446582878585167340LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = -1;
	int8_t x398 = -5;
	volatile int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MAX;
	volatile int64_t t97 = -18163179677LL;

	t97 = (x397^((x398/x399)|x400));

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = -1LL;
	uint64_t x403 = 19537631029323LLU;
	static volatile int64_t x404 = INT64_MAX;
	uint64_t t98 = 3668904083264435023LLU;

	t98 = (x401^((x402/x403)|x404));

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x405 = 11570046U;
	uint64_t x406 = 82LLU;
	volatile uint8_t x407 = 68U;
	uint8_t x408 = 0U;
	volatile uint64_t t99 = 238157008028LLU;

	t99 = (x405^((x406/x407)|x408));

	if (t99 != 11570047LLU) { NG(); } else { ; }
	
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

