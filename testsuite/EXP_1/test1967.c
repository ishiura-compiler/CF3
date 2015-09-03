#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
uint32_t x4 = 11269U;
int32_t t1 = -1143;
volatile int32_t t2 = -1221;
static int8_t x14 = -1;
uint16_t x19 = UINT16_MAX;
int32_t t5 = -20296;
static int64_t x29 = INT64_MIN;
int64_t x32 = -1LL;
volatile int32_t t8 = 6;
uint32_t x40 = 3U;
static uint8_t x44 = 2U;
int16_t x58 = 7;
int64_t t14 = 0LL;
int8_t x68 = -1;
int8_t x69 = -2;
volatile uint16_t x74 = 1U;
volatile int32_t t17 = 31335;
int32_t x78 = INT32_MAX;
volatile int64_t t18 = 231LL;
uint16_t x82 = UINT16_MAX;
uint64_t t20 = 117641740804LLU;
int64_t x102 = INT64_MIN;
int32_t t23 = 454;
uint8_t x107 = UINT8_MAX;
uint16_t x108 = UINT16_MAX;
int32_t x109 = INT32_MIN;
int32_t t25 = 81;
int8_t x113 = 1;
int32_t x114 = INT32_MIN;
volatile uint32_t x116 = 26465U;
uint32_t t26 = 763390326U;
uint16_t x119 = 15U;
uint8_t x120 = 101U;
int32_t x121 = 1002001999;
uint64_t x123 = 181304145LLU;
int64_t x124 = -405995460753941LL;
static int64_t x127 = -1LL;
int32_t t29 = 1;
uint64_t x131 = 2274LLU;
volatile int8_t x140 = -1;
int32_t x142 = -1;
static int16_t x144 = -1;
volatile int32_t t33 = -12;
uint8_t x147 = 15U;
int64_t x149 = INT64_MAX;
uint64_t x160 = UINT64_MAX;
volatile int32_t x161 = 368034678;
uint64_t t38 = 409856947LLU;
volatile int32_t t39 = -3;
int8_t x173 = INT8_MIN;
uint32_t x176 = 2333U;
int8_t x185 = -1;
static int8_t x187 = INT8_MIN;
volatile int32_t t43 = 58469425;
int16_t x192 = 1;
uint32_t x196 = UINT32_MAX;
uint32_t x201 = 232U;
volatile int32_t t47 = 82843;
int32_t x219 = INT32_MIN;
uint32_t x223 = 419076U;
int64_t x231 = 2380796473766423LL;
volatile int32_t x236 = INT32_MIN;
int16_t x239 = 0;
static volatile uint64_t x242 = UINT64_MAX;
static int64_t t57 = 64925891712LL;
static uint32_t x246 = UINT32_MAX;
uint32_t x250 = 6064U;
int32_t x255 = -1;
volatile int16_t x259 = INT16_MIN;
int8_t x265 = INT8_MIN;
uint64_t x268 = 28764LLU;
volatile uint64_t t63 = 27328225825195LLU;
int64_t t65 = 1100LL;
volatile int32_t x277 = 276049;
int32_t x294 = INT32_MIN;
int32_t x295 = -1;
volatile int8_t x302 = 0;
int8_t x305 = INT8_MAX;
int16_t x306 = INT16_MIN;
uint8_t x313 = UINT8_MAX;
int64_t x314 = INT64_MIN;
int8_t x320 = INT8_MIN;
int8_t x325 = INT8_MIN;
int64_t x329 = INT64_MIN;
static int16_t x333 = INT16_MIN;
volatile int16_t x340 = -6540;
static int64_t x342 = INT64_MIN;
uint8_t x347 = UINT8_MAX;
static uint64_t x352 = 106638752787834LLU;
int32_t x356 = 946333732;
static volatile int8_t x358 = INT8_MIN;
uint32_t x360 = 194092491U;
volatile int64_t x364 = -1LL;
int64_t x373 = -1114537574815811LL;
static uint64_t x375 = UINT64_MAX;
volatile int16_t x376 = INT16_MAX;
static uint16_t x378 = UINT16_MAX;
uint64_t x379 = UINT64_MAX;
int32_t x381 = INT32_MAX;
int8_t x382 = INT8_MAX;
uint32_t x385 = 473U;
uint32_t x389 = UINT32_MAX;
int64_t x390 = INT64_MAX;
uint8_t x393 = UINT8_MAX;
volatile uint64_t x401 = 869974695245956LLU;
static int16_t x403 = INT16_MIN;
int16_t x411 = INT16_MIN;
static int8_t x412 = INT8_MAX;


void f0(void) {
	uint32_t x2 = 124449604U;
	int8_t x3 = INT8_MIN;
	volatile uint32_t t0 = 152477U;

	t0 = (((x1|x2)<x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 517698412U;
	int32_t x6 = -1;
	volatile uint16_t x7 = 22823U;
	static int16_t x8 = -5;

	t1 = (((x5|x6)<x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -40792512914134LL;
	static int8_t x10 = -1;
	int32_t x11 = INT32_MIN;
	int16_t x12 = 9426;

	t2 = (((x9|x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint64_t x15 = 117685990LLU;
	int8_t x16 = INT8_MAX;
	static int32_t t3 = -1;

	t3 = (((x13|x14)<x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MIN;
	volatile uint32_t x20 = 1556174U;
	uint32_t t4 = 82338U;

	t4 = (((x17|x18)<x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int8_t x22 = -1;
	volatile uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MIN;

	t5 = (((x21|x22)<x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 1U;
	int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 5909;

	t6 = (((x25|x26)<x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	volatile int64_t t7 = 12321852247LL;

	t7 = (((x29|x30)<x31)/x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint32_t x34 = 15U;
	static uint16_t x35 = UINT16_MAX;
	int8_t x36 = -1;

	t8 = (((x33|x34)<x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 1912014003007339997LLU;
	int16_t x38 = 7;
	int16_t x39 = -1;
	uint32_t t9 = 31U;

	t9 = (((x37|x38)<x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	uint16_t x42 = 2U;
	int64_t x43 = INT64_MIN;
	int32_t t10 = -140168;

	t10 = (((x41|x42)<x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = -139702714;
	uint8_t x51 = 50U;
	uint64_t x52 = 1871607686LLU;
	static uint64_t t11 = 59153491550910LLU;

	t11 = (((x49|x50)<x51)/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = -1;
	static uint16_t x54 = 882U;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = 1;
	volatile int32_t t12 = 13902;

	t12 = (((x53|x54)<x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	int16_t x59 = 8;
	static volatile int8_t x60 = -20;
	static volatile int32_t t13 = -2134047;

	t13 = (((x57|x58)<x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x61 = 2022U;
	int32_t x62 = INT32_MIN;
	static volatile int16_t x63 = -1;
	int64_t x64 = 1976651LL;

	t14 = (((x61|x62)<x63)/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t t15 = 41;

	t15 = (((x65|x66)<x67)/x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	volatile int8_t x71 = -1;
	int16_t x72 = INT16_MAX;
	static int32_t t16 = 2464075;

	t16 = (((x69|x70)<x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	volatile int64_t x75 = INT64_MIN;
	uint8_t x76 = 3U;

	t17 = (((x73|x74)<x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	uint32_t x79 = 112U;
	int64_t x80 = INT64_MIN;

	t18 = (((x77|x78)<x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	volatile uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t19 = -29;

	t19 = (((x81|x82)<x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	int32_t x86 = -192699;
	int8_t x87 = 58;
	uint64_t x88 = 2165282936698LLU;

	t20 = (((x85|x86)<x87)/x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = 2U;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 0U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 960340452693582756LLU;

	t21 = (((x89|x90)<x91)/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	int8_t x94 = -11;
	int32_t x95 = -426302;
	static int64_t x96 = INT64_MIN;
	int64_t t22 = -42851387902LL;

	t22 = (((x93|x94)<x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MIN;

	t23 = (((x101|x102)<x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x105 = 712U;
	uint64_t x106 = 138LLU;
	static volatile int32_t t24 = -227;

	t24 = (((x105|x106)<x107)/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x110 = 1735907U;
	int16_t x111 = -1;
	volatile uint8_t x112 = UINT8_MAX;

	t25 = (((x109|x110)<x111)/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x115 = INT64_MIN;

	t26 = (((x113|x114)<x115)/x116);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MIN;
	static uint64_t x118 = UINT64_MAX;
	static int32_t t27 = 185353949;

	t27 = (((x117|x118)<x119)/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x122 = -1;
	static int64_t t28 = -8087577884817511LL;

	t28 = (((x121|x122)<x123)/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = 0;
	int64_t x126 = INT64_MIN;
	int8_t x128 = INT8_MIN;

	t29 = (((x125|x126)<x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 153671766U;
	static int64_t x130 = INT64_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t30 = -2672831377554012876LL;

	t30 = (((x129|x130)<x131)/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 13533403695822494LL;
	int8_t x134 = INT8_MAX;
	int8_t x135 = -1;
	static volatile int8_t x136 = INT8_MIN;
	volatile int32_t t31 = 435;

	t31 = (((x133|x134)<x135)/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MAX;
	volatile uint32_t x138 = 28468564U;
	static int64_t x139 = -2435386570937246LL;
	volatile int32_t t32 = -15525;

	t32 = (((x137|x138)<x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -34174549555LL;
	int16_t x143 = -1;

	t33 = (((x141|x142)<x143)/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = -1;
	int32_t x148 = INT32_MAX;
	int32_t t34 = 12;

	t34 = (((x145|x146)<x147)/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t35 = -1677;

	t35 = (((x149|x150)<x151)/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 230504174U;
	int64_t x159 = -2101LL;
	uint64_t t36 = 12058884954549LLU;

	t36 = (((x157|x158)<x159)/x160);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x162 = 9649998U;
	int64_t x163 = 1LL;
	int32_t x164 = -1;
	static volatile int32_t t37 = -2350;

	t37 = (((x161|x162)<x163)/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 12U;
	static uint16_t x166 = 27U;
	static int64_t x167 = INT64_MAX;
	static uint64_t x168 = 8289671720LLU;

	t38 = (((x165|x166)<x167)/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 56460590999863055LLU;
	static uint8_t x170 = 0U;
	int64_t x171 = INT64_MIN;
	int32_t x172 = -1;

	t39 = (((x169|x170)<x171)/x172);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = 36526LL;
	volatile int32_t x175 = INT32_MIN;
	uint32_t t40 = 3401U;

	t40 = (((x173|x174)<x175)/x176);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x177 = 989U;
	static volatile int64_t x178 = INT64_MIN;
	uint16_t x179 = 693U;
	uint16_t x180 = 7916U;
	int32_t t41 = 104960;

	t41 = (((x177|x178)<x179)/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = -249;
	int16_t x182 = -7016;
	static int8_t x183 = INT8_MAX;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t42 = 84420298U;

	t42 = (((x181|x182)<x183)/x184);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x186 = 2039U;
	volatile int8_t x188 = INT8_MIN;

	t43 = (((x185|x186)<x187)/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 1264U;
	int64_t x190 = -1LL;
	int32_t x191 = INT32_MIN;
	volatile int32_t t44 = 19645;

	t44 = (((x189|x190)<x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = 4068;
	int16_t x195 = INT16_MIN;
	static volatile uint32_t t45 = 98U;

	t45 = (((x193|x194)<x195)/x196);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 93329489U;
	static int64_t x198 = INT64_MIN;
	static int16_t x199 = -1;
	static volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = -1358;

	t46 = (((x197|x198)<x199)/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	static int16_t x204 = INT16_MAX;

	t47 = (((x201|x202)<x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = 542;
	int16_t x206 = 1;
	static uint8_t x207 = 26U;
	uint64_t x208 = UINT64_MAX;
	uint64_t t48 = 133668589LLU;

	t48 = (((x205|x206)<x207)/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int8_t x210 = -1;
	int16_t x211 = -48;
	static int32_t x212 = -1;
	static int32_t t49 = 385;

	t49 = (((x209|x210)<x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = UINT8_MAX;
	volatile int8_t x214 = INT8_MAX;
	volatile int16_t x215 = -1094;
	volatile uint64_t x216 = 204176999LLU;
	volatile uint64_t t50 = 1004052546776LLU;

	t50 = (((x213|x214)<x215)/x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -5652;
	static volatile int8_t x218 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t51 = -4856143;

	t51 = (((x217|x218)<x219)/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = -63;
	volatile int16_t x222 = INT16_MIN;
	int32_t x224 = -1;
	static int32_t t52 = 403190102;

	t52 = (((x221|x222)<x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x225 = 198U;
	int64_t x226 = INT64_MAX;
	volatile int64_t x227 = 2175819718435875LL;
	int32_t x228 = INT32_MIN;
	int32_t t53 = -3812608;

	t53 = (((x225|x226)<x227)/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = UINT8_MAX;
	uint64_t x230 = UINT64_MAX;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t54 = 981LLU;

	t54 = (((x229|x230)<x231)/x232);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	int32_t x234 = -1;
	uint8_t x235 = 15U;
	static volatile int32_t t55 = 462;

	t55 = (((x233|x234)<x235)/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint64_t x238 = UINT64_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t56 = -493386;

	t56 = (((x237|x238)<x239)/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MAX;
	volatile int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MAX;

	t57 = (((x241|x242)<x243)/x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -1;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MAX;
	volatile int32_t t58 = 604;

	t58 = (((x245|x246)<x247)/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	volatile uint64_t x251 = 8987LLU;
	int16_t x252 = -1;
	volatile int32_t t59 = 13;

	t59 = (((x249|x250)<x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x253 = 1U;
	uint64_t x254 = UINT64_MAX;
	volatile uint32_t x256 = 312241U;
	uint32_t t60 = 1U;

	t60 = (((x253|x254)<x255)/x256);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	static int8_t x260 = 1;
	static int32_t t61 = 191578549;

	t61 = (((x257|x258)<x259)/x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = INT8_MIN;
	volatile int64_t x262 = INT64_MAX;
	int16_t x263 = 13250;
	static int8_t x264 = 15;
	volatile int32_t t62 = -999787;

	t62 = (((x261|x262)<x263)/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x266 = INT32_MIN;
	volatile int16_t x267 = -1;

	t63 = (((x265|x266)<x267)/x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -1LL;
	static int64_t x270 = -2072057LL;
	volatile int8_t x271 = -1;
	volatile int8_t x272 = INT8_MIN;
	static volatile int32_t t64 = -887;

	t64 = (((x269|x270)<x271)/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = 26;
	int64_t x276 = INT64_MIN;

	t65 = (((x273|x274)<x275)/x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x278 = 477125393449LL;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = INT32_MAX;
	volatile int32_t t66 = -40;

	t66 = (((x277|x278)<x279)/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = -87803681LL;
	int8_t x282 = 2;
	volatile int16_t x283 = INT16_MIN;
	int32_t x284 = -1;
	volatile int32_t t67 = -30;

	t67 = (((x281|x282)<x283)/x284);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = -1LL;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = 0LLU;
	uint16_t x288 = 4750U;
	static int32_t t68 = 8;

	t68 = (((x285|x286)<x287)/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x293 = -238542976;
	static int32_t x296 = 1;
	int32_t t69 = -97776050;

	t69 = (((x293|x294)<x295)/x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -140;
	static uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 3630606720097LLU;
	int64_t x300 = INT64_MIN;
	int64_t t70 = 1302629686913389LL;

	t70 = (((x297|x298)<x299)/x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = 19U;
	volatile int64_t x303 = -1LL;
	static int32_t x304 = -57430;
	static int32_t t71 = 63979289;

	t71 = (((x301|x302)<x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x307 = 2U;
	int8_t x308 = -1;
	volatile int32_t t72 = -170;

	t72 = (((x305|x306)<x307)/x308);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = 610U;
	volatile uint32_t x312 = 32022U;
	volatile uint32_t t73 = 15116225U;

	t73 = (((x309|x310)<x311)/x312);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t74 = 7933862LLU;

	t74 = (((x313|x314)<x315)/x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	static uint16_t x318 = UINT16_MAX;
	static int16_t x319 = -25;
	static int32_t t75 = 48539;

	t75 = (((x317|x318)<x319)/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -19096;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MAX;
	static uint64_t x324 = 8122346100290308895LLU;
	static uint64_t t76 = 1386138428304638619LLU;

	t76 = (((x321|x322)<x323)/x324);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x326 = INT8_MIN;
	volatile int16_t x327 = 2;
	int16_t x328 = -41;
	int32_t t77 = 5162;

	t77 = (((x325|x326)<x327)/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	static int16_t x332 = 7;
	int32_t t78 = -411;

	t78 = (((x329|x330)<x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x334 = -39;
	volatile int16_t x335 = 118;
	int64_t x336 = -19LL;
	static int64_t t79 = -7LL;

	t79 = (((x333|x334)<x335)/x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x337 = 72U;
	int32_t x338 = INT32_MIN;
	static uint16_t x339 = 5884U;
	volatile int32_t t80 = -250640;

	t80 = (((x337|x338)<x339)/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 30U;
	static int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	volatile int64_t t81 = -2LL;

	t81 = (((x341|x342)<x343)/x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x345 = 25582U;
	int64_t x346 = INT64_MAX;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t82 = 65581601790LLU;

	t82 = (((x345|x346)<x347)/x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = 43614LL;
	int32_t x350 = -516;
	volatile int16_t x351 = INT16_MIN;
	volatile uint64_t t83 = 43163415234LLU;

	t83 = (((x349|x350)<x351)/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MAX;
	volatile int32_t x354 = 8822;
	int64_t x355 = -35LL;
	int32_t t84 = 24373;

	t84 = (((x353|x354)<x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x359 = -20;
	static uint32_t t85 = 264791U;

	t85 = (((x357|x358)<x359)/x360);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -1LL;
	int64_t x362 = -1LL;
	volatile uint8_t x363 = 1U;
	int64_t t86 = 0LL;

	t86 = (((x361|x362)<x363)/x364);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 80U;
	int8_t x367 = 3;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = 124490;

	t87 = (((x365|x366)<x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	static int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = -1;
	static volatile int32_t t88 = -5851025;

	t88 = (((x369|x370)<x371)/x372);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x374 = -12;
	volatile int32_t t89 = 53;

	t89 = (((x373|x374)<x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 1101LLU;
	int8_t x380 = -55;
	static int32_t t90 = 7603795;

	t90 = (((x377|x378)<x379)/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x383 = 23U;
	int16_t x384 = INT16_MAX;
	int32_t t91 = 2043;

	t91 = (((x381|x382)<x383)/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x386 = 12U;
	volatile int16_t x387 = INT16_MIN;
	int32_t x388 = -44978148;
	volatile int32_t t92 = 6714;

	t92 = (((x385|x386)<x387)/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	volatile int32_t t93 = -247364;

	t93 = (((x389|x390)<x391)/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x394 = 7697585056938LLU;
	static uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t94 = 812416;

	t94 = (((x393|x394)<x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x397 = -112;
	volatile uint8_t x398 = 0U;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t95 = 468891451867889LLU;

	t95 = (((x397|x398)<x399)/x400);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x402 = UINT64_MAX;
	int32_t x404 = 132147690;
	volatile int32_t t96 = -2;

	t96 = (((x401|x402)<x403)/x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MIN;
	uint64_t x406 = UINT64_MAX;
	static int32_t x407 = INT32_MIN;
	volatile int32_t x408 = INT32_MIN;
	volatile int32_t t97 = 4;

	t97 = (((x405|x406)<x407)/x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = 47U;
	int32_t t98 = 33577906;

	t98 = (((x409|x410)<x411)/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x413 = 87044851U;
	int64_t x414 = INT64_MAX;
	volatile int8_t x415 = 3;
	int16_t x416 = -1;
	volatile int32_t t99 = 89319;

	t99 = (((x413|x414)<x415)/x416);

	if (t99 != 0) { NG(); } else { ; }
	
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

