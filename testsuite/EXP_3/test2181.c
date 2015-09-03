#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x8 = INT64_MIN;
int16_t x9 = INT16_MIN;
static uint64_t x14 = 299201904LLU;
volatile int64_t x15 = INT64_MIN;
volatile int32_t x16 = -400135;
volatile int32_t t4 = 1;
int8_t x25 = 63;
int32_t t6 = -4;
static volatile int16_t x34 = INT16_MIN;
static volatile int32_t t8 = -2227035;
int64_t x39 = -1LL;
static volatile int32_t t9 = 7997173;
uint16_t x44 = 3U;
int64_t x52 = 1311816745851040643LL;
int32_t x56 = 9910;
volatile int64_t x64 = INT64_MIN;
static volatile int8_t x65 = INT8_MIN;
int32_t t16 = -578578;
uint8_t x71 = UINT8_MAX;
int32_t x75 = INT32_MAX;
volatile int32_t x80 = INT32_MIN;
static volatile uint32_t x87 = 61U;
int32_t t21 = -185659;
static int32_t x91 = 49457;
volatile int64_t x92 = -1LL;
int32_t x106 = INT32_MIN;
int8_t x107 = -1;
static uint64_t x117 = 3174949065679989941LLU;
int16_t x118 = -110;
int64_t x120 = 117728695857LL;
int32_t t29 = -19257;
static uint64_t x126 = 326301696LLU;
int8_t x127 = INT8_MIN;
uint8_t x135 = 1U;
uint32_t x137 = 499U;
int16_t x138 = -1;
static int16_t x140 = INT16_MIN;
volatile int16_t x141 = -1;
uint16_t x142 = 3916U;
int64_t x143 = 216687420282843609LL;
volatile int32_t t35 = -4017211;
int32_t x150 = INT32_MAX;
static volatile int8_t x173 = INT8_MIN;
int16_t x174 = INT16_MIN;
static volatile int16_t x175 = INT16_MIN;
volatile int32_t t44 = 944824;
static int32_t t46 = 9013;
uint64_t x191 = UINT64_MAX;
int8_t x192 = INT8_MAX;
uint8_t x196 = 3U;
int32_t x201 = -1;
int16_t x203 = 49;
static int64_t x204 = -828LL;
static int16_t x209 = INT16_MIN;
static int64_t x212 = -1LL;
int32_t x214 = INT32_MIN;
int32_t x216 = 20559;
volatile int32_t t53 = 233;
int32_t x220 = INT32_MIN;
int32_t t54 = -151782126;
volatile int8_t x222 = -1;
int16_t x223 = INT16_MIN;
static uint32_t x228 = 195427U;
static int8_t x234 = -20;
static int32_t x237 = -407;
int8_t x249 = -1;
int64_t x251 = INT64_MAX;
static int8_t x252 = -1;
volatile int32_t t62 = -3945;
int16_t x253 = -1;
uint64_t x256 = 35021048934LLU;
volatile int16_t x257 = INT16_MIN;
volatile int32_t t64 = -1508175;
int16_t x262 = INT16_MIN;
int32_t t65 = 48049;
volatile int64_t x270 = INT64_MIN;
volatile int32_t x271 = INT32_MIN;
volatile int8_t x272 = 21;
uint32_t x282 = 11561U;
uint8_t x283 = 10U;
volatile uint64_t x286 = UINT64_MAX;
int32_t t71 = 1;
volatile int32_t x291 = 1;
int16_t x293 = -1;
int64_t x294 = INT64_MIN;
int16_t x296 = -3284;
int32_t x299 = INT32_MIN;
int64_t x304 = -378111LL;
uint16_t x305 = 112U;
static volatile int32_t t76 = -10891478;
static int64_t x310 = INT64_MAX;
int64_t x311 = -1086767914047431568LL;
volatile int32_t t77 = 171993782;
static int64_t x315 = INT64_MIN;
static volatile int32_t t79 = -1;
static int16_t x324 = -1;
volatile int32_t t80 = -33328017;
int32_t x325 = INT32_MAX;
int16_t x326 = INT16_MIN;
int8_t x331 = 1;
int16_t x332 = 72;
uint16_t x335 = 808U;
int32_t x341 = -24;
static int64_t x352 = INT64_MAX;
static volatile int32_t t87 = 3;
volatile uint8_t x357 = 2U;
int64_t x363 = -118352110495653883LL;
int8_t x370 = 41;
int64_t x371 = -4967399968748LL;
static int16_t x373 = INT16_MAX;
volatile int32_t t93 = -8861;
static volatile int8_t x379 = -1;
volatile int32_t t94 = -6;
int16_t x391 = INT16_MIN;
uint64_t x393 = 51972LLU;
int16_t x394 = 3357;
int32_t t98 = 4258718;
int8_t x397 = 29;
int8_t x400 = -1;


void f0(void) {
	uint16_t x1 = 4U;
	uint64_t x2 = 3497022639LLU;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = 15377;

	t0 = ((x1|x2)<=(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 12;
	int64_t x6 = 214389998LL;
	volatile int8_t x7 = 6;
	static volatile int32_t t1 = 9;

	t1 = ((x5|x6)<=(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MIN;
	uint8_t x11 = 59U;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -235400;

	t2 = ((x9|x10)<=(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 30033U;
	volatile int32_t t3 = -932;

	t3 = ((x13|x14)<=(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 83;
	volatile int32_t x18 = -534;
	int8_t x19 = -18;
	int32_t x20 = INT32_MAX;

	t4 = ((x17|x18)<=(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = 319;
	int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -19615458;

	t5 = ((x21|x22)<=(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 759214LL;
	static uint32_t x27 = UINT32_MAX;
	static volatile int16_t x28 = INT16_MAX;

	t6 = ((x25|x26)<=(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 2892U;
	uint16_t x31 = UINT16_MAX;
	static uint16_t x32 = 18361U;
	volatile int32_t t7 = -1848;

	t7 = ((x29|x30)<=(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int64_t x35 = INT64_MAX;
	static int64_t x36 = INT64_MIN;

	t8 = ((x33|x34)<=(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1490;
	int16_t x38 = INT16_MAX;
	static uint16_t x40 = 2347U;

	t9 = ((x37|x38)<=(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 19U;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = 0U;
	int32_t t10 = -208166403;

	t10 = ((x41|x42)<=(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 1U;
	volatile int8_t x46 = -1;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = -1LL;
	int32_t t11 = -1;

	t11 = ((x45|x46)<=(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static int16_t x50 = INT16_MIN;
	int32_t x51 = -1;
	int32_t t12 = 20230;

	t12 = ((x49|x50)<=(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = 100U;
	int32_t x55 = 15396;
	int32_t t13 = -782224;

	t13 = ((x53|x54)<=(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MAX;
	volatile int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -160454;

	t14 = ((x57|x58)<=(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -1;
	int64_t x62 = INT64_MIN;
	uint8_t x63 = 31U;
	int32_t t15 = -107861;

	t15 = ((x61|x62)<=(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	uint64_t x68 = 739996834604546025LLU;

	t16 = ((x65|x66)<=(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	uint16_t x70 = 0U;
	uint8_t x72 = 14U;
	volatile int32_t t17 = 232;

	t17 = ((x69|x70)<=(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	volatile uint8_t x74 = 15U;
	int8_t x76 = 9;
	static int32_t t18 = 505175;

	t18 = ((x73|x74)<=(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 1U;
	static int64_t x78 = -1LL;
	volatile int32_t x79 = 1;
	int32_t t19 = -491432;

	t19 = ((x77|x78)<=(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	static int64_t x82 = INT64_MAX;
	int64_t x83 = 1553505LL;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -456;

	t20 = ((x81|x82)<=(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	volatile uint64_t x86 = 59500LLU;
	static uint8_t x88 = 0U;

	t21 = ((x85|x86)<=(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1605;
	int8_t x90 = 7;
	volatile int32_t t22 = -25;

	t22 = ((x89|x90)<=(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MAX;
	int32_t x94 = INT32_MIN;
	int16_t x95 = 1345;
	uint16_t x96 = 6783U;
	int32_t t23 = 120430205;

	t23 = ((x93|x94)<=(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 1U;
	static int32_t x98 = -6201;
	int8_t x99 = -1;
	uint32_t x100 = 960300538U;
	volatile int32_t t24 = -10206602;

	t24 = ((x97|x98)<=(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static volatile int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	int16_t x104 = -1;
	volatile int32_t t25 = 2075351;

	t25 = ((x101|x102)<=(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -63;
	static int64_t x108 = 7692049530LL;
	int32_t t26 = 323481633;

	t26 = ((x105|x106)<=(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 6U;
	uint32_t x110 = 106U;
	uint16_t x111 = 1848U;
	uint64_t x112 = 219025002LLU;
	volatile int32_t t27 = -995977110;

	t27 = ((x109|x110)<=(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 26;
	volatile int8_t x114 = INT8_MAX;
	static uint64_t x115 = 264086694825LLU;
	uint8_t x116 = 0U;
	volatile int32_t t28 = 5;

	t28 = ((x113|x114)<=(x115^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = 0;

	t29 = ((x117|x118)<=(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	uint64_t x122 = 1398660044182LLU;
	int16_t x123 = INT16_MIN;
	static uint64_t x124 = 37416940908LLU;
	int32_t t30 = 500;

	t30 = ((x121|x122)<=(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 48U;
	uint8_t x128 = 32U;
	int32_t t31 = 119595;

	t31 = ((x125|x126)<=(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MAX;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -190577759;

	t32 = ((x129|x130)<=(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -2054LL;
	volatile uint32_t x134 = 19797U;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = -475400740;

	t33 = ((x133|x134)<=(x135^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x139 = 4063;
	static int32_t t34 = -105551;

	t34 = ((x137|x138)<=(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x144 = 7599325U;

	t35 = ((x141|x142)<=(x143^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -722556953;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -405635830;

	t36 = ((x145|x146)<=(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static volatile int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 14348106;

	t37 = ((x149|x150)<=(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 0U;
	int32_t x154 = 157;
	int8_t x155 = -1;
	static int8_t x156 = -1;
	int32_t t38 = -3568;

	t38 = ((x153|x154)<=(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = 14570279935LL;
	uint8_t x159 = 0U;
	static uint16_t x160 = 7U;
	volatile int32_t t39 = -1329716;

	t39 = ((x157|x158)<=(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	static int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MIN;
	int64_t x164 = 29LL;
	static int32_t t40 = 3;

	t40 = ((x161|x162)<=(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	uint64_t x166 = 29377624LLU;
	volatile int32_t x167 = INT32_MIN;
	int32_t x168 = -1;
	int32_t t41 = 0;

	t41 = ((x165|x166)<=(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 1261396U;
	int64_t x170 = -1LL;
	uint64_t x171 = 37LLU;
	int32_t x172 = 30;
	int32_t t42 = 4;

	t42 = ((x169|x170)<=(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x176 = -1;
	int32_t t43 = 932;

	t43 = ((x173|x174)<=(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile int8_t x178 = INT8_MIN;
	uint16_t x179 = 127U;
	uint64_t x180 = UINT64_MAX;

	t44 = ((x177|x178)<=(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 1414644039U;
	volatile uint8_t x184 = 7U;
	volatile int32_t t45 = 802009762;

	t45 = ((x181|x182)<=(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -89;
	uint16_t x186 = 4065U;
	int8_t x187 = -1;
	int32_t x188 = -1;

	t46 = ((x185|x186)<=(x187^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = -3246;
	volatile int32_t t47 = 1;

	t47 = ((x189|x190)<=(x191^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -456964;
	static volatile int64_t x194 = 48128912290LL;
	static int64_t x195 = INT64_MIN;
	int32_t t48 = -623808;

	t48 = ((x193|x194)<=(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = -14;
	int64_t x198 = -413867LL;
	int8_t x199 = INT8_MIN;
	volatile int8_t x200 = 1;
	int32_t t49 = -1344353;

	t49 = ((x197|x198)<=(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	int32_t t50 = -517;

	t50 = ((x201|x202)<=(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 10U;
	int32_t x206 = 57214468;
	static volatile int64_t x207 = -250735LL;
	static int16_t x208 = INT16_MIN;
	int32_t t51 = -159;

	t51 = ((x205|x206)<=(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x210 = 3257U;
	int32_t x211 = INT32_MIN;
	int32_t t52 = -2060;

	t52 = ((x209|x210)<=(x211^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile int32_t x215 = -1;

	t53 = ((x213|x214)<=(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -5;
	volatile int16_t x218 = INT16_MAX;
	uint32_t x219 = 29U;

	t54 = ((x217|x218)<=(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 326259LLU;
	volatile int16_t x224 = INT16_MIN;
	int32_t t55 = -238706;

	t55 = ((x221|x222)<=(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -6;
	int8_t x226 = -1;
	uint32_t x227 = 2913U;
	int32_t t56 = -608139257;

	t56 = ((x225|x226)<=(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	static int8_t x230 = INT8_MAX;
	int8_t x231 = 7;
	static int32_t x232 = -10;
	volatile int32_t t57 = -7411892;

	t57 = ((x229|x230)<=(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 100024370927LLU;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = 107892;

	t58 = ((x233|x234)<=(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x238 = 306U;
	volatile uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 1755868871558LLU;
	int32_t t59 = 2;

	t59 = ((x237|x238)<=(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	static uint32_t x243 = 240U;
	int64_t x244 = -40LL;
	int32_t t60 = 364;

	t60 = ((x241|x242)<=(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 2U;
	int32_t x246 = -1;
	static int8_t x247 = 0;
	int32_t x248 = INT32_MAX;
	volatile int32_t t61 = -213;

	t61 = ((x245|x246)<=(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = -1LL;

	t62 = ((x249|x250)<=(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MAX;
	uint64_t x255 = 26902LLU;
	int32_t t63 = -124;

	t63 = ((x253|x254)<=(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = 0;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -46;

	t64 = ((x257|x258)<=(x259^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -74;
	static int16_t x263 = INT16_MAX;
	int16_t x264 = 1;

	t65 = ((x261|x262)<=(x263^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	static uint64_t x266 = 819770LLU;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t66 = -35773;

	t66 = ((x265|x266)<=(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int32_t t67 = 470701;

	t67 = ((x269|x270)<=(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 26754LL;
	static volatile uint32_t x274 = 1535713855U;
	int64_t x275 = INT64_MAX;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 3804;

	t68 = ((x273|x274)<=(x275^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 16U;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = 465;

	t69 = ((x277|x278)<=(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -2;
	int64_t x284 = 1LL;
	volatile int32_t t70 = -694;

	t70 = ((x281|x282)<=(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MIN;
	volatile int32_t x287 = 3483204;
	int32_t x288 = -29640252;

	t71 = ((x285|x286)<=(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 0U;
	int32_t x290 = INT32_MIN;
	volatile int32_t x292 = -29840881;
	volatile int32_t t72 = 512305536;

	t72 = ((x289|x290)<=(x291^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = INT32_MIN;
	volatile int32_t t73 = -2;

	t73 = ((x293|x294)<=(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MAX;
	uint32_t x298 = UINT32_MAX;
	volatile uint64_t x300 = UINT64_MAX;
	int32_t t74 = -290498;

	t74 = ((x297|x298)<=(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	volatile int32_t t75 = -297548;

	t75 = ((x301|x302)<=(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x306 = 40U;
	static int64_t x307 = -1LL;
	static int8_t x308 = -1;

	t76 = ((x305|x306)<=(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x312 = INT64_MIN;

	t77 = ((x309|x310)<=(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 274562237462LLU;
	int32_t x314 = 37513067;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 13;

	t78 = ((x313|x314)<=(x315^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 1;
	volatile int32_t x318 = INT32_MIN;
	volatile int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MIN;

	t79 = ((x317|x318)<=(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	static int8_t x322 = 31;
	static int16_t x323 = INT16_MIN;

	t80 = ((x321|x322)<=(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x327 = 23620019LLU;
	static uint16_t x328 = 8236U;
	volatile int32_t t81 = 21768;

	t81 = ((x325|x326)<=(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int64_t x330 = INT64_MIN;
	volatile int32_t t82 = -4;

	t82 = ((x329|x330)<=(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 4203;
	int64_t x334 = -1LL;
	volatile int64_t x336 = -1LL;
	int32_t t83 = -1109;

	t83 = ((x333|x334)<=(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	static uint64_t x340 = UINT64_MAX;
	static int32_t t84 = 16040730;

	t84 = ((x337|x338)<=(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = 1341475059LLU;
	int32_t x343 = -1;
	int16_t x344 = -1;
	volatile int32_t t85 = 4827;

	t85 = ((x341|x342)<=(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile int32_t x346 = -107715;
	int64_t x347 = -247647853354387LL;
	volatile int64_t x348 = -1LL;
	int32_t t86 = 10;

	t86 = ((x345|x346)<=(x347^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	volatile int64_t x350 = -1LL;
	int8_t x351 = INT8_MIN;

	t87 = ((x349|x350)<=(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 60U;
	int32_t x354 = -13412;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MAX;
	volatile int32_t t88 = 30682;

	t88 = ((x353|x354)<=(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x358 = INT8_MIN;
	int64_t x359 = -9LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 2186;

	t89 = ((x357|x358)<=(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int64_t x362 = 314398830068620LL;
	int8_t x364 = 0;
	volatile int32_t t90 = -678106878;

	t90 = ((x361|x362)<=(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile uint32_t x366 = UINT32_MAX;
	uint16_t x367 = 3U;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -26;

	t91 = ((x365|x366)<=(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 0;
	static int32_t x372 = INT32_MIN;
	int32_t t92 = 664552;

	t92 = ((x369|x370)<=(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = -2593;
	int16_t x375 = -266;
	static int16_t x376 = -1;

	t93 = ((x373|x374)<=(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 4U;
	uint64_t x378 = UINT64_MAX;
	int16_t x380 = -1;

	t94 = ((x377|x378)<=(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	static volatile uint16_t x382 = 444U;
	static int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MAX;
	int32_t t95 = -125;

	t95 = ((x381|x382)<=(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = 0;
	int8_t x387 = INT8_MAX;
	int8_t x388 = 6;
	static volatile int32_t t96 = -71809649;

	t96 = ((x385|x386)<=(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int64_t x390 = -1LL;
	int16_t x392 = INT16_MAX;
	int32_t t97 = -609181976;

	t97 = ((x389|x390)<=(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x395 = -22012522LL;
	int8_t x396 = INT8_MIN;

	t98 = ((x393|x394)<=(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x398 = 500U;
	uint32_t x399 = 724019307U;
	volatile int32_t t99 = -3;

	t99 = ((x397|x398)<=(x399^x400));

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

