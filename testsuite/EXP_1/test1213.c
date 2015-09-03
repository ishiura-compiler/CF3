#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 11;
int16_t x4 = INT16_MIN;
int16_t x5 = -1;
static int8_t x8 = INT8_MIN;
static int64_t x15 = INT64_MIN;
uint64_t x21 = UINT64_MAX;
uint16_t x23 = UINT16_MAX;
int8_t x25 = INT8_MIN;
uint8_t x27 = 9U;
uint16_t x37 = UINT16_MAX;
int64_t x41 = INT64_MAX;
int64_t t8 = -24770LL;
uint32_t x53 = UINT32_MAX;
volatile int8_t x57 = INT8_MAX;
static uint8_t x61 = 5U;
static int16_t x62 = -901;
static int8_t x71 = INT8_MIN;
uint8_t x72 = 54U;
int32_t t15 = 0;
uint8_t x80 = UINT8_MAX;
uint8_t x85 = 0U;
int32_t x88 = -875;
int32_t x90 = -1;
volatile int16_t x91 = INT16_MAX;
int16_t x95 = INT16_MIN;
uint32_t x98 = 58457242U;
volatile uint16_t x107 = 2U;
int32_t x111 = INT32_MIN;
static int32_t t25 = -131;
static volatile int8_t x117 = -4;
int32_t x126 = -107;
volatile int8_t x130 = INT8_MIN;
int32_t t29 = -4;
int16_t x138 = INT16_MAX;
volatile int32_t t31 = -28;
int64_t x162 = INT64_MAX;
uint64_t t35 = 2488317295200LLU;
uint8_t x170 = 29U;
uint16_t x172 = 68U;
static uint16_t x179 = 3537U;
uint16_t x195 = 115U;
int32_t t42 = 176;
static int8_t x198 = INT8_MAX;
static int32_t x201 = INT32_MIN;
static int8_t x207 = INT8_MAX;
volatile int32_t x210 = INT32_MIN;
uint32_t x211 = 281U;
uint16_t x213 = UINT16_MAX;
static int8_t x216 = -1;
int32_t x220 = 821167250;
uint16_t x221 = 320U;
static int32_t x222 = 207762;
int64_t x225 = -153154206LL;
int32_t x229 = -1;
int32_t t51 = -19;
volatile int64_t x238 = 9955LL;
int64_t x239 = 52374LL;
uint16_t x240 = 283U;
int64_t t53 = 23502630537LL;
int32_t x241 = -182957;
volatile int16_t x244 = -14;
uint64_t t55 = 3784571LLU;
uint8_t x256 = UINT8_MAX;
int32_t x269 = -771;
uint64_t x272 = 10083029018760206LLU;
volatile int64_t t62 = 16744145171LL;
static uint16_t x281 = 82U;
int8_t x282 = INT8_MIN;
uint16_t x283 = UINT16_MAX;
int16_t x294 = -1;
volatile int64_t t67 = 29024LL;
int16_t x313 = 98;
int8_t x314 = -1;
static uint8_t x315 = 61U;
int32_t t71 = -976240625;
int32_t x319 = -1;
uint8_t x325 = UINT8_MAX;
int16_t x326 = 0;
int64_t x327 = INT64_MIN;
int64_t t74 = -20LL;
volatile uint16_t x347 = 1U;
int32_t t78 = 939;
uint32_t t79 = 14535122U;
uint16_t x353 = UINT16_MAX;
uint64_t t80 = 13322LLU;
uint8_t x360 = 2U;
int32_t t81 = -283;
static int32_t x364 = INT32_MIN;
int8_t x376 = INT8_MIN;
volatile int32_t t87 = -1345203;
static int32_t x385 = INT32_MIN;
volatile int64_t x388 = INT64_MAX;
volatile int16_t x392 = INT16_MIN;
volatile int16_t x393 = INT16_MIN;
uint8_t x398 = 15U;
volatile int64_t t91 = -12148626809385643LL;
int64_t t92 = -11170652056096LL;
int64_t x405 = -1LL;
int16_t x408 = -3008;
int32_t t94 = 172711;
int32_t x424 = INT32_MAX;
int32_t t96 = 6;
volatile int64_t x431 = 67594LL;
uint16_t x433 = 23622U;


void f0(void) {
	static int8_t x1 = 1;
	int16_t x2 = INT16_MIN;
	volatile int32_t t0 = -42;

	t0 = (((x1==x2)*x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 324;
	uint16_t x7 = 0U;
	int32_t t1 = 2;

	t1 = (((x5==x6)*x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int32_t x10 = -1;
	int8_t x11 = INT8_MAX;
	static uint16_t x12 = 29007U;
	volatile int32_t t2 = 123;

	t2 = (((x9==x10)*x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	static int32_t x14 = INT32_MIN;
	static uint32_t x16 = 63087596U;
	volatile int64_t t3 = -455851377141LL;

	t3 = (((x13==x14)*x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -21;
	int32_t t4 = 1642787;

	t4 = (((x17==x18)*x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 2;
	uint64_t x24 = 3745578545469LLU;
	uint64_t t5 = 0LLU;

	t5 = (((x21==x22)*x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 4293456U;
	static int32_t x28 = -1;
	int32_t t6 = -1951;

	t6 = (((x25==x26)*x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x38 = 1U;
	static uint16_t x39 = 0U;
	uint64_t x40 = 133657195LLU;
	volatile uint64_t t7 = 135925LLU;

	t7 = (((x37==x38)*x39)/x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x42 = -117;
	int32_t x43 = -121494110;
	volatile int64_t x44 = -6579624682073514LL;

	t8 = (((x41==x42)*x43)/x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	static int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	volatile uint16_t x48 = 969U;
	static volatile int32_t t9 = -54;

	t9 = (((x45==x46)*x47)/x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int64_t x50 = -1LL;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t10 = 41060;

	t10 = (((x49==x50)*x51)/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x54 = 10;
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -5722;

	t11 = (((x53==x54)*x55)/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x58 = -14;
	uint64_t x59 = 233678142932LLU;
	int8_t x60 = -2;
	uint64_t t12 = 527084108868716687LLU;

	t12 = (((x57==x58)*x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x63 = 27U;
	int32_t x64 = -5297;
	volatile uint32_t t13 = 2847557U;

	t13 = (((x61==x62)*x63)/x64);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	static int8_t x70 = INT8_MIN;
	int32_t t14 = -48168;

	t14 = (((x69==x70)*x71)/x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x73 = -1LL;
	volatile uint16_t x74 = UINT16_MAX;
	int32_t x75 = 25;
	static volatile uint16_t x76 = 5277U;

	t15 = (((x73==x74)*x75)/x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = 4020746U;
	static int16_t x78 = INT16_MIN;
	int32_t x79 = -1;
	int32_t t16 = 901;

	t16 = (((x77==x78)*x79)/x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -22;
	uint16_t x82 = 2100U;
	volatile int8_t x83 = 0;
	int8_t x84 = -2;
	volatile int32_t t17 = -674;

	t17 = (((x81==x82)*x83)/x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x86 = 889384670U;
	int8_t x87 = -1;
	static int32_t t18 = 282;

	t18 = (((x85==x86)*x87)/x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -1;
	int16_t x92 = -1;
	int32_t t19 = 124136693;

	t19 = (((x89==x90)*x91)/x92);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x93 = 7U;
	uint64_t x94 = 12135653100524LLU;
	volatile int32_t x96 = INT32_MAX;
	volatile int32_t t20 = 783;

	t20 = (((x93==x94)*x95)/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	static int32_t x99 = INT32_MIN;
	int16_t x100 = -1;
	int32_t t21 = -1170;

	t21 = (((x97==x98)*x99)/x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile int64_t x102 = INT64_MIN;
	int64_t x103 = -1LL;
	static volatile int8_t x104 = INT8_MIN;
	static volatile int64_t t22 = -130832LL;

	t22 = (((x101==x102)*x103)/x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MIN;
	uint16_t x106 = 5U;
	static volatile int64_t x108 = INT64_MIN;
	volatile int64_t t23 = -144607357028619LL;

	t23 = (((x105==x106)*x107)/x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = 7U;
	int16_t x110 = INT16_MIN;
	static int8_t x112 = -8;
	volatile int32_t t24 = -350887067;

	t24 = (((x109==x110)*x111)/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MAX;
	uint8_t x115 = 56U;
	int32_t x116 = 7625;

	t25 = (((x113==x114)*x115)/x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = INT64_MIN;
	static volatile int64_t x119 = INT64_MIN;
	static uint8_t x120 = UINT8_MAX;
	int64_t t26 = -2006541909LL;

	t26 = (((x117==x118)*x119)/x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = -1;
	int64_t x123 = -28283299LL;
	static volatile int16_t x124 = INT16_MAX;
	static volatile int64_t t27 = 8762655136161028LL;

	t27 = (((x121==x122)*x123)/x124);

	if (t27 != -863LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 798765;
	int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t28 = 406497515806LL;

	t28 = (((x125==x126)*x127)/x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 5U;
	int16_t x131 = INT16_MIN;
	static int16_t x132 = INT16_MIN;

	t29 = (((x129==x130)*x131)/x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	static volatile int16_t x139 = INT16_MIN;
	static int64_t x140 = 6810959966958969LL;
	int64_t t30 = -185249200604LL;

	t30 = (((x137==x138)*x139)/x140);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MAX;
	volatile int16_t x146 = INT16_MAX;
	int16_t x147 = -1;
	static uint16_t x148 = 25U;

	t31 = (((x145==x146)*x147)/x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x149 = 190555U;
	int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 44U;
	volatile int32_t t32 = -7;

	t32 = (((x149==x150)*x151)/x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -16;
	static volatile uint64_t x154 = UINT64_MAX;
	int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t33 = -26;

	t33 = (((x153==x154)*x155)/x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x157 = INT8_MIN;
	uint32_t x158 = 99U;
	uint8_t x159 = 102U;
	static uint8_t x160 = UINT8_MAX;
	static volatile int32_t t34 = 76733395;

	t34 = (((x157==x158)*x159)/x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -3629;
	uint64_t x163 = 22743410LLU;
	int32_t x164 = INT32_MIN;

	t35 = (((x161==x162)*x163)/x164);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x165 = 2432062046804882776LLU;
	static int32_t x166 = 1534608;
	uint16_t x167 = 1965U;
	int64_t x168 = -7LL;
	int64_t t36 = -123222LL;

	t36 = (((x165==x166)*x167)/x168);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -1LL;
	int32_t x171 = -1;
	int32_t t37 = 558;

	t37 = (((x169==x170)*x171)/x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 121385U;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t38 = 465524;

	t38 = (((x173==x174)*x175)/x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = 176;
	int32_t x178 = -1;
	uint64_t x180 = 1LLU;
	uint64_t t39 = 135412LLU;

	t39 = (((x177==x178)*x179)/x180);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 267586604;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 0U;
	int16_t x184 = INT16_MIN;
	uint32_t t40 = 2137119591U;

	t40 = (((x181==x182)*x183)/x184);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 2U;
	uint8_t x190 = 5U;
	volatile int8_t x191 = 0;
	volatile int64_t x192 = -1LL;
	static int64_t t41 = 283428LL;

	t41 = (((x189==x190)*x191)/x192);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x193 = 633577LLU;
	volatile int64_t x194 = INT64_MAX;
	uint16_t x196 = 1016U;

	t42 = (((x193==x194)*x195)/x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x199 = 6;
	int64_t x200 = INT64_MIN;
	volatile int64_t t43 = 166137627267129LL;

	t43 = (((x197==x198)*x199)/x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x202 = -3199702208000LL;
	static int64_t x203 = INT64_MIN;
	volatile int16_t x204 = INT16_MIN;
	int64_t t44 = 14LL;

	t44 = (((x201==x202)*x203)/x204);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x205 = INT64_MIN;
	uint8_t x206 = UINT8_MAX;
	int16_t x208 = -26;
	int32_t t45 = -247284896;

	t45 = (((x205==x206)*x207)/x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 304261865LLU;
	volatile int8_t x212 = 5;
	uint32_t t46 = 1781181453U;

	t46 = (((x209==x210)*x211)/x212);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x214 = 119U;
	int64_t x215 = INT64_MIN;
	volatile int64_t t47 = 7LL;

	t47 = (((x213==x214)*x215)/x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = UINT16_MAX;
	static uint32_t x218 = 12U;
	static int16_t x219 = INT16_MAX;
	static int32_t t48 = -29850;

	t48 = (((x217==x218)*x219)/x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x223 = 4;
	uint8_t x224 = UINT8_MAX;
	int32_t t49 = 46710285;

	t49 = (((x221==x222)*x223)/x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x226 = 14876U;
	int64_t x227 = -2483286100398LL;
	volatile int32_t x228 = INT32_MIN;
	volatile int64_t t50 = -198563LL;

	t50 = (((x225==x226)*x227)/x228);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x230 = 126U;
	int8_t x231 = INT8_MAX;
	int16_t x232 = -1;

	t51 = (((x229==x230)*x231)/x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x233 = 7778U;
	int32_t x234 = 1724;
	int64_t x235 = -3LL;
	volatile int32_t x236 = -96801937;
	int64_t t52 = 52982LL;

	t52 = (((x233==x234)*x235)/x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = 6U;

	t53 = (((x237==x238)*x239)/x240);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x242 = UINT16_MAX;
	int8_t x243 = 1;
	volatile int32_t t54 = -898;

	t54 = (((x241==x242)*x243)/x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	volatile uint32_t x250 = 280323733U;
	volatile uint16_t x251 = UINT16_MAX;
	volatile uint64_t x252 = 453530LLU;

	t55 = (((x249==x250)*x251)/x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = 4U;
	int32_t x254 = INT32_MAX;
	uint16_t x255 = 2466U;
	volatile int32_t t56 = 241800;

	t56 = (((x253==x254)*x255)/x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = 61U;
	int8_t x258 = -1;
	uint32_t x259 = 758068283U;
	int32_t x260 = INT32_MIN;
	volatile uint32_t t57 = 0U;

	t57 = (((x257==x258)*x259)/x260);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x261 = 0U;
	volatile uint16_t x262 = 14U;
	static int16_t x263 = -1;
	int8_t x264 = -1;
	int32_t t58 = 446374981;

	t58 = (((x261==x262)*x263)/x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x265 = INT32_MIN;
	int64_t x266 = 81LL;
	static uint8_t x267 = 1U;
	static volatile int16_t x268 = -3;
	int32_t t59 = 4156325;

	t59 = (((x265==x266)*x267)/x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x270 = 45836183459921LLU;
	int8_t x271 = 1;
	uint64_t t60 = 3981395831992LLU;

	t60 = (((x269==x270)*x271)/x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -1;
	static volatile int64_t x274 = -1LL;
	int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t61 = 8085807;

	t61 = (((x273==x274)*x275)/x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = INT64_MIN;
	static int64_t x278 = 4LL;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;

	t62 = (((x277==x278)*x279)/x280);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x284 = INT32_MAX;
	int32_t t63 = -40713;

	t63 = (((x281==x282)*x283)/x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = INT8_MAX;
	uint32_t x286 = 13249U;
	int32_t x287 = INT32_MIN;
	uint16_t x288 = 35U;
	volatile int32_t t64 = 2;

	t64 = (((x285==x286)*x287)/x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	int32_t x291 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t65 = 17993;

	t65 = (((x289==x290)*x291)/x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 65U;
	int32_t x295 = -7033;
	uint16_t x296 = 49U;
	volatile int32_t t66 = -1;

	t66 = (((x293==x294)*x295)/x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x297 = 1070871761028232LLU;
	static int32_t x298 = 2942959;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = -1LL;

	t67 = (((x297==x298)*x299)/x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x301 = 0U;
	volatile int16_t x302 = INT16_MIN;
	static uint32_t x303 = 4U;
	int32_t x304 = INT32_MIN;
	static volatile uint32_t t68 = 239726503U;

	t68 = (((x301==x302)*x303)/x304);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = 185299U;
	uint16_t x306 = 7U;
	static uint64_t x307 = 0LLU;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t69 = 466LLU;

	t69 = (((x305==x306)*x307)/x308);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x309 = 1U;
	uint64_t x310 = 128LLU;
	int16_t x311 = -1;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t70 = -7040737;

	t70 = (((x309==x310)*x311)/x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x316 = 180U;

	t71 = (((x313==x314)*x315)/x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x317 = 5U;
	volatile int32_t x318 = -1;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t72 = 464036LLU;

	t72 = (((x317==x318)*x319)/x320);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = 30U;
	uint64_t x322 = 1137474057LLU;
	static int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	static int32_t t73 = 214208859;

	t73 = (((x321==x322)*x323)/x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x328 = -10;

	t74 = (((x325==x326)*x327)/x328);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = 4265721142LLU;
	volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = 3396771688908LL;
	int32_t x332 = -1;
	int64_t t75 = 2LL;

	t75 = (((x329==x330)*x331)/x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 3234817LLU;
	int64_t x335 = INT64_MIN;
	int32_t x336 = -4393;
	static volatile int64_t t76 = 1194895789292697LL;

	t76 = (((x333==x334)*x335)/x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = 6265;
	int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	int64_t x344 = INT64_MAX;
	volatile int64_t t77 = 13LL;

	t77 = (((x341==x342)*x343)/x344);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = INT32_MAX;
	volatile int32_t x346 = INT32_MIN;
	static int16_t x348 = INT16_MIN;

	t78 = (((x345==x346)*x347)/x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 812050764U;
	int32_t x352 = INT32_MIN;

	t79 = (((x349==x350)*x351)/x352);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x354 = INT32_MIN;
	int32_t x355 = -1;
	static volatile uint64_t x356 = 501466416LLU;

	t80 = (((x353==x354)*x355)/x356);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x357 = 8U;
	volatile int32_t x358 = INT32_MAX;
	volatile int8_t x359 = INT8_MIN;

	t81 = (((x357==x358)*x359)/x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = 309LL;
	int16_t x362 = INT16_MIN;
	uint16_t x363 = 969U;
	static int32_t t82 = -58567;

	t82 = (((x361==x362)*x363)/x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = -490782742745933291LL;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MAX;
	int8_t x368 = -1;
	volatile int32_t t83 = -41340471;

	t83 = (((x365==x366)*x367)/x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MAX;
	uint32_t x372 = 268113712U;
	volatile int64_t t84 = 56473980216636458LL;

	t84 = (((x369==x370)*x371)/x372);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MAX;
	volatile int64_t t85 = -316897451847LL;

	t85 = (((x373==x374)*x375)/x376);

	if (t85 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 452U;
	static int64_t x379 = INT64_MIN;
	static int32_t x380 = INT32_MIN;
	volatile int64_t t86 = 16694189554640LL;

	t86 = (((x377==x378)*x379)/x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x381 = 3492U;
	uint64_t x382 = 4006388335895596961LLU;
	int8_t x383 = INT8_MAX;
	volatile int8_t x384 = INT8_MAX;

	t87 = (((x381==x382)*x383)/x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x386 = INT8_MAX;
	int64_t x387 = INT64_MAX;
	volatile int64_t t88 = 5081234349829LL;

	t88 = (((x385==x386)*x387)/x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MIN;
	volatile uint8_t x390 = UINT8_MAX;
	int32_t x391 = INT32_MIN;
	static int32_t t89 = -721907900;

	t89 = (((x389==x390)*x391)/x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = 14U;
	static int32_t t90 = -27474063;

	t90 = (((x393==x394)*x395)/x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = -1;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;

	t91 = (((x397==x398)*x399)/x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x401 = INT16_MIN;
	int64_t x402 = -85595895869738953LL;
	int64_t x403 = 2286065306142481683LL;
	int64_t x404 = 490298203004089527LL;

	t92 = (((x401==x402)*x403)/x404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x406 = UINT32_MAX;
	volatile int8_t x407 = INT8_MIN;
	int32_t t93 = -518668714;

	t93 = (((x405==x406)*x407)/x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MIN;
	uint64_t x410 = 154003034LLU;
	volatile uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = -13234;

	t94 = (((x409==x410)*x411)/x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = INT8_MAX;
	uint8_t x418 = 87U;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	int32_t t95 = -2;

	t95 = (((x417==x418)*x419)/x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	uint8_t x423 = 92U;

	t96 = (((x421==x422)*x423)/x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x425 = 2956U;
	int16_t x426 = INT16_MIN;
	int32_t x427 = -1;
	static int64_t x428 = INT64_MIN;
	volatile int64_t t97 = 8069765051326048LL;

	t97 = (((x425==x426)*x427)/x428);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = UINT8_MAX;
	uint16_t x430 = UINT16_MAX;
	static int32_t x432 = INT32_MIN;
	static volatile int64_t t98 = -1322271245834LL;

	t98 = (((x429==x430)*x431)/x432);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x434 = -1LL;
	volatile int16_t x435 = INT16_MIN;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t99 = 2;

	t99 = (((x433==x434)*x435)/x436);

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

