#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -38731;
int8_t x5 = INT8_MAX;
uint64_t x6 = UINT64_MAX;
int64_t x17 = INT64_MIN;
int16_t x39 = 5;
uint16_t x41 = 58U;
volatile int32_t t8 = 926103558;
int32_t t10 = 326699152;
int32_t x66 = -1;
volatile int32_t x68 = -23119;
int8_t x83 = INT8_MIN;
int64_t x86 = INT64_MAX;
static volatile int8_t x90 = INT8_MAX;
volatile int64_t x91 = -153843237950259LL;
volatile uint32_t x92 = 272U;
volatile int32_t t17 = -15532;
int64_t x94 = INT64_MAX;
int32_t t18 = 514;
uint64_t x108 = 8LLU;
int32_t x109 = -1;
int16_t x112 = INT16_MIN;
volatile int32_t t21 = 1;
volatile int16_t x115 = INT16_MIN;
uint8_t x119 = 1U;
volatile uint16_t x121 = 13U;
int8_t x122 = 1;
volatile int8_t x124 = -1;
int32_t t24 = -191292;
uint8_t x128 = UINT8_MAX;
int32_t t25 = 10828;
static int32_t t26 = -2249;
static uint32_t x139 = 123018U;
static volatile uint16_t x140 = 1418U;
int32_t t28 = -127978155;
static uint32_t x153 = 348216U;
int32_t x154 = 1;
int32_t x156 = INT32_MIN;
uint64_t x159 = 59578744697067LLU;
volatile int32_t t31 = 1164117;
uint16_t x161 = UINT16_MAX;
uint64_t x169 = 13523LLU;
int32_t t34 = -2;
static int64_t x179 = -1LL;
uint32_t x180 = 247661841U;
uint16_t x186 = UINT16_MAX;
int64_t x187 = -1LL;
volatile uint32_t x189 = 487026U;
volatile int32_t t38 = -2;
volatile int32_t t39 = 845;
volatile int32_t t40 = 2;
int64_t x201 = INT64_MIN;
static int8_t x204 = -1;
static int32_t x207 = INT32_MAX;
volatile uint16_t x208 = 322U;
int32_t t44 = 0;
uint64_t x232 = 29316096111373246LLU;
int32_t x243 = INT32_MAX;
int16_t x253 = -1;
static volatile int8_t x280 = INT8_MIN;
static uint32_t x287 = UINT32_MAX;
uint64_t x303 = 1688202679024454588LLU;
int8_t x304 = INT8_MAX;
int64_t x308 = INT64_MAX;
static int64_t x317 = -1LL;
static int64_t x318 = INT64_MIN;
int8_t x322 = -1;
int8_t x325 = -18;
static volatile int16_t x328 = INT16_MIN;
static int8_t x329 = -4;
uint16_t x342 = 1U;
static int8_t x351 = INT8_MAX;
volatile uint64_t x356 = 5LLU;
static int16_t x362 = -15166;
int32_t x372 = -215215;
uint64_t x373 = UINT64_MAX;
int16_t x374 = -1;
static uint64_t x381 = 1917403359LLU;
volatile int64_t x382 = -1LL;
int64_t x383 = INT64_MAX;
int8_t x388 = INT8_MAX;
volatile int64_t x396 = INT64_MIN;
static int16_t x405 = INT16_MIN;
int8_t x409 = -1;
volatile int8_t x410 = -1;
int64_t x413 = 9408364250LL;
int16_t x415 = INT16_MIN;
volatile int8_t x419 = -5;
int32_t t89 = 28024;
int64_t x436 = -25215164635632LL;
static int32_t t90 = 13213234;
static volatile uint64_t x441 = 16357313915848LLU;
int64_t x451 = -1LL;
volatile int16_t x454 = INT16_MIN;
int8_t x456 = INT8_MIN;
int64_t x457 = 40013657360182LL;
int32_t x459 = INT32_MAX;
volatile uint32_t x470 = 3U;


void f0(void) {
	static int32_t x1 = -1;
	uint8_t x2 = 13U;
	static volatile int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MIN;

	t0 = (((x1|x2)*x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = 147U;
	volatile uint32_t x8 = 23U;
	static volatile int32_t t1 = 3724;

	t1 = (((x5|x6)*x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 10;
	int8_t x10 = -23;
	int64_t x11 = -1LL;
	volatile int64_t x12 = 40LL;
	volatile int32_t t2 = 31;

	t2 = (((x9|x10)*x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	static int8_t x20 = INT8_MIN;
	static volatile int32_t t3 = 62356888;

	t3 = (((x17|x18)*x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = INT64_MIN;
	int64_t x26 = -1LL;
	int32_t x27 = -1782;
	int16_t x28 = -1;
	int32_t t4 = 3;

	t4 = (((x25|x26)*x27)<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	volatile uint8_t x30 = UINT8_MAX;
	volatile int64_t x31 = 6516231908LL;
	int16_t x32 = INT16_MIN;
	volatile int32_t t5 = 6;

	t5 = (((x29|x30)*x31)<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	static int16_t x38 = -1;
	static int16_t x40 = 2815;
	static volatile int32_t t6 = -207;

	t6 = (((x37|x38)*x39)<x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x42 = 2U;
	uint64_t x43 = 7LLU;
	int64_t x44 = -741LL;
	volatile int32_t t7 = -254270;

	t7 = (((x41|x42)*x43)<x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x45 = 22616U;
	static volatile uint32_t x46 = 112892U;
	static uint16_t x47 = 165U;
	uint32_t x48 = 2714U;

	t8 = (((x45|x46)*x47)<x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = INT16_MIN;
	static int16_t x50 = INT16_MIN;
	uint8_t x51 = 15U;
	static volatile uint64_t x52 = UINT64_MAX;
	int32_t t9 = -27;

	t9 = (((x49|x50)*x51)<x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 1;
	uint64_t x54 = UINT64_MAX;
	uint16_t x55 = 7U;
	int64_t x56 = INT64_MIN;

	t10 = (((x53|x54)*x55)<x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -1;
	static uint64_t x62 = 20LLU;
	static uint16_t x63 = 1316U;
	uint16_t x64 = UINT16_MAX;
	int32_t t11 = -16;

	t11 = (((x61|x62)*x63)<x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x65 = INT64_MIN;
	int32_t x67 = -1;
	volatile int32_t t12 = 288840;

	t12 = (((x65|x66)*x67)<x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = 3886461;
	int32_t x74 = -1;
	volatile int16_t x75 = 1;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t13 = 197422150;

	t13 = (((x73|x74)*x75)<x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x77 = -1LL;
	int8_t x78 = -1;
	static int16_t x79 = -1;
	int16_t x80 = INT16_MAX;
	volatile int32_t t14 = 1605142;

	t14 = (((x77|x78)*x79)<x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -1;
	volatile int8_t x82 = -1;
	int16_t x84 = 1;
	int32_t t15 = -15664770;

	t15 = (((x81|x82)*x83)<x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = -49031;
	volatile uint16_t x87 = 274U;
	static uint64_t x88 = 2230914959994226LLU;
	int32_t t16 = 38;

	t16 = (((x85|x86)*x87)<x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = INT8_MIN;

	t17 = (((x89|x90)*x91)<x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -1;
	volatile uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;

	t18 = (((x93|x94)*x95)<x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = INT16_MIN;
	static uint16_t x98 = 5355U;
	int32_t x99 = -18;
	volatile uint16_t x100 = 2195U;
	int32_t t19 = -12029;

	t19 = (((x97|x98)*x99)<x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	uint8_t x106 = 2U;
	uint16_t x107 = 7509U;
	static volatile int32_t t20 = 917510339;

	t20 = (((x105|x106)*x107)<x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x110 = -1;
	int32_t x111 = -2763150;

	t21 = (((x109|x110)*x111)<x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	static volatile int32_t x114 = -1;
	int16_t x116 = INT16_MIN;
	volatile int32_t t22 = 76021;

	t22 = (((x113|x114)*x115)<x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = -18158494LL;
	int16_t x118 = 1;
	uint64_t x120 = 10218585835LLU;
	static volatile int32_t t23 = 53652638;

	t23 = (((x117|x118)*x119)<x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x123 = UINT8_MAX;

	t24 = (((x121|x122)*x123)<x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x125 = 690U;
	int64_t x126 = 27LL;
	static uint64_t x127 = UINT64_MAX;

	t25 = (((x125|x126)*x127)<x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x129 = INT8_MAX;
	uint16_t x130 = 131U;
	int8_t x131 = 11;
	uint16_t x132 = 502U;

	t26 = (((x129|x130)*x131)<x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x133 = 30U;
	uint32_t x134 = 63U;
	volatile uint64_t x135 = 9510797062579816LLU;
	static int8_t x136 = INT8_MAX;
	static int32_t t27 = -1;

	t27 = (((x133|x134)*x135)<x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -1LL;
	static uint16_t x138 = 9484U;

	t28 = (((x137|x138)*x139)<x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = -1LL;
	int32_t x150 = INT32_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t29 = -1510;

	t29 = (((x149|x150)*x151)<x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x155 = -1;
	int32_t t30 = 0;

	t30 = (((x153|x154)*x155)<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x157 = 566575U;
	uint32_t x158 = 364779U;
	volatile int8_t x160 = INT8_MAX;

	t31 = (((x157|x158)*x159)<x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x162 = INT16_MAX;
	int8_t x163 = -6;
	int16_t x164 = INT16_MIN;
	int32_t t32 = -192;

	t32 = (((x161|x162)*x163)<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x170 = INT32_MAX;
	int16_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	static volatile int32_t t33 = 37;

	t33 = (((x169|x170)*x171)<x172);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x173 = 6U;
	static int32_t x174 = -1;
	uint64_t x175 = 695751580901152LLU;
	uint16_t x176 = 329U;

	t34 = (((x173|x174)*x175)<x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x177 = UINT16_MAX;
	volatile int8_t x178 = 25;
	static int32_t t35 = 5856743;

	t35 = (((x177|x178)*x179)<x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x181 = UINT16_MAX;
	static int8_t x182 = 1;
	volatile uint64_t x183 = 16668469277410LLU;
	uint16_t x184 = UINT16_MAX;
	int32_t t36 = 32;

	t36 = (((x181|x182)*x183)<x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x185 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t37 = -3165733;

	t37 = (((x185|x186)*x187)<x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x190 = INT16_MIN;
	static uint16_t x191 = 4803U;
	int64_t x192 = -1LL;

	t38 = (((x189|x190)*x191)<x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = 10918368LL;
	int16_t x194 = INT16_MIN;
	static volatile int64_t x195 = 6LL;
	volatile int32_t x196 = INT32_MAX;

	t39 = (((x193|x194)*x195)<x196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x197 = 20074U;
	int8_t x198 = -1;
	volatile int64_t x199 = 105022LL;
	volatile int16_t x200 = -1;

	t40 = (((x197|x198)*x199)<x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x202 = INT32_MIN;
	int8_t x203 = -1;
	int32_t t41 = -4042595;

	t41 = (((x201|x202)*x203)<x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = INT32_MAX;
	static int32_t x206 = -873195;
	volatile int32_t t42 = 285254;

	t42 = (((x205|x206)*x207)<x208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint8_t x210 = 0U;
	int8_t x211 = INT8_MIN;
	static int8_t x212 = INT8_MIN;
	int32_t t43 = -1;

	t43 = (((x209|x210)*x211)<x212);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x213 = INT32_MAX;
	volatile int32_t x214 = -269;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MAX;

	t44 = (((x213|x214)*x215)<x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x217 = 689U;
	int64_t x218 = 63LL;
	int32_t x219 = 1232673;
	static volatile int16_t x220 = 3;
	static volatile int32_t t45 = 729791;

	t45 = (((x217|x218)*x219)<x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x225 = UINT8_MAX;
	volatile int16_t x226 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t46 = -241353;

	t46 = (((x225|x226)*x227)<x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = -48;
	static int32_t x230 = INT32_MIN;
	volatile int16_t x231 = -3246;
	int32_t t47 = 83121513;

	t47 = (((x229|x230)*x231)<x232);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	uint32_t x235 = 103945U;
	int16_t x236 = INT16_MIN;
	int32_t t48 = 1;

	t48 = (((x233|x234)*x235)<x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = UINT8_MAX;
	int8_t x238 = -1;
	static volatile uint32_t x239 = 22514678U;
	static uint64_t x240 = 2759260LLU;
	volatile int32_t t49 = 9718035;

	t49 = (((x237|x238)*x239)<x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	static int8_t x242 = INT8_MAX;
	int16_t x244 = -134;
	int32_t t50 = 14;

	t50 = (((x241|x242)*x243)<x244);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = 18301903557398594LL;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t51 = 100645;

	t51 = (((x245|x246)*x247)<x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x254 = 45457963U;
	int8_t x255 = INT8_MIN;
	int64_t x256 = -87106400LL;
	int32_t t52 = 0;

	t52 = (((x253|x254)*x255)<x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MIN;
	volatile uint64_t x258 = 22786577798198652LLU;
	static uint16_t x259 = 1U;
	int32_t x260 = INT32_MAX;
	int32_t t53 = 843;

	t53 = (((x257|x258)*x259)<x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = 161LL;
	static volatile int8_t x262 = INT8_MAX;
	volatile int16_t x263 = INT16_MIN;
	uint8_t x264 = 0U;
	int32_t t54 = -4;

	t54 = (((x261|x262)*x263)<x264);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = UINT64_MAX;
	int16_t x266 = -111;
	int8_t x267 = 17;
	int8_t x268 = INT8_MAX;
	volatile int32_t t55 = -45;

	t55 = (((x265|x266)*x267)<x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -1;
	int64_t x270 = INT64_MIN;
	uint64_t x271 = 8609937316660LLU;
	int16_t x272 = INT16_MAX;
	int32_t t56 = -771592;

	t56 = (((x269|x270)*x271)<x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	volatile uint8_t x275 = 5U;
	uint32_t x276 = UINT32_MAX;
	static int32_t t57 = 409878313;

	t57 = (((x273|x274)*x275)<x276);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x277 = 12;
	static int64_t x278 = INT64_MIN;
	volatile uint8_t x279 = 0U;
	volatile int32_t t58 = 3;

	t58 = (((x277|x278)*x279)<x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x281 = 47U;
	int32_t x282 = -1;
	static int8_t x283 = 57;
	int32_t x284 = INT32_MAX;
	int32_t t59 = -493841218;

	t59 = (((x281|x282)*x283)<x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -229;
	uint8_t x286 = UINT8_MAX;
	static int32_t x288 = INT32_MIN;
	static volatile int32_t t60 = 31517072;

	t60 = (((x285|x286)*x287)<x288);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = -13;
	uint64_t x291 = 115590910291LLU;
	int16_t x292 = INT16_MAX;
	static volatile int32_t t61 = -517229710;

	t61 = (((x289|x290)*x291)<x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = -1;
	uint8_t x294 = 0U;
	volatile int64_t x295 = 234LL;
	int16_t x296 = -953;
	static volatile int32_t t62 = 1333;

	t62 = (((x293|x294)*x295)<x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = -11675339538706853LL;
	uint8_t x302 = 7U;
	static int32_t t63 = -2;

	t63 = (((x301|x302)*x303)<x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x305 = 63064583591050LLU;
	volatile uint8_t x306 = 28U;
	int32_t x307 = INT32_MIN;
	volatile int32_t t64 = -1402;

	t64 = (((x305|x306)*x307)<x308);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = -1;
	static volatile int16_t x310 = 1;
	int16_t x311 = -1;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t65 = -107137;

	t65 = (((x309|x310)*x311)<x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 2047256322276LL;
	volatile int64_t x316 = INT64_MAX;
	int32_t t66 = 14476;

	t66 = (((x313|x314)*x315)<x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	volatile int32_t t67 = -22178869;

	t67 = (((x317|x318)*x319)<x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = 19LL;
	static int32_t x323 = INT32_MIN;
	int8_t x324 = INT8_MAX;
	volatile int32_t t68 = 15;

	t68 = (((x321|x322)*x323)<x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	volatile int32_t t69 = 206948042;

	t69 = (((x325|x326)*x327)<x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x330 = 973U;
	int32_t x331 = INT32_MAX;
	int16_t x332 = -4;
	volatile int32_t t70 = 454;

	t70 = (((x329|x330)*x331)<x332);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = 969U;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -1LL;
	volatile uint32_t x340 = 1302859023U;
	int32_t t71 = 0;

	t71 = (((x337|x338)*x339)<x340);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = 1;
	int64_t x343 = INT64_MAX;
	volatile int16_t x344 = 1;
	volatile int32_t t72 = 6;

	t72 = (((x341|x342)*x343)<x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1;
	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = 1;
	static int64_t x348 = -1LL;
	volatile int32_t t73 = 44;

	t73 = (((x345|x346)*x347)<x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = 25U;
	uint16_t x350 = UINT16_MAX;
	int32_t x352 = -43;
	volatile int32_t t74 = -1296642;

	t74 = (((x349|x350)*x351)<x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	int32_t t75 = 866;

	t75 = (((x353|x354)*x355)<x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x361 = 563964650U;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = 1;
	volatile int32_t t76 = 40;

	t76 = (((x361|x362)*x363)<x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x365 = 196;
	int8_t x366 = INT8_MIN;
	volatile int8_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	static int32_t t77 = -26934;

	t77 = (((x365|x366)*x367)<x368);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x369 = INT64_MIN;
	int8_t x370 = -32;
	int64_t x371 = -1LL;
	volatile int32_t t78 = -1832;

	t78 = (((x369|x370)*x371)<x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x375 = 3U;
	int16_t x376 = 0;
	volatile int32_t t79 = 244511;

	t79 = (((x373|x374)*x375)<x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 11LLU;
	volatile uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 2542U;
	volatile int32_t t80 = -2594;

	t80 = (((x377|x378)*x379)<x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x384 = 7742190418LL;
	static volatile int32_t t81 = -209179;

	t81 = (((x381|x382)*x383)<x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = 28665106035LLU;
	uint16_t x386 = 4432U;
	int16_t x387 = INT16_MAX;
	volatile int32_t t82 = 59213327;

	t82 = (((x385|x386)*x387)<x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x393 = INT8_MIN;
	volatile int8_t x394 = 36;
	int8_t x395 = 13;
	int32_t t83 = 1242107;

	t83 = (((x393|x394)*x395)<x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 19917U;
	int32_t x399 = -1;
	int8_t x400 = -1;
	int32_t t84 = -6;

	t84 = (((x397|x398)*x399)<x400);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = -1;
	volatile int32_t t85 = 199;

	t85 = (((x405|x406)*x407)<x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x411 = 2217;
	int16_t x412 = 6720;
	static volatile int32_t t86 = 921901;

	t86 = (((x409|x410)*x411)<x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x414 = UINT8_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t87 = 25230671;

	t87 = (((x413|x414)*x415)<x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x417 = UINT32_MAX;
	volatile uint32_t x418 = UINT32_MAX;
	uint32_t x420 = UINT32_MAX;
	int32_t t88 = 217750115;

	t88 = (((x417|x418)*x419)<x420);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x429 = 57760255765002LL;
	static int64_t x430 = INT64_MAX;
	int32_t x431 = -1;
	int32_t x432 = 7;

	t89 = (((x429|x430)*x431)<x432);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = INT32_MIN;
	int64_t x434 = 2LL;
	int16_t x435 = INT16_MIN;

	t90 = (((x433|x434)*x435)<x436);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x437 = 4U;
	volatile int8_t x438 = INT8_MAX;
	static volatile int8_t x439 = -2;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t91 = 1;

	t91 = (((x437|x438)*x439)<x440);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x442 = -5444579;
	static volatile int32_t x443 = 19861672;
	uint8_t x444 = 1U;
	volatile int32_t t92 = -15516;

	t92 = (((x441|x442)*x443)<x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x449 = 783891251116LL;
	static int32_t x450 = INT32_MIN;
	static volatile uint32_t x452 = 487U;
	volatile int32_t t93 = 1;

	t93 = (((x449|x450)*x451)<x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = 6998774;
	int8_t x455 = -2;
	volatile int32_t t94 = 427;

	t94 = (((x453|x454)*x455)<x456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x458 = INT8_MIN;
	uint16_t x460 = UINT16_MAX;
	int32_t t95 = -10252;

	t95 = (((x457|x458)*x459)<x460);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x461 = INT8_MIN;
	int32_t x462 = 12555774;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = INT64_MIN;
	int32_t t96 = 294942;

	t96 = (((x461|x462)*x463)<x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = -7;
	volatile uint64_t x466 = 171759308195463920LLU;
	int32_t x467 = INT32_MIN;
	static volatile int8_t x468 = INT8_MAX;
	int32_t t97 = 442;

	t97 = (((x465|x466)*x467)<x468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x469 = INT32_MIN;
	int16_t x471 = INT16_MIN;
	int64_t x472 = INT64_MIN;
	static volatile int32_t t98 = -1;

	t98 = (((x469|x470)*x471)<x472);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x473 = 2U;
	uint16_t x474 = 63U;
	uint8_t x475 = 21U;
	int32_t x476 = INT32_MIN;
	int32_t t99 = 32127696;

	t99 = (((x473|x474)*x475)<x476);

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

