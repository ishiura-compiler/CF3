#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
uint32_t x3 = 5509495U;
int8_t x4 = INT8_MAX;
volatile int32_t t2 = -418197911;
volatile int32_t x14 = INT32_MIN;
volatile int64_t x15 = -4666533436967LL;
uint64_t x16 = UINT64_MAX;
static int32_t t3 = -117;
int8_t x22 = INT8_MAX;
int64_t x25 = 11394LL;
volatile uint64_t x27 = 31460593613982245LLU;
uint16_t x31 = UINT16_MAX;
int32_t t7 = 34003189;
int16_t x36 = -6;
int8_t x41 = INT8_MIN;
static volatile int32_t t11 = 7;
int16_t x50 = 449;
volatile uint16_t x51 = UINT16_MAX;
volatile int64_t x57 = INT64_MAX;
int32_t t14 = 23469;
uint64_t x64 = UINT64_MAX;
int32_t t16 = -99;
int64_t x73 = INT64_MAX;
int8_t x83 = -1;
volatile int64_t x84 = 48863136LL;
int64_t x99 = INT64_MIN;
uint8_t x106 = UINT8_MAX;
int32_t x110 = INT32_MIN;
static int16_t x111 = INT16_MIN;
volatile int32_t t26 = -101;
uint16_t x113 = 30U;
int8_t x118 = 4;
int32_t t29 = 32893;
uint8_t x129 = 5U;
static volatile int8_t x131 = INT8_MAX;
volatile int64_t x133 = INT64_MAX;
int32_t x134 = -1;
int16_t x135 = -4;
volatile int64_t x137 = 137194572025347333LL;
int64_t x143 = INT64_MIN;
int32_t x151 = INT32_MAX;
int32_t x152 = INT32_MIN;
volatile int32_t t36 = 450445371;
volatile uint64_t x155 = 13LLU;
int32_t t37 = -43600847;
volatile uint32_t x157 = UINT32_MAX;
static uint16_t x158 = 16957U;
int64_t x162 = -1LL;
uint32_t x167 = UINT32_MAX;
volatile int32_t t40 = 73468;
int16_t x172 = INT16_MAX;
static volatile int16_t x178 = INT16_MIN;
int32_t t43 = -3378011;
int16_t x187 = -1;
int32_t x188 = INT32_MIN;
static int16_t x193 = -1;
static volatile int8_t x194 = 0;
static int32_t t46 = 1;
static volatile int64_t x197 = INT64_MIN;
int16_t x200 = INT16_MAX;
int16_t x202 = INT16_MIN;
uint32_t x206 = 5910627U;
uint16_t x207 = UINT16_MAX;
int32_t x212 = -903828531;
uint32_t x218 = 56890U;
static volatile int32_t t52 = -4191;
int8_t x227 = INT8_MIN;
int32_t t55 = -40;
int8_t x236 = 38;
int32_t t57 = -21734;
int16_t x246 = 454;
volatile uint16_t x247 = UINT16_MAX;
uint64_t x250 = 384504LLU;
uint8_t x253 = UINT8_MAX;
volatile int32_t t61 = 39;
int32_t x264 = -3;
int32_t x266 = 708725;
volatile int32_t t63 = 20573;
int16_t x271 = INT16_MIN;
int32_t t64 = -86;
volatile uint8_t x274 = 77U;
int16_t x281 = -1;
int32_t x284 = INT32_MIN;
int32_t x288 = INT32_MAX;
int64_t x293 = INT64_MIN;
static int16_t x297 = INT16_MAX;
int8_t x299 = INT8_MIN;
int32_t x306 = -1;
volatile int32_t t73 = 989912452;
int16_t x311 = INT16_MIN;
volatile int32_t t74 = 2032208;
volatile uint32_t x314 = 683503137U;
uint16_t x317 = 2U;
static int8_t x323 = -7;
int8_t x331 = INT8_MAX;
int64_t x332 = -84518LL;
int8_t x334 = 0;
static int16_t x336 = 3;
int32_t t80 = 1359497;
uint32_t x353 = 15U;
uint8_t x358 = UINT8_MAX;
static int32_t x359 = INT32_MIN;
uint32_t x363 = UINT32_MAX;
int8_t x365 = INT8_MAX;
int8_t x366 = INT8_MAX;
int64_t x374 = 917410305LL;
int64_t x385 = -1352884542926310963LL;
volatile int32_t x386 = INT32_MAX;
uint16_t x391 = UINT16_MAX;
int16_t x398 = INT16_MAX;
int64_t x399 = -1LL;
static uint64_t x403 = 10322413846857737LLU;
int32_t x404 = 2805;
volatile uint8_t x410 = UINT8_MAX;
static int32_t x412 = -13951712;
static volatile int32_t t95 = -430320406;
int64_t x419 = INT64_MIN;
static int8_t x421 = -1;
int8_t x424 = -1;
static int32_t t97 = 55;
int32_t x426 = INT32_MAX;
int16_t x429 = INT16_MAX;


void f0(void) {
	volatile int16_t x2 = -21;
	int32_t t0 = 0;

	t0 = (((x1&x2)+x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint32_t x6 = 209027U;
	static int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 4423;

	t1 = (((x5&x6)+x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int16_t x10 = 94;
	int16_t x11 = INT16_MAX;
	uint8_t x12 = UINT8_MAX;

	t2 = (((x9&x10)+x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;

	t3 = (((x13&x14)+x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -30;
	volatile int16_t x18 = INT16_MIN;
	static uint8_t x19 = 1U;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -1;

	t4 = (((x17&x18)+x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 2U;
	uint16_t x23 = 0U;
	int8_t x24 = 1;
	volatile int32_t t5 = -2584946;

	t5 = (((x21&x22)+x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	static int64_t x28 = INT64_MAX;
	volatile int32_t t6 = 16;

	t6 = (((x25&x26)+x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static int16_t x30 = INT16_MAX;
	int16_t x32 = INT16_MAX;

	t7 = (((x29&x30)+x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = 4;
	uint8_t x35 = 9U;
	static volatile int32_t t8 = -115647673;

	t8 = (((x33&x34)+x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = UINT32_MAX;
	uint8_t x39 = 1U;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -745361;

	t9 = (((x37&x38)+x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -31786;

	t10 = (((x41&x42)+x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = 0;
	uint64_t x47 = 433451022752LLU;
	uint32_t x48 = UINT32_MAX;

	t11 = (((x45&x46)+x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	static int64_t x52 = -5634469644753LL;
	int32_t t12 = -377141;

	t12 = (((x49&x50)+x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MAX;
	int64_t x56 = -1LL;
	static int32_t t13 = -1573652;

	t13 = (((x53&x54)+x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 0U;
	int64_t x60 = -1LL;

	t14 = (((x57&x58)+x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	volatile uint64_t x62 = 20442LLU;
	int8_t x63 = INT8_MIN;
	volatile int32_t t15 = 639085;

	t15 = (((x61&x62)+x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 82U;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	volatile int8_t x68 = -1;

	t16 = (((x65&x66)+x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	static int8_t x72 = 0;
	int32_t t17 = -2023674;

	t17 = (((x69&x70)+x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MIN;
	int32_t x76 = -462345;
	int32_t t18 = -172241208;

	t18 = (((x73&x74)+x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = -422;
	int64_t x79 = -2188657LL;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 20491730;

	t19 = (((x77&x78)+x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	int32_t x82 = -1;
	volatile int32_t t20 = 3716;

	t20 = (((x81&x82)+x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 1388925238LL;
	uint32_t x86 = 1572U;
	static int16_t x87 = 14;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 43906235;

	t21 = (((x85&x86)+x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 270998738547691589LL;
	int32_t x90 = INT32_MIN;
	volatile int16_t x91 = -47;
	volatile int32_t x92 = -1;
	static volatile int32_t t22 = 383901;

	t22 = (((x89&x90)+x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 76U;
	volatile int64_t x98 = INT64_MIN;
	static int64_t x100 = INT64_MIN;
	static int32_t t23 = -173;

	t23 = (((x97&x98)+x99)<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 10U;
	volatile int8_t x102 = INT8_MAX;
	int32_t x103 = -839;
	static int64_t x104 = INT64_MAX;
	int32_t t24 = -16;

	t24 = (((x101&x102)+x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x105 = 2U;
	static int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	volatile int32_t t25 = 0;

	t25 = (((x105&x106)+x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 56LLU;
	uint16_t x112 = UINT16_MAX;

	t26 = (((x109&x110)+x111)<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x114 = 333U;
	int8_t x115 = -26;
	static int64_t x116 = -1LL;
	volatile int32_t t27 = 16292;

	t27 = (((x113&x114)+x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MIN;
	uint8_t x119 = 3U;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t28 = 113414007;

	t28 = (((x117&x118)+x119)<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 11;
	int16_t x123 = 11020;
	int8_t x124 = INT8_MIN;

	t29 = (((x121&x122)+x123)<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = 1613166LL;
	volatile int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int32_t t30 = -1;

	t30 = (((x125&x126)+x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x130 = -1LL;
	volatile int8_t x132 = 45;
	int32_t t31 = -21943;

	t31 = (((x129&x130)+x131)<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x136 = INT8_MIN;
	int32_t t32 = 11;

	t32 = (((x133&x134)+x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x138 = 33U;
	static int64_t x139 = -3694490602128LL;
	int8_t x140 = -5;
	int32_t t33 = 377349;

	t33 = (((x137&x138)+x139)<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = -8;
	uint8_t x144 = UINT8_MAX;
	static int32_t t34 = -1;

	t34 = (((x141&x142)+x143)<x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 1LLU;
	int32_t x146 = -1;
	uint8_t x147 = 18U;
	static volatile uint32_t x148 = 3088U;
	volatile int32_t t35 = 1559;

	t35 = (((x145&x146)+x147)<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = 3LL;

	t36 = (((x149&x150)+x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 8840LLU;
	int8_t x154 = -48;
	uint32_t x156 = UINT32_MAX;

	t37 = (((x153&x154)+x155)<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x159 = 5U;
	int64_t x160 = INT64_MIN;
	int32_t t38 = 568;

	t38 = (((x157&x158)+x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	int16_t x163 = -1;
	uint16_t x164 = 0U;
	volatile int32_t t39 = -18;

	t39 = (((x161&x162)+x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x166 = INT16_MIN;
	static uint8_t x168 = 1U;

	t40 = (((x165&x166)+x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x169 = 107U;
	uint64_t x170 = 2190298600398541268LLU;
	int16_t x171 = INT16_MAX;
	volatile int32_t t41 = 0;

	t41 = (((x169&x170)+x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 5;
	int8_t x174 = 57;
	uint64_t x175 = 34117820223916LLU;
	static int64_t x176 = INT64_MIN;
	static volatile int32_t t42 = 691754;

	t42 = (((x173&x174)+x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MIN;
	volatile int16_t x179 = INT16_MIN;
	static uint8_t x180 = 44U;

	t43 = (((x177&x178)+x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = -1LL;
	int64_t x182 = -321839423LL;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t44 = -22;

	t44 = (((x181&x182)+x183)<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = 1;
	static int16_t x186 = -1;
	volatile int32_t t45 = -11315352;

	t45 = (((x185&x186)+x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x195 = INT64_MIN;
	static uint16_t x196 = 0U;

	t46 = (((x193&x194)+x195)<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x198 = 743533LLU;
	static uint64_t x199 = 35933447960LLU;
	volatile int32_t t47 = -918386845;

	t47 = (((x197&x198)+x199)<x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -313;
	uint32_t x203 = 7U;
	int64_t x204 = INT64_MIN;
	static volatile int32_t t48 = -173;

	t48 = (((x201&x202)+x203)<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = 198627LLU;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = -34;

	t49 = (((x205&x206)+x207)<x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = 3344725547437184LL;
	uint64_t x210 = UINT64_MAX;
	static uint8_t x211 = UINT8_MAX;
	int32_t t50 = 182851058;

	t50 = (((x209&x210)+x211)<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = 11991;
	uint32_t x215 = 52U;
	int16_t x216 = -15;
	static int32_t t51 = 6502;

	t51 = (((x213&x214)+x215)<x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = UINT32_MAX;
	static volatile uint64_t x219 = 147317421005622010LLU;
	int8_t x220 = INT8_MIN;

	t52 = (((x217&x218)+x219)<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -55LL;
	static int16_t x222 = -1;
	static volatile int8_t x223 = 27;
	int32_t x224 = INT32_MIN;
	volatile int32_t t53 = -16099;

	t53 = (((x221&x222)+x223)<x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x225 = 9U;
	int16_t x226 = 150;
	int64_t x228 = -710415723348409485LL;
	int32_t t54 = -23761;

	t54 = (((x225&x226)+x227)<x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int32_t x230 = 1;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 8983U;

	t55 = (((x229&x230)+x231)<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = 82U;
	int16_t x235 = INT16_MIN;
	static int32_t t56 = 9916735;

	t56 = (((x233&x234)+x235)<x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -118235LL;
	uint16_t x238 = UINT16_MAX;
	uint64_t x239 = 596854668428244LLU;
	int64_t x240 = -13867944929LL;

	t57 = (((x237&x238)+x239)<x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 2U;
	uint8_t x242 = 1U;
	int16_t x243 = -1;
	uint64_t x244 = 33115519LLU;
	int32_t t58 = 144889;

	t58 = (((x241&x242)+x243)<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x245 = 11706;
	volatile int16_t x248 = INT16_MAX;
	int32_t t59 = 101163;

	t59 = (((x245&x246)+x247)<x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MIN;
	int16_t x251 = INT16_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t60 = -61209;

	t60 = (((x249&x250)+x251)<x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MIN;
	static int16_t x255 = -1;
	int64_t x256 = -1LL;

	t61 = (((x253&x254)+x255)<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = 27;
	int8_t x262 = INT8_MAX;
	int64_t x263 = INT64_MIN;
	static volatile int32_t t62 = -1;

	t62 = (((x261&x262)+x263)<x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = 265857483922289LL;
	uint8_t x267 = UINT8_MAX;
	static uint32_t x268 = 175413562U;

	t63 = (((x265&x266)+x267)<x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x269 = 32543308LLU;
	int16_t x270 = -1;
	int16_t x272 = INT16_MIN;

	t64 = (((x269&x270)+x271)<x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -1LL;
	int32_t x275 = -1;
	int64_t x276 = -1LL;
	volatile int32_t t65 = -27;

	t65 = (((x273&x274)+x275)<x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 0U;
	static int64_t x278 = INT64_MAX;
	static uint8_t x279 = 99U;
	int32_t x280 = INT32_MIN;
	int32_t t66 = 337322600;

	t66 = (((x277&x278)+x279)<x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x282 = 56;
	int8_t x283 = -3;
	volatile int32_t t67 = -190691;

	t67 = (((x281&x282)+x283)<x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = 428LLU;
	static volatile int64_t x286 = -1LL;
	int64_t x287 = INT64_MIN;
	volatile int32_t t68 = -2882;

	t68 = (((x285&x286)+x287)<x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = 498;
	uint32_t x291 = 16U;
	int64_t x292 = -24LL;
	static int32_t t69 = -1954;

	t69 = (((x289&x290)+x291)<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x294 = -3305;
	static uint64_t x295 = 886LLU;
	int64_t x296 = -273509903758LL;
	volatile int32_t t70 = -402;

	t70 = (((x293&x294)+x295)<x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x298 = INT64_MIN;
	static int32_t x300 = INT32_MIN;
	static int32_t t71 = 34918357;

	t71 = (((x297&x298)+x299)<x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x301 = 872LL;
	int32_t x302 = -8166;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = -426;
	int32_t t72 = -8887;

	t72 = (((x301&x302)+x303)<x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = UINT64_MAX;
	uint32_t x307 = 57296U;
	uint64_t x308 = 105227931256LLU;

	t73 = (((x305&x306)+x307)<x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x309 = 459820762071687LLU;
	int32_t x310 = INT32_MIN;
	uint8_t x312 = 2U;

	t74 = (((x309&x310)+x311)<x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	static int32_t t75 = -365;

	t75 = (((x313&x314)+x315)<x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x318 = -11069723;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 20027U;
	volatile int32_t t76 = -851062;

	t76 = (((x317&x318)+x319)<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = 227101LLU;
	int16_t x322 = INT16_MAX;
	uint8_t x324 = UINT8_MAX;
	int32_t t77 = 135324903;

	t77 = (((x321&x322)+x323)<x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MIN;
	uint32_t x326 = 23307619U;
	volatile int16_t x327 = -3764;
	int64_t x328 = -1LL;
	int32_t t78 = 190539;

	t78 = (((x325&x326)+x327)<x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x329 = 22475492LLU;
	int16_t x330 = INT16_MAX;
	int32_t t79 = 189;

	t79 = (((x329&x330)+x331)<x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	static volatile uint64_t x335 = UINT64_MAX;

	t80 = (((x333&x334)+x335)<x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = 990226129469540LL;
	int32_t x342 = -1;
	volatile uint8_t x343 = 2U;
	int8_t x344 = INT8_MIN;
	volatile int32_t t81 = 31;

	t81 = (((x341&x342)+x343)<x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 31049U;
	volatile int32_t x350 = -1;
	int32_t x351 = -184003;
	static int8_t x352 = -8;
	static volatile int32_t t82 = -7565;

	t82 = (((x349&x350)+x351)<x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = -172336;
	int64_t x355 = INT64_MIN;
	static uint32_t x356 = 236654287U;
	static int32_t t83 = 46985;

	t83 = (((x353&x354)+x355)<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = 66031261218782249LLU;
	int64_t x360 = INT64_MIN;
	int32_t t84 = 21233;

	t84 = (((x357&x358)+x359)<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x361 = INT16_MAX;
	int8_t x362 = 49;
	uint8_t x364 = UINT8_MAX;
	int32_t t85 = 34496092;

	t85 = (((x361&x362)+x363)<x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x367 = 120586;
	int8_t x368 = INT8_MAX;
	int32_t t86 = -63183;

	t86 = (((x365&x366)+x367)<x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x369 = -2;
	int64_t x370 = 1LL;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 5U;
	volatile int32_t t87 = -5;

	t87 = (((x369&x370)+x371)<x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x373 = 0U;
	int64_t x375 = -1LL;
	static int16_t x376 = -1815;
	int32_t t88 = -2;

	t88 = (((x373&x374)+x375)<x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x387 = UINT16_MAX;
	volatile int16_t x388 = 3;
	volatile int32_t t89 = 1197866;

	t89 = (((x385&x386)+x387)<x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = 4005U;
	uint8_t x390 = 0U;
	static int16_t x392 = INT16_MAX;
	static int32_t t90 = 106575900;

	t90 = (((x389&x390)+x391)<x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 22314426LLU;
	static int32_t x400 = -87807062;
	volatile int32_t t91 = -1022029;

	t91 = (((x397&x398)+x399)<x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = 11;
	int16_t x402 = INT16_MIN;
	volatile int32_t t92 = 118;

	t92 = (((x401&x402)+x403)<x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	static int64_t x407 = 5998725320784LL;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t93 = -73908;

	t93 = (((x405&x406)+x407)<x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = UINT16_MAX;
	uint32_t x411 = UINT32_MAX;
	int32_t t94 = 141843042;

	t94 = (((x409&x410)+x411)<x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x413 = INT16_MAX;
	int64_t x414 = 241004LL;
	int64_t x415 = -1LL;
	uint64_t x416 = 330560LLU;

	t95 = (((x413&x414)+x415)<x416);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = 583;
	static int32_t x418 = INT32_MIN;
	static uint8_t x420 = UINT8_MAX;
	volatile int32_t t96 = -13075821;

	t96 = (((x417&x418)+x419)<x420);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x422 = 3435U;
	uint32_t x423 = UINT32_MAX;

	t97 = (((x421&x422)+x423)<x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = UINT16_MAX;
	volatile uint8_t x427 = 7U;
	int16_t x428 = -70;
	volatile int32_t t98 = 231;

	t98 = (((x425&x426)+x427)<x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x430 = UINT64_MAX;
	int64_t x431 = INT64_MAX;
	int64_t x432 = -1LL;
	int32_t t99 = -3;

	t99 = (((x429&x430)+x431)<x432);

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

