#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = -1;
static uint16_t x6 = UINT16_MAX;
int32_t x12 = -61;
int64_t x23 = INT64_MIN;
volatile uint16_t x24 = UINT16_MAX;
int8_t x27 = INT8_MIN;
uint8_t x32 = 1U;
volatile int32_t t6 = 0;
volatile int16_t x38 = 1;
volatile int16_t x40 = INT16_MAX;
int32_t x41 = INT32_MAX;
int8_t x44 = -1;
volatile int64_t x46 = INT64_MIN;
static int64_t x48 = 0LL;
int32_t x54 = 38832;
static uint64_t x55 = UINT64_MAX;
volatile int32_t t12 = -265526242;
volatile int8_t x57 = 2;
uint8_t x58 = 0U;
int32_t x64 = -941619188;
int32_t t14 = -1752;
volatile int16_t x69 = 14;
int8_t x70 = -1;
uint64_t x72 = 581370791669LLU;
volatile int8_t x81 = -1;
uint64_t x82 = 173801124627000LLU;
static int8_t x84 = INT8_MAX;
static volatile int8_t x86 = INT8_MIN;
int32_t x88 = INT32_MIN;
int64_t x94 = -1LL;
uint8_t x95 = UINT8_MAX;
static int16_t x100 = -10763;
static uint32_t x105 = 1U;
int16_t x106 = INT16_MIN;
volatile uint32_t x113 = 55370U;
int32_t t24 = 1;
int64_t x122 = -1LL;
int64_t x123 = INT64_MIN;
volatile int32_t x124 = INT32_MIN;
volatile uint32_t x131 = 48391536U;
int16_t x139 = 119;
volatile int32_t t32 = 84672;
static int8_t x149 = 22;
int64_t x152 = INT64_MIN;
static uint16_t x166 = 2495U;
volatile int64_t x175 = INT64_MAX;
static int32_t t40 = -9971;
static int32_t t41 = 11;
static uint32_t x201 = UINT32_MAX;
volatile int8_t x205 = INT8_MAX;
volatile uint16_t x208 = 3808U;
int16_t x209 = 26;
volatile uint8_t x210 = 78U;
volatile int32_t x215 = -20;
int16_t x216 = INT16_MIN;
volatile int32_t x221 = 11;
int32_t x223 = -246;
static uint8_t x224 = UINT8_MAX;
int16_t x232 = INT16_MIN;
volatile int64_t x236 = -1LL;
uint64_t x250 = 4LLU;
uint8_t x257 = 127U;
int32_t x260 = -1;
int32_t t57 = 1491;
uint8_t x261 = UINT8_MAX;
int32_t t59 = 139494452;
int32_t x275 = INT32_MIN;
static uint16_t x276 = UINT16_MAX;
uint64_t x277 = UINT64_MAX;
int8_t x281 = 0;
int8_t x282 = INT8_MIN;
volatile int32_t t65 = 1048498;
int32_t x293 = INT32_MIN;
static uint8_t x295 = 69U;
int16_t x298 = 4;
static volatile uint32_t x299 = UINT32_MAX;
int32_t t67 = -56700779;
int8_t x302 = INT8_MIN;
volatile uint16_t x304 = 0U;
int8_t x308 = -1;
volatile int8_t x309 = -54;
int8_t x311 = -1;
int32_t x312 = -14;
static int64_t x318 = 12520278661666LL;
uint8_t x319 = 99U;
static int32_t x322 = 1;
static uint64_t x325 = 592948492718457339LLU;
int32_t x331 = INT32_MAX;
uint32_t x332 = UINT32_MAX;
uint64_t x336 = 3633536431124419LLU;
int8_t x339 = -1;
int32_t t77 = 211;
volatile int64_t x350 = -171LL;
uint16_t x355 = 6U;
static volatile uint8_t x361 = 33U;
volatile int64_t x363 = INT64_MIN;
int8_t x367 = INT8_MIN;
int64_t x369 = -163371515629LL;
uint64_t x373 = UINT64_MAX;
volatile int16_t x375 = INT16_MAX;
static int32_t x376 = 4872785;
volatile int16_t x377 = -17;
uint8_t x379 = UINT8_MAX;
uint8_t x387 = UINT8_MAX;
volatile int32_t t90 = 2;
int64_t x396 = 10894416846925153LL;
volatile int32_t t91 = 4357120;
volatile int64_t x398 = -2081297760LL;
uint8_t x400 = UINT8_MAX;
int16_t x404 = INT16_MIN;
int32_t t93 = 608255;
int32_t x405 = INT32_MIN;
volatile int16_t x406 = INT16_MIN;
int32_t x413 = 6744;
int64_t x419 = 301LL;
int16_t x423 = -112;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x2 = INT64_MAX;
	int64_t x3 = 1LL;
	static int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 0;

	t0 = (x1<(x2-(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x7 = 62U;
	int8_t x8 = -1;
	int32_t t1 = -121828;

	t1 = (x5<(x6-(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint8_t x10 = 4U;
	uint16_t x11 = 20U;
	volatile int32_t t2 = 350389461;

	t2 = (x9<(x10-(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	int8_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -213158171;

	t3 = (x13<(x14-(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = -1;
	int16_t x22 = INT16_MIN;
	static int32_t t4 = 18874;

	t4 = (x21<(x22-(x23|x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 88994U;
	int64_t x26 = INT64_MIN;
	uint16_t x28 = 104U;
	volatile int32_t t5 = 1031930;

	t5 = (x25<(x26-(x27|x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 830997498LLU;
	volatile int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;

	t6 = (x29<(x30-(x31|x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	int64_t x34 = 18402476204338LL;
	int32_t x35 = -1;
	int32_t x36 = -23020607;
	volatile int32_t t7 = -36;

	t7 = (x33<(x34-(x35|x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -61;
	uint32_t x39 = 2942499U;
	int32_t t8 = 3982201;

	t8 = (x37<(x38-(x39|x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = 52522443777135LL;
	static uint16_t x43 = UINT16_MAX;
	volatile int32_t t9 = 20968;

	t9 = (x41<(x42-(x43|x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	static int32_t x47 = INT32_MIN;
	volatile int32_t t10 = 59971;

	t10 = (x45<(x46-(x47|x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 19U;
	uint64_t x50 = 112827433019840LLU;
	int32_t x51 = -1;
	static uint32_t x52 = UINT32_MAX;
	int32_t t11 = -30270343;

	t11 = (x49<(x50-(x51|x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int32_t x56 = INT32_MAX;

	t12 = (x53<(x54-(x55|x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x59 = 1U;
	int64_t x60 = INT64_MIN;
	int32_t t13 = -7995;

	t13 = (x57<(x58-(x59|x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 403413185U;
	volatile uint8_t x62 = 41U;
	uint8_t x63 = 18U;

	t14 = (x61<(x62-(x63|x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x71 = 59U;
	volatile int32_t t15 = 1683436;

	t15 = (x69<(x70-(x71|x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = 129450989U;
	static uint16_t x74 = 0U;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	int32_t t16 = -771425468;

	t16 = (x73<(x74-(x75|x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x83 = 14113177236593787LLU;
	static volatile int32_t t17 = 275987699;

	t17 = (x81<(x82-(x83|x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 54U;
	static volatile int64_t x87 = INT64_MIN;
	int32_t t18 = 648529868;

	t18 = (x85<(x86-(x87|x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 0;
	int8_t x90 = INT8_MIN;
	static int8_t x91 = -1;
	uint8_t x92 = 2U;
	int32_t t19 = -315015;

	t19 = (x89<(x90-(x91|x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x93 = -105343;
	volatile int8_t x96 = -3;
	static int32_t t20 = -22210;

	t20 = (x93<(x94-(x95|x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = 10;
	static int32_t x99 = -966286;
	volatile int32_t t21 = 3009296;

	t21 = (x97<(x98-(x99|x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 2U;
	int64_t x102 = -1LL;
	uint32_t x103 = 27U;
	uint8_t x104 = 14U;
	volatile int32_t t22 = -50;

	t22 = (x101<(x102-(x103|x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x107 = -1;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t23 = 1;

	t23 = (x105<(x106-(x107|x108)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x114 = 29250434257164550LLU;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = INT8_MIN;

	t24 = (x113<(x114-(x115|x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 122U;
	static int32_t x118 = INT32_MIN;
	static int32_t x119 = INT32_MIN;
	volatile uint64_t x120 = 1LLU;
	int32_t t25 = -280110;

	t25 = (x117<(x118-(x119|x120)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	int32_t t26 = -31664068;

	t26 = (x121<(x122-(x123|x124)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x125 = INT64_MIN;
	volatile uint32_t x126 = 208U;
	uint16_t x127 = 3370U;
	static volatile uint8_t x128 = 54U;
	volatile int32_t t27 = -349890215;

	t27 = (x125<(x126-(x127|x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x129 = 1070385466683LL;
	int32_t x130 = 521552;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t28 = -1346;

	t28 = (x129<(x130-(x131|x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MAX;
	uint8_t x134 = UINT8_MAX;
	volatile int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t29 = -4;

	t29 = (x133<(x134-(x135|x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = INT64_MIN;
	uint32_t x138 = UINT32_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t30 = -40;

	t30 = (x137<(x138-(x139|x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MAX;
	int32_t x144 = 0;
	static volatile int32_t t31 = -7542705;

	t31 = (x141<(x142-(x143|x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x145 = -2;
	volatile int16_t x146 = INT16_MIN;
	static uint16_t x147 = 0U;
	int32_t x148 = -31125;

	t32 = (x145<(x146-(x147|x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x150 = INT32_MIN;
	static uint8_t x151 = 6U;
	int32_t t33 = -123955298;

	t33 = (x149<(x150-(x151|x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 8U;
	int8_t x154 = 63;
	static int32_t x155 = INT32_MIN;
	static uint64_t x156 = 1687513655587LLU;
	volatile int32_t t34 = -4823636;

	t34 = (x153<(x154-(x155|x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = 2307;
	uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = INT16_MAX;
	volatile int64_t x160 = 484252623364744LL;
	static volatile int32_t t35 = 60193848;

	t35 = (x157<(x158-(x159|x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 26440U;
	volatile int8_t x162 = -28;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 6U;
	volatile int32_t t36 = 0;

	t36 = (x161<(x162-(x163|x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int64_t x167 = INT64_MAX;
	int64_t x168 = -1LL;
	int32_t t37 = 3301;

	t37 = (x165<(x166-(x167|x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x170 = -1;
	int8_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	int32_t t38 = 494785;

	t38 = (x169<(x170-(x171|x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	volatile int64_t x174 = 13792246LL;
	int32_t x176 = 393;
	volatile int32_t t39 = 224;

	t39 = (x173<(x174-(x175|x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = -1;
	static volatile uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	static volatile int8_t x180 = INT8_MIN;

	t40 = (x177<(x178-(x179|x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x185 = 3U;
	static int32_t x186 = -1;
	int64_t x187 = INT64_MAX;
	volatile int8_t x188 = -1;

	t41 = (x185<(x186-(x187|x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = 1;
	int32_t x190 = -1;
	int64_t x191 = 4255052950LL;
	volatile int8_t x192 = 1;
	volatile int32_t t42 = -1761265;

	t42 = (x189<(x190-(x191|x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = -1;
	static int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t43 = 5;

	t43 = (x193<(x194-(x195|x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = 14453948U;
	int32_t t44 = -1;

	t44 = (x197<(x198-(x199|x200)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x202 = 1823LLU;
	uint8_t x203 = 63U;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t45 = -58921;

	t45 = (x201<(x202-(x203|x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = -1LL;
	int16_t x207 = 5;
	int32_t t46 = 3;

	t46 = (x205<(x206-(x207|x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x211 = 0;
	uint8_t x212 = 3U;
	static volatile int32_t t47 = -5;

	t47 = (x209<(x210-(x211|x212)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = -1;
	static volatile int64_t x214 = -1LL;
	static volatile int32_t t48 = 102;

	t48 = (x213<(x214-(x215|x216)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x217 = 6U;
	volatile int64_t x218 = INT64_MIN;
	static int8_t x219 = -5;
	static int32_t x220 = -1;
	volatile int32_t t49 = 28605395;

	t49 = (x217<(x218-(x219|x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x222 = 0;
	static volatile int32_t t50 = -1;

	t50 = (x221<(x222-(x223|x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 64LLU;
	int16_t x226 = -1;
	static int64_t x227 = 1501LL;
	int16_t x228 = INT16_MIN;
	volatile int32_t t51 = -32907;

	t51 = (x225<(x226-(x227|x228)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -31;
	uint16_t x230 = 21U;
	int16_t x231 = 933;
	int32_t t52 = -252639521;

	t52 = (x229<(x230-(x231|x232)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 2U;
	int16_t x234 = -13772;
	static uint64_t x235 = 4500243LLU;
	volatile int32_t t53 = -493610;

	t53 = (x233<(x234-(x235|x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = 707;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MAX;
	int16_t x248 = 317;
	volatile int32_t t54 = 335910;

	t54 = (x245<(x246-(x247|x248)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x251 = UINT32_MAX;
	uint8_t x252 = 67U;
	int32_t t55 = 0;

	t55 = (x249<(x250-(x251|x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x253 = 0U;
	int32_t x254 = -25690165;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = 24LL;
	int32_t t56 = -123;

	t56 = (x253<(x254-(x255|x256)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x258 = 2982LLU;
	int16_t x259 = INT16_MAX;

	t57 = (x257<(x258-(x259|x260)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x262 = 1U;
	int64_t x263 = INT64_MIN;
	int16_t x264 = -1;
	volatile int32_t t58 = -149950;

	t58 = (x261<(x262-(x263|x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = -566144304LL;
	volatile int8_t x266 = INT8_MIN;
	uint16_t x267 = 14786U;
	int8_t x268 = -1;

	t59 = (x265<(x266-(x267|x268)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x269 = INT8_MIN;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 114U;
	volatile int32_t t60 = 114754822;

	t60 = (x269<(x270-(x271|x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 6U;
	static volatile int8_t x274 = 1;
	volatile int32_t t61 = -59699328;

	t61 = (x273<(x274-(x275|x276)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x278 = -1;
	static int8_t x279 = -1;
	uint64_t x280 = 77416772724092LLU;
	volatile int32_t t62 = 501263;

	t62 = (x277<(x278-(x279|x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MAX;
	int32_t t63 = 341499;

	t63 = (x281<(x282-(x283|x284)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int16_t x286 = -1;
	uint16_t x287 = 4612U;
	uint8_t x288 = 7U;
	static int32_t t64 = 261980;

	t64 = (x285<(x286-(x287|x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = 224600905058LLU;
	int64_t x291 = -3518139243730LL;
	uint16_t x292 = 18172U;

	t65 = (x289<(x290-(x291|x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x294 = 26;
	static volatile int8_t x296 = INT8_MIN;
	int32_t t66 = -1093;

	t66 = (x293<(x294-(x295|x296)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	static volatile uint64_t x300 = 246879LLU;

	t67 = (x297<(x298-(x299|x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x303 = -1LL;
	static volatile int32_t t68 = 1926;

	t68 = (x301<(x302-(x303|x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = -1;
	int8_t x306 = -25;
	int64_t x307 = INT64_MAX;
	volatile int32_t t69 = -10;

	t69 = (x305<(x306-(x307|x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x310 = 0U;
	volatile int32_t t70 = -1;

	t70 = (x309<(x310-(x311|x312)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x313 = INT8_MIN;
	int32_t x314 = 12;
	volatile int16_t x315 = 2;
	int16_t x316 = INT16_MAX;
	int32_t t71 = 4500;

	t71 = (x313<(x314-(x315|x316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = 17;
	static uint8_t x320 = 12U;
	int32_t t72 = -81536447;

	t72 = (x317<(x318-(x319|x320)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MIN;
	int32_t x323 = -1;
	int64_t x324 = INT64_MAX;
	static int32_t t73 = 260070;

	t73 = (x321<(x322-(x323|x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x326 = UINT64_MAX;
	uint16_t x327 = UINT16_MAX;
	static int32_t x328 = -6871176;
	volatile int32_t t74 = 190;

	t74 = (x325<(x326-(x327|x328)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x329 = 6701U;
	volatile int32_t x330 = -1;
	static int32_t t75 = 96;

	t75 = (x329<(x330-(x331|x332)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x333 = 6;
	int16_t x334 = -1;
	int16_t x335 = INT16_MIN;
	int32_t t76 = 5611;

	t76 = (x333<(x334-(x335|x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x337 = -1LL;
	uint16_t x338 = 210U;
	volatile uint16_t x340 = 82U;

	t77 = (x337<(x338-(x339|x340)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x341 = 4107449U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -1;
	uint16_t x344 = 28509U;
	int32_t t78 = 28940;

	t78 = (x341<(x342-(x343|x344)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = 1561U;
	volatile int16_t x347 = INT16_MIN;
	int16_t x348 = 3990;
	int32_t t79 = 266984072;

	t79 = (x345<(x346-(x347|x348)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 47425432U;
	volatile int64_t x351 = INT64_MIN;
	volatile int32_t x352 = -1;
	static volatile int32_t t80 = -25363125;

	t80 = (x349<(x350-(x351|x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = 943334110341864LLU;
	int16_t x354 = INT16_MIN;
	volatile int32_t x356 = -486932;
	volatile int32_t t81 = 2;

	t81 = (x353<(x354-(x355|x356)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x357 = INT8_MIN;
	int8_t x358 = -1;
	uint32_t x359 = 4066U;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t82 = -72280965;

	t82 = (x357<(x358-(x359|x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x362 = INT32_MIN;
	int32_t x364 = -631624;
	volatile int32_t t83 = -67113881;

	t83 = (x361<(x362-(x363|x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	volatile int32_t x368 = -2672;
	int32_t t84 = -32;

	t84 = (x365<(x366-(x367|x368)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x370 = INT8_MIN;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t85 = -1;

	t85 = (x369<(x370-(x371|x372)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x374 = 890190078617624532LLU;
	int32_t t86 = -456626125;

	t86 = (x373<(x374-(x375|x376)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x378 = 1;
	int64_t x380 = 2496LL;
	volatile int32_t t87 = -91227500;

	t87 = (x377<(x378-(x379|x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = 11;
	int32_t x382 = -1;
	uint32_t x383 = 5U;
	volatile int64_t x384 = INT64_MAX;
	static int32_t t88 = 64515831;

	t88 = (x381<(x382-(x383|x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x385 = INT16_MIN;
	static uint64_t x386 = UINT64_MAX;
	uint8_t x388 = 1U;
	int32_t t89 = -15;

	t89 = (x385<(x386-(x387|x388)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MAX;
	static int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	static int32_t x392 = -1;

	t90 = (x389<(x390-(x391|x392)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x393 = INT16_MAX;
	int8_t x394 = INT8_MAX;
	uint64_t x395 = UINT64_MAX;

	t91 = (x393<(x394-(x395|x396)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x397 = 110U;
	uint32_t x399 = 898U;
	volatile int32_t t92 = -13263;

	t92 = (x397<(x398-(x399|x400)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = 13212858640847913LLU;
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = 1465;

	t93 = (x401<(x402-(x403|x404)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x407 = -28;
	int32_t x408 = -1;
	int32_t t94 = -1;

	t94 = (x405<(x406-(x407|x408)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x414 = -152774766853837329LL;
	uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 22U;
	int32_t t95 = 80568903;

	t95 = (x413<(x414-(x415|x416)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = 2602267633245112342LLU;
	uint16_t x420 = 136U;
	int32_t t96 = -5484173;

	t96 = (x417<(x418-(x419|x420)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -2965634158172270LL;
	uint32_t x422 = 625U;
	uint16_t x424 = 5U;
	int32_t t97 = -469257555;

	t97 = (x421<(x422-(x423|x424)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x425 = 61U;
	int64_t x426 = -199698196004LL;
	uint64_t x427 = 1095LLU;
	static int32_t x428 = INT32_MIN;
	int32_t t98 = 6787;

	t98 = (x425<(x426-(x427|x428)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = INT64_MIN;
	uint32_t x430 = 2256580U;
	uint32_t x431 = UINT32_MAX;
	uint32_t x432 = UINT32_MAX;
	int32_t t99 = -223771678;

	t99 = (x429<(x430-(x431|x432)));

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

