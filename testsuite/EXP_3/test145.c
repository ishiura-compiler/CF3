#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x20 = -32;
int8_t x23 = 0;
int32_t x26 = INT32_MIN;
static uint8_t x27 = 0U;
uint32_t x30 = 7341073U;
volatile uint64_t t6 = 5522LLU;
static volatile uint64_t x43 = 0LLU;
uint8_t x44 = 1U;
static int64_t x62 = INT64_MAX;
static int16_t x66 = INT16_MAX;
uint16_t x83 = UINT16_MAX;
static volatile uint32_t t14 = 50040U;
int64_t x86 = -77250111LL;
volatile uint64_t x87 = UINT64_MAX;
static uint64_t x96 = 1103LLU;
int32_t x100 = INT32_MIN;
volatile uint64_t x102 = 4164705790261LLU;
static uint32_t x103 = 2U;
volatile uint64_t t19 = 2766LLU;
volatile uint16_t x111 = UINT16_MAX;
int64_t t22 = 3083106751536054LL;
uint16_t x119 = 1U;
uint8_t x121 = UINT8_MAX;
int64_t x123 = -1LL;
int8_t x129 = INT8_MIN;
volatile uint32_t x138 = 9U;
volatile uint32_t t28 = 9484U;
int64_t x145 = INT64_MAX;
volatile int64_t t30 = -187LL;
static uint16_t x149 = 13U;
int32_t t31 = -311;
int32_t x164 = -231;
int64_t x173 = -765LL;
volatile int16_t x178 = 8;
uint64_t x180 = UINT64_MAX;
static uint8_t x186 = 55U;
static int8_t x188 = INT8_MIN;
static volatile uint32_t x190 = 22288U;
int8_t x191 = -1;
uint32_t x193 = UINT32_MAX;
volatile int32_t x206 = 156;
int8_t x209 = -1;
int64_t x210 = INT64_MAX;
static uint8_t x227 = UINT8_MAX;
int32_t x243 = INT32_MIN;
volatile int8_t x255 = 1;
int64_t x263 = 3155448077LL;
uint64_t t57 = 1122LLU;
int16_t x268 = -1;
static int32_t x271 = INT32_MIN;
static uint32_t t59 = 282244045U;
int32_t x274 = INT32_MIN;
uint64_t x275 = 3971385LLU;
uint64_t t62 = 4526265LLU;
static int8_t x293 = INT8_MIN;
uint32_t x296 = UINT32_MAX;
int8_t x301 = INT8_MAX;
int64_t x303 = INT64_MAX;
int16_t x304 = -9958;
volatile uint64_t x305 = 3985453851LLU;
volatile int64_t x306 = INT64_MIN;
int32_t x309 = INT32_MIN;
uint64_t x311 = 57499705LLU;
volatile uint64_t t69 = 2321567498195LLU;
uint16_t x313 = 18057U;
static int8_t x319 = 0;
int64_t t74 = 58761941117705442LL;
static int32_t x335 = -314223;
uint8_t x336 = UINT8_MAX;
int64_t x354 = INT64_MAX;
static int64_t x366 = 1944457486177027LL;
volatile int64_t x370 = -1LL;
static uint32_t x374 = 11U;
volatile int64_t t84 = 0LL;
static int32_t x381 = INT32_MIN;
int16_t x383 = -1;
volatile uint8_t x387 = 1U;
int8_t x389 = INT8_MIN;
volatile int16_t x394 = -1503;
static volatile uint64_t x395 = UINT64_MAX;
int32_t x401 = 791800;
volatile uint64_t x413 = 194LLU;
volatile int64_t x425 = INT64_MIN;
int16_t x428 = -1;
int64_t t96 = 533216355580LL;


void f0(void) {
	int32_t x1 = -1;
	static int32_t x2 = INT32_MAX;
	int64_t x3 = 6527697818756LL;
	uint8_t x4 = 1U;
	volatile int64_t t0 = -14737726LL;

	t0 = ((x1|x2)-(x3+x4));

	if (t0 != -6527697818758LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	static int32_t x7 = -148997;
	int64_t x8 = -1LL;
	static volatile uint64_t t1 = 41935987032429LLU;

	t1 = ((x5|x6)-(x7+x8));

	if (t1 != 148997LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = -1LL;
	static int16_t x18 = INT16_MIN;
	uint8_t x19 = 5U;
	volatile int64_t t2 = 0LL;

	t2 = ((x17|x18)-(x19+x20));

	if (t2 != 26LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x21 = -1;
	int32_t x22 = -1;
	int64_t x24 = INT64_MIN;
	volatile int64_t t3 = INT64_MAX;

	t3 = ((x21|x22)-(x23+x24));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int8_t x28 = -8;
	int32_t t4 = 37;

	t4 = ((x25|x26)-(x27+x28));

	if (t4 != -120) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 955U;
	uint32_t x31 = 12U;
	uint16_t x32 = UINT16_MAX;
	volatile uint32_t t5 = 336969482U;

	t5 = ((x29|x30)-(x31+x32));

	if (t5 != 7276464U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 1LLU;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MIN;
	volatile int64_t x36 = 111299892389743LL;

	t6 = ((x33|x34)-(x35+x36));

	if (t6 != 18446632775964645776LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	volatile uint8_t x38 = 7U;
	uint32_t x39 = 22U;
	volatile int16_t x40 = 197;
	static uint32_t t7 = 72150402U;

	t7 = ((x37|x38)-(x39+x40));

	if (t7 != 4294967076U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = UINT16_MAX;
	static int8_t x42 = -1;
	static volatile uint64_t t8 = 11125535422LLU;

	t8 = ((x41|x42)-(x43+x44));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = 80U;
	volatile uint32_t x54 = 41459U;
	int32_t x55 = -185360;
	uint16_t x56 = 43U;
	uint32_t t9 = 738642U;

	t9 = ((x53|x54)-(x55+x56));

	if (t9 != 226776U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = 3114;
	static uint16_t x63 = 457U;
	uint16_t x64 = UINT16_MAX;
	volatile int64_t t10 = 338843066LL;

	t10 = ((x61|x62)-(x63+x64));

	if (t10 != 9223372036854709815LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = INT8_MIN;
	static int8_t x67 = INT8_MIN;
	uint16_t x68 = UINT16_MAX;
	int32_t t11 = -72781858;

	t11 = ((x65|x66)-(x67+x68));

	if (t11 != -65408) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x69 = 878U;
	static int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	static int8_t x72 = -1;
	int64_t t12 = -1507638040LL;

	t12 = ((x69|x70)-(x71+x72));

	if (t12 != -9223372036854742161LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = 1878366LL;
	static int8_t x74 = INT8_MAX;
	static volatile uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MIN;
	int64_t t13 = -9343952501306LL;

	t13 = ((x73|x74)-(x75+x76));

	if (t13 != -4293056128LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = 11529U;
	uint32_t x82 = 115037U;
	int32_t x84 = -345;

	t14 = ((x81|x82)-(x83+x84));

	if (t14 != 61111U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x85 = 91;
	static int64_t x88 = INT64_MAX;
	uint64_t t15 = 321123052225869LLU;

	t15 = ((x85|x86)-(x87+x88));

	if (t15 != 9223372036777525725LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = 26;
	int64_t x90 = 10817376LL;
	static int8_t x91 = -5;
	uint8_t x92 = 56U;
	int64_t t16 = 5420851599330LL;

	t16 = ((x89|x90)-(x91+x92));

	if (t16 != 10817351LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 284566220U;
	static volatile uint32_t x95 = UINT32_MAX;
	uint64_t t17 = 81183545159850LLU;

	t17 = ((x93|x94)-(x95+x96));

	if (t17 != 18446744073709550462LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x97 = 5;
	int64_t x98 = -1LL;
	volatile uint64_t x99 = 11741952657744499LLU;
	static volatile uint64_t t18 = 4493962737842736760LLU;

	t18 = ((x97|x98)-(x99+x100));

	if (t18 != 18435002123199290764LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	volatile uint32_t x104 = 1U;

	t19 = ((x101|x102)-(x103+x104));

	if (t19 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	volatile int16_t x107 = -1;
	int32_t x108 = INT32_MAX;
	int32_t t20 = 3188677;

	t20 = ((x105|x106)-(x107+x108));

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x109 = -1;
	volatile int32_t x110 = INT32_MIN;
	int16_t x112 = -1;
	int32_t t21 = 673;

	t21 = ((x109|x110)-(x111+x112));

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x113 = 910U;
	int8_t x114 = -1;
	volatile uint16_t x115 = 0U;
	int64_t x116 = -1LL;

	t22 = ((x113|x114)-(x115+x116));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x117 = -1LL;
	static uint8_t x118 = 11U;
	volatile uint32_t x120 = 4178505U;
	int64_t t23 = -269766LL;

	t23 = ((x117|x118)-(x119+x120));

	if (t23 != -4178507LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x122 = 407;
	uint64_t x124 = 5592892475818LLU;
	uint64_t t24 = 3457851146311LLU;

	t24 = ((x121|x122)-(x123+x124));

	if (t24 != 18446738480817076310LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = -1;
	int32_t x127 = INT32_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t25 = -3889159;

	t25 = ((x125|x126)-(x127+x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x130 = 35;
	uint32_t x131 = 784U;
	uint16_t x132 = UINT16_MAX;
	volatile uint32_t t26 = 0U;

	t26 = ((x129|x130)-(x131+x132));

	if (t26 != 4294900884U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -1LL;
	uint8_t x134 = 23U;
	static volatile uint32_t x135 = 21773U;
	static int64_t x136 = INT64_MIN;
	static volatile int64_t t27 = 11946011275997LL;

	t27 = ((x133|x134)-(x135+x136));

	if (t27 != 9223372036854754034LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x137 = INT32_MAX;
	static int8_t x139 = -1;
	volatile uint8_t x140 = UINT8_MAX;

	t28 = ((x137|x138)-(x139+x140));

	if (t28 != 2147483393U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -1;
	int64_t x142 = -1LL;
	uint32_t x143 = 67982U;
	int64_t x144 = 2576348160275660LL;
	int64_t t29 = -9421LL;

	t29 = ((x141|x142)-(x143+x144));

	if (t29 != -2576348160343643LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x146 = INT64_MIN;
	static volatile int16_t x147 = 0;
	static volatile uint8_t x148 = 61U;

	t30 = ((x145|x146)-(x147+x148));

	if (t30 != -62LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x150 = 5U;
	uint8_t x151 = 0U;
	volatile int8_t x152 = INT8_MIN;

	t31 = ((x149|x150)-(x151+x152));

	if (t31 != 141) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 15U;
	uint16_t x154 = 0U;
	volatile int32_t x155 = INT32_MIN;
	uint16_t x156 = 7U;
	volatile uint32_t t32 = 48U;

	t32 = ((x153|x154)-(x155+x156));

	if (t32 != 2147483656U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 26973305366082348LLU;
	int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;
	volatile uint64_t t33 = 163198LLU;

	t33 = ((x157|x158)-(x159+x160));

	if (t33 != 2147447597LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	int16_t x163 = INT16_MAX;
	int32_t t34 = -106;

	t34 = ((x161|x162)-(x163+x164));

	if (t34 != -32537) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x165 = 0U;
	static int64_t x166 = -1LL;
	static int64_t x167 = INT64_MAX;
	uint64_t x168 = 3176087780746LLU;
	uint64_t t35 = 300791769883721335LLU;

	t35 = ((x165|x166)-(x167+x168));

	if (t35 != 9223368860766995062LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -3;
	static volatile uint8_t x170 = UINT8_MAX;
	int32_t x171 = 0;
	static uint64_t x172 = 33344867089LLU;
	volatile uint64_t t36 = 312814LLU;

	t36 = ((x169|x170)-(x171+x172));

	if (t36 != 18446744040364684526LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = -22988958;
	static int16_t x175 = 88;
	int16_t x176 = INT16_MIN;
	static int64_t t37 = -3958439LL;

	t37 = ((x173|x174)-(x175+x176));

	if (t37 != 32523LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = 1118840U;
	int8_t x179 = -46;
	volatile uint64_t t38 = 6678305310LLU;

	t38 = ((x177|x178)-(x179+x180));

	if (t38 != 1118887LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	static int32_t t39 = -5952471;

	t39 = ((x181|x182)-(x183+x184));

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x185 = 2831U;
	int8_t x187 = -1;
	volatile int32_t t40 = -8156;

	t40 = ((x185|x186)-(x187+x188));

	if (t40 != 3008) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x189 = 813;
	uint64_t x192 = 68LLU;
	volatile uint64_t t41 = 5LLU;

	t41 = ((x189|x190)-(x191+x192));

	if (t41 != 22266LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x194 = INT16_MIN;
	int32_t x195 = 80940;
	uint16_t x196 = 3U;
	uint32_t t42 = 767U;

	t42 = ((x193|x194)-(x195+x196));

	if (t42 != 4294886352U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 1U;
	static uint64_t x198 = UINT64_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t43 = 4596627LLU;

	t43 = ((x197|x198)-(x199+x200));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 8U;
	int16_t x202 = INT16_MIN;
	volatile uint8_t x203 = 6U;
	int16_t x204 = INT16_MIN;
	volatile int32_t t44 = -6;

	t44 = ((x201|x202)-(x203+x204));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = -106;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MAX;
	int32_t t45 = -2753;

	t45 = ((x205|x206)-(x207+x208));

	if (t45 != -480) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x211 = UINT16_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int64_t t46 = 41034355473LL;

	t46 = ((x209|x210)-(x211+x212));

	if (t46 != -65408LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = 286;
	uint32_t x218 = UINT32_MAX;
	uint32_t x219 = 3U;
	int64_t x220 = -16452169831363LL;
	volatile int64_t t47 = -807LL;

	t47 = ((x217|x218)-(x219+x220));

	if (t47 != 16456464798655LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = -1LL;
	uint8_t x222 = 6U;
	uint64_t x223 = 1009312LLU;
	int8_t x224 = INT8_MIN;
	uint64_t t48 = 654942112835606LLU;

	t48 = ((x221|x222)-(x223+x224));

	if (t48 != 18446744073708542431LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x225 = -1LL;
	static int16_t x226 = INT16_MIN;
	volatile uint32_t x228 = 12U;
	volatile int64_t t49 = 2026533749937487LL;

	t49 = ((x225|x226)-(x227+x228));

	if (t49 != -268LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = -70298908163LL;
	static uint32_t x230 = 56U;
	int32_t x231 = -1;
	int32_t x232 = 358;
	volatile int64_t t50 = -16897754015061780LL;

	t50 = ((x229|x230)-(x231+x232));

	if (t50 != -70298908520LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = -1;
	uint32_t x240 = 15896189U;
	uint32_t t51 = 62205U;

	t51 = ((x237|x238)-(x239+x240));

	if (t51 != 4279136643U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 25090U;
	uint32_t x242 = 1U;
	static int64_t x244 = 1LL;
	volatile int64_t t52 = 3629212933709425618LL;

	t52 = ((x241|x242)-(x243+x244));

	if (t52 != 2147508738LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = UINT32_MAX;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = -4;
	int64_t t53 = -2568040LL;

	t53 = ((x245|x246)-(x247+x248));

	if (t53 != -9223372032559808764LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	uint16_t x250 = 15551U;
	int32_t x251 = -1;
	uint8_t x252 = 2U;
	volatile uint64_t t54 = 506730148LLU;

	t54 = ((x249|x250)-(x251+x252));

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x253 = INT16_MIN;
	int64_t x254 = 478LL;
	static volatile int16_t x256 = -3;
	volatile int64_t t55 = -813875902213653365LL;

	t55 = ((x253|x254)-(x255+x256));

	if (t55 != -32288LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x257 = 5U;
	int16_t x258 = -1;
	volatile int16_t x259 = 3805;
	int32_t x260 = -981796;
	static volatile int32_t t56 = -124555;

	t56 = ((x257|x258)-(x259+x260));

	if (t56 != 977990) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 36725714LLU;
	uint16_t x264 = UINT16_MAX;

	t57 = ((x261|x262)-(x263+x264));

	if (t57 != 9223372033735987910LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = -1LL;
	static volatile int64_t x267 = -34839419882736LL;
	static int64_t t58 = -1651610191354963689LL;

	t58 = ((x265|x266)-(x267+x268));

	if (t58 != 34839419882736LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x269 = 213049133U;
	uint32_t x270 = 43378U;
	static uint8_t x272 = 12U;

	t59 = ((x269|x270)-(x271+x272));

	if (t59 != 2360541043U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x273 = -5;
	uint64_t x276 = 1357361525382LLU;
	uint64_t t60 = 2418LLU;

	t60 = ((x273|x274)-(x275+x276));

	if (t60 != 18446742716344054844LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	volatile int8_t x279 = INT8_MIN;
	static int32_t x280 = -1;
	int32_t t61 = -573142331;

	t61 = ((x277|x278)-(x279+x280));

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static int64_t x282 = INT64_MAX;
	volatile uint8_t x283 = UINT8_MAX;
	volatile uint64_t x284 = 10LLU;

	t62 = ((x281|x282)-(x283+x284));

	if (t62 != 9223372036854775542LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x285 = 9754557456454409LLU;
	static int32_t x286 = INT32_MIN;
	uint8_t x287 = 5U;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t63 = 4160931119LLU;

	t63 = ((x285|x286)-(x287+x288));

	if (t63 != 18446744073242022661LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x289 = INT16_MIN;
	volatile uint32_t x290 = 20U;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t64 = 12LLU;

	t64 = ((x289|x290)-(x291+x292));

	if (t64 != 9223372041149710357LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x294 = 1U;
	static int8_t x295 = INT8_MAX;
	volatile uint32_t t65 = 8633456U;

	t65 = ((x293|x294)-(x295+x296));

	if (t65 != 4294967043U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x297 = INT16_MAX;
	uint16_t x298 = 6U;
	int16_t x299 = 423;
	int8_t x300 = INT8_MAX;
	int32_t t66 = 18;

	t66 = ((x297|x298)-(x299+x300));

	if (t66 != 32217) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x302 = 3;
	int64_t t67 = -2054525783628868LL;

	t67 = ((x301|x302)-(x303+x304));

	if (t67 != -9223372036854765722LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x307 = -1LL;
	volatile int32_t x308 = INT32_MIN;
	volatile uint64_t t68 = 2117331794LLU;

	t68 = ((x305|x306)-(x307+x308));

	if (t68 != 9223372042987713308LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x310 = INT64_MIN;
	int64_t x312 = -832438LL;

	t69 = ((x309|x310)-(x311+x312));

	if (t69 != 18446744071505400701LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x314 = INT32_MIN;
	static int32_t x315 = INT32_MAX;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t70 = 238699678802082974LL;

	t70 = ((x313|x314)-(x315+x316));

	if (t70 != 9223372032559826570LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x317 = 113994590611903LL;
	uint16_t x318 = UINT16_MAX;
	static uint64_t x320 = UINT64_MAX;
	volatile uint64_t t71 = 21LLU;

	t71 = ((x317|x318)-(x319+x320));

	if (t71 != 113994590650368LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x321 = UINT64_MAX;
	uint16_t x322 = 2023U;
	uint16_t x323 = 1U;
	uint64_t x324 = 247803887538LLU;
	uint64_t t72 = 61973LLU;

	t72 = ((x321|x322)-(x323+x324));

	if (t72 != 18446743825905664076LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 4U;
	volatile int64_t x326 = INT64_MAX;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = UINT16_MAX;
	int64_t t73 = -60746087006LL;

	t73 = ((x325|x326)-(x327+x328));

	if (t73 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	int8_t x332 = 4;

	t74 = ((x329|x330)-(x331+x332));

	if (t74 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 192890117280535367LLU;
	volatile uint64_t x334 = 3092819270554818LLU;
	volatile uint64_t t75 = 3121557966939452LLU;

	t75 = ((x333|x334)-(x335+x336));

	if (t75 != 193651413400592951LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x337 = 3U;
	static volatile uint32_t x338 = 3U;
	uint16_t x339 = 4760U;
	volatile int16_t x340 = -126;
	uint32_t t76 = 407248375U;

	t76 = ((x337|x338)-(x339+x340));

	if (t76 != 4294962665U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x341 = 4;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 0U;
	int16_t x344 = INT16_MAX;
	volatile int32_t t77 = 857;

	t77 = ((x341|x342)-(x343+x344));

	if (t77 != -65531) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -1091;
	volatile uint32_t x350 = 3527U;
	uint32_t x351 = 1942U;
	int32_t x352 = 136550;
	uint32_t t78 = 62428U;

	t78 = ((x349|x350)-(x351+x352));

	if (t78 != 4294828803U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = 11976LLU;
	volatile uint64_t t79 = 25670606373146LLU;

	t79 = ((x353|x354)-(x355+x356));

	if (t79 != 9223372036854731064LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 158789LLU;
	static uint32_t x358 = 9544U;
	static volatile int16_t x359 = -1;
	int8_t x360 = INT8_MAX;
	uint64_t t80 = 8054820715247290217LLU;

	t80 = ((x357|x358)-(x359+x360));

	if (t80 != 158927LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = -1LL;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MAX;
	static volatile uint64_t t81 = 6273028229057LLU;

	t81 = ((x361|x362)-(x363+x364));

	if (t81 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = 1969494LL;
	int32_t x367 = -11159891;
	int16_t x368 = INT16_MIN;
	int64_t t82 = -2225830108647LL;

	t82 = ((x365|x366)-(x367+x368));

	if (t82 != 1944457497372842LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x369 = 5358997U;
	static volatile int16_t x371 = 3;
	static int64_t x372 = INT64_MIN;
	static volatile int64_t t83 = 4508954715464008LL;

	t83 = ((x369|x370)-(x371+x372));

	if (t83 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x373 = 6U;
	int64_t x375 = -1LL;
	int64_t x376 = -1LL;

	t84 = ((x373|x374)-(x375+x376));

	if (t84 != 17LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x382 = UINT8_MAX;
	uint64_t x384 = 5080742898LLU;
	uint64_t t85 = 30LLU;

	t85 = ((x381|x382)-(x383+x384));

	if (t85 != 18446744066481325326LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x385 = INT8_MAX;
	uint32_t x386 = 109762U;
	volatile int8_t x388 = INT8_MIN;
	volatile uint32_t t86 = 5105310U;

	t86 = ((x385|x386)-(x387+x388));

	if (t86 != 109950U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x390 = -1;
	uint32_t x391 = 13U;
	volatile int16_t x392 = -1;
	volatile uint32_t t87 = 108U;

	t87 = ((x389|x390)-(x391+x392));

	if (t87 != 4294967283U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MIN;
	volatile int32_t x396 = 1;
	static volatile uint64_t t88 = 74334699146LLU;

	t88 = ((x393|x394)-(x395+x396));

	if (t88 != 18446744073709550113LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x397 = 0U;
	uint64_t x398 = 14823LLU;
	int64_t x399 = 8608837525228685LL;
	int16_t x400 = INT16_MIN;
	uint64_t t89 = 2704362937129LLU;

	t89 = ((x397|x398)-(x399+x400));

	if (t89 != 18438135236184370522LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x402 = INT8_MAX;
	uint16_t x403 = 121U;
	volatile uint8_t x404 = 1U;
	int32_t t90 = -4004;

	t90 = ((x401|x402)-(x403+x404));

	if (t90 != 791685) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = INT8_MAX;
	int8_t x406 = -1;
	uint8_t x407 = 1U;
	uint8_t x408 = 13U;
	volatile int32_t t91 = -73;

	t91 = ((x405|x406)-(x407+x408));

	if (t91 != -15) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x409 = UINT32_MAX;
	static int8_t x410 = -24;
	uint32_t x411 = 5055676U;
	int64_t x412 = -1LL;
	static int64_t t92 = -25532269306LL;

	t92 = ((x409|x410)-(x411+x412));

	if (t92 != 4289911620LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x414 = INT64_MIN;
	volatile int64_t x415 = INT64_MIN;
	uint32_t x416 = 196077587U;
	static uint64_t t93 = 2586037907LLU;

	t93 = ((x413|x414)-(x415+x416));

	if (t93 != 18446744073513474223LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = 98009324;
	int64_t x418 = -52072057298003912LL;
	uint32_t x419 = UINT32_MAX;
	int32_t x420 = INT32_MIN;
	int64_t t94 = 5LL;

	t94 = ((x417|x418)-(x419+x420));

	if (t94 != -52072059347937027LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 6720U;
	static int8_t x422 = INT8_MIN;
	int32_t x423 = 10;
	uint8_t x424 = 7U;
	uint32_t t95 = 57798797U;

	t95 = ((x421|x422)-(x423+x424));

	if (t95 != 4294967215U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x426 = 4874610456LL;
	static uint32_t x427 = 3532U;

	t96 = ((x425|x426)-(x427+x428));

	if (t96 != -9223372031980168883LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = INT32_MIN;
	static uint32_t x430 = 165159U;
	int64_t x431 = -4LL;
	int64_t x432 = -1LL;
	volatile int64_t t97 = -793LL;

	t97 = ((x429|x430)-(x431+x432));

	if (t97 != 2147648812LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x433 = 17413LLU;
	int8_t x434 = INT8_MIN;
	uint8_t x435 = 7U;
	static int8_t x436 = 0;
	static uint64_t t98 = 250531667598LLU;

	t98 = ((x433|x434)-(x435+x436));

	if (t98 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MIN;
	uint32_t x439 = 19604U;
	uint64_t x440 = 4187914714700LLU;
	static volatile uint64_t t99 = 54612898130LLU;

	t99 = ((x437|x438)-(x439+x440));

	if (t99 != 18446739885794817311LLU) { NG(); } else { ; }
	
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

