#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int16_t x10 = -375;
int64_t x14 = INT64_MIN;
uint64_t x15 = 61645010955989668LLU;
uint8_t x19 = UINT8_MAX;
volatile int16_t x20 = -1;
volatile int32_t t5 = 52411;
volatile uint8_t x29 = 5U;
static uint64_t x30 = 139471296LLU;
int8_t x33 = -1;
uint16_t x34 = UINT16_MAX;
uint16_t x36 = 6084U;
int16_t x38 = -1;
int16_t x49 = -13;
static uint8_t x50 = 0U;
uint64_t x51 = 41LLU;
static uint8_t x56 = 3U;
int16_t x59 = INT16_MIN;
static int64_t x60 = -145026388LL;
uint16_t x63 = UINT16_MAX;
int8_t x70 = 11;
int16_t x71 = INT16_MAX;
static int8_t x72 = 1;
uint16_t x78 = 28U;
int32_t x80 = -1;
volatile int16_t x92 = -1;
static uint8_t x94 = 4U;
int64_t x99 = INT64_MIN;
int64_t x110 = INT64_MAX;
int16_t x115 = INT16_MIN;
int16_t x117 = -1;
int16_t x120 = INT16_MIN;
int16_t x139 = INT16_MAX;
static volatile uint8_t x152 = UINT8_MAX;
int32_t t37 = 2;
uint16_t x153 = 12971U;
volatile uint64_t t39 = 4469LLU;
uint16_t x161 = 4562U;
uint8_t x163 = 0U;
int32_t x168 = INT32_MIN;
volatile int32_t t42 = 105439;
int32_t x173 = INT32_MAX;
int8_t x176 = INT8_MAX;
int32_t t43 = 200279183;
uint16_t x179 = 12242U;
static uint64_t x182 = UINT64_MAX;
static volatile int16_t x188 = INT16_MIN;
int64_t x195 = INT64_MIN;
int16_t x198 = 1;
uint64_t x204 = 1853665091512300LLU;
int64_t x205 = -1LL;
int32_t x206 = INT32_MIN;
static uint16_t x214 = 58U;
uint32_t x218 = 3008800U;
static int8_t x219 = 62;
int32_t t54 = -5098287;
static uint8_t x224 = 11U;
int8_t x238 = INT8_MIN;
int32_t t61 = -2606;
static int8_t x249 = 0;
volatile int32_t t62 = 0;
uint64_t x253 = 1281336357LLU;
uint8_t x263 = UINT8_MAX;
uint64_t t65 = 5456431585LLU;
volatile int32_t t66 = -577209188;
static volatile int64_t x269 = INT64_MAX;
uint32_t x273 = UINT32_MAX;
volatile uint32_t x288 = 618901U;
uint32_t t71 = 61455U;
int16_t x294 = INT16_MIN;
volatile uint32_t x297 = UINT32_MAX;
volatile int8_t x300 = INT8_MIN;
static volatile int32_t t74 = 402100;
static int16_t x305 = INT16_MIN;
uint64_t x308 = UINT64_MAX;
uint64_t t76 = 1338680426599LLU;
int32_t x312 = INT32_MIN;
int8_t x315 = INT8_MIN;
int64_t x320 = INT64_MIN;
int16_t x326 = -1;
int64_t x327 = INT64_MIN;
int64_t x332 = INT64_MIN;
volatile int32_t t83 = -3;
int64_t x337 = -656575LL;
int64_t x343 = -1LL;
uint32_t x348 = 0U;
static volatile uint16_t x350 = 3190U;
static uint8_t x351 = UINT8_MAX;
int16_t x353 = INT16_MAX;
int32_t x357 = -1;
int8_t x361 = INT8_MAX;
volatile int64_t x363 = -1LL;
int32_t x367 = INT32_MAX;
volatile int8_t x369 = INT8_MAX;
int16_t x372 = 1;
uint32_t x379 = 54143620U;
int8_t x383 = -1;
volatile int64_t x384 = -93449133287177293LL;
static volatile int64_t t95 = 13283521871229218LL;
static volatile int32_t t96 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = -113596046LL;
	int64_t x3 = -625761860998126LL;
	uint8_t x4 = 0U;
	volatile int32_t t0 = 23169695;

	t0 = (((x1&x2)<x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -164;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 2374892LLU;
	uint64_t t1 = 13860726586621622LLU;

	t1 = (((x5&x6)<x7)*x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1LLU;
	int32_t x11 = -1;
	int8_t x12 = -53;
	volatile int32_t t2 = -355;

	t2 = (((x9&x10)<x11)*x12);

	if (t2 != -53) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -114;
	int8_t x16 = -1;
	int32_t t3 = -1881614;

	t3 = (((x13&x14)<x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x18 = -1;
	static int32_t t4 = -1833;

	t4 = (((x17&x18)<x19)*x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	volatile uint64_t x22 = UINT64_MAX;
	volatile uint8_t x23 = 24U;
	static volatile uint16_t x24 = UINT16_MAX;

	t5 = (((x21&x22)<x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int64_t x26 = 49807LL;
	static int64_t x27 = INT64_MIN;
	volatile uint16_t x28 = 24U;
	volatile int32_t t6 = -43483;

	t6 = (((x25&x26)<x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = INT32_MIN;
	static uint32_t x32 = UINT32_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (((x29&x30)<x31)*x32);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = INT64_MIN;
	int32_t t8 = 3073185;

	t8 = (((x33&x34)<x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	static uint64_t x39 = 7LLU;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = INT32_MIN;

	t9 = (((x37&x38)<x39)*x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 41932U;
	int16_t x42 = -1;
	static int64_t x43 = INT64_MIN;
	int8_t x44 = -1;
	int32_t t10 = -171433;

	t10 = (((x41&x42)<x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 56579LLU;
	volatile uint16_t x46 = 5252U;
	int8_t x47 = -12;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -3633;

	t11 = (((x45&x46)<x47)*x48);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x52 = UINT16_MAX;
	static int32_t t12 = -7;

	t12 = (((x49&x50)<x51)*x52);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint8_t x54 = 1U;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = 0;

	t13 = (((x53&x54)<x55)*x56);

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	volatile int64_t x58 = INT64_MIN;
	volatile int64_t t14 = 15081246LL;

	t14 = (((x57&x58)<x59)*x60);

	if (t14 != -145026388LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 2;
	int16_t x62 = -1;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -58279;

	t15 = (((x61&x62)<x63)*x64);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int8_t x66 = INT8_MAX;
	uint16_t x67 = 10447U;
	int64_t x68 = 963938963682237LL;
	volatile int64_t t16 = 77901848701369153LL;

	t16 = (((x65&x66)<x67)*x68);

	if (t16 != 963938963682237LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int32_t t17 = -1076;

	t17 = (((x69&x70)<x71)*x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	static int16_t x74 = INT16_MIN;
	volatile int64_t x75 = -1LL;
	static int8_t x76 = -1;
	int32_t t18 = -1019661535;

	t18 = (((x73&x74)<x75)*x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	volatile int32_t x79 = INT32_MAX;
	volatile int32_t t19 = 1;

	t19 = (((x77&x78)<x79)*x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x82 = 0;
	uint16_t x83 = 2U;
	uint32_t x84 = 40896163U;
	uint32_t t20 = 599U;

	t20 = (((x81&x82)<x83)*x84);

	if (t20 != 40896163U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 20U;
	volatile int64_t x86 = 132732734235513628LL;
	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 3;

	t21 = (((x85&x86)<x87)*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 644U;
	uint16_t x90 = 21397U;
	int32_t x91 = -472397601;
	volatile int32_t t22 = 11;

	t22 = (((x89&x90)<x91)*x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x95 = 253U;
	static uint16_t x96 = 16622U;
	static int32_t t23 = 78;

	t23 = (((x93&x94)<x95)*x96);

	if (t23 != 16622) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 0;
	uint32_t x98 = 1092159055U;
	int8_t x100 = -1;
	volatile int32_t t24 = 1210;

	t24 = (((x97&x98)<x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 59974283U;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 4296;

	t25 = (((x101&x102)<x103)*x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	volatile int32_t x106 = INT32_MAX;
	volatile uint16_t x107 = UINT16_MAX;
	uint64_t x108 = UINT64_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = (((x105&x106)<x107)*x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 210U;
	int8_t x111 = INT8_MAX;
	volatile uint64_t x112 = 57055896LLU;
	volatile uint64_t t27 = 943322786LLU;

	t27 = (((x109&x110)<x111)*x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static uint16_t x114 = 72U;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t28 = 251685LLU;

	t28 = (((x113&x114)<x115)*x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = INT32_MIN;
	static uint32_t x119 = 24U;
	static int32_t t29 = -30151959;

	t29 = (((x117&x118)<x119)*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	volatile uint16_t x122 = 1U;
	static uint64_t x123 = 1255795889143LLU;
	uint16_t x124 = 12U;
	int32_t t30 = -7451646;

	t30 = (((x121&x122)<x123)*x124);

	if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 4593770964656126615LL;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MAX;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 259603LL;

	t31 = (((x125&x126)<x127)*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -313LL;
	static volatile int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	static int64_t x132 = INT64_MAX;
	int64_t t32 = INT64_MAX;

	t32 = (((x129&x130)<x131)*x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	uint64_t x134 = 1LLU;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 1;

	t33 = (((x133&x134)<x135)*x136);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -50;
	static int16_t x138 = INT16_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = (((x137&x138)<x139)*x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 31;
	uint8_t x142 = 34U;
	static int64_t x143 = INT64_MIN;
	int16_t x144 = 15659;
	volatile int32_t t35 = -1351;

	t35 = (((x141&x142)<x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x146 = -1LL;
	static int32_t x147 = -1;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 3;

	t36 = (((x145&x146)<x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;

	t37 = (((x149&x150)<x151)*x152);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 281762U;
	int8_t x155 = 16;
	uint64_t x156 = 1LLU;
	static uint64_t t38 = 10886018134344554LLU;

	t38 = (((x153&x154)<x155)*x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	int64_t x158 = -665604638021088LL;
	volatile int8_t x159 = INT8_MIN;
	uint64_t x160 = 190803424835LLU;

	t39 = (((x157&x158)<x159)*x160);

	if (t39 != 190803424835LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = UINT8_MAX;
	static uint64_t x164 = UINT64_MAX;
	static uint64_t t40 = 32838656LLU;

	t40 = (((x161&x162)<x163)*x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 2015517507279LLU;
	int64_t x166 = INT64_MAX;
	int64_t x167 = -69285812387211LL;
	static volatile int32_t t41 = INT32_MIN;

	t41 = (((x165&x166)<x167)*x168);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MAX;
	uint16_t x171 = UINT16_MAX;
	volatile uint16_t x172 = 1208U;

	t42 = (((x169&x170)<x171)*x172);

	if (t42 != 1208) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;

	t43 = (((x173&x174)<x175)*x176);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 9002989235LLU;
	static int32_t x178 = 3;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (((x177&x178)<x179)*x180);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -178;
	int16_t x183 = INT16_MAX;
	int16_t x184 = 89;
	volatile int32_t t45 = 72208610;

	t45 = (((x181&x182)<x183)*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = -1LL;
	static int8_t x187 = -1;
	int32_t t46 = 1;

	t46 = (((x185&x186)<x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 51U;
	static uint64_t x190 = 3669511883LLU;
	int16_t x191 = -1;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -871832;

	t47 = (((x189&x190)<x191)*x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MIN;
	int64_t x196 = -73594502396560098LL;
	static volatile int64_t t48 = 55497227603049LL;

	t48 = (((x193&x194)<x195)*x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 22U;
	uint8_t x199 = 28U;
	static int8_t x200 = -1;
	static volatile int32_t t49 = 0;

	t49 = (((x197&x198)<x199)*x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MIN;
	volatile int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	volatile uint64_t t50 = 98710LLU;

	t50 = (((x201&x202)<x203)*x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x207 = 145036355337928LLU;
	int8_t x208 = INT8_MAX;
	int32_t t51 = 400935;

	t51 = (((x205&x206)<x207)*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MAX;
	uint8_t x210 = 9U;
	volatile int32_t x211 = INT32_MIN;
	int32_t x212 = -39;
	volatile int32_t t52 = 0;

	t52 = (((x209&x210)<x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 35273;
	volatile int64_t x215 = INT64_MIN;
	volatile uint32_t x216 = 1624U;
	uint32_t t53 = 3764680U;

	t53 = (((x213&x214)<x215)*x216);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile uint16_t x220 = 40U;

	t54 = (((x217&x218)<x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MIN;
	uint32_t x223 = 344544U;
	int32_t t55 = 502853;

	t55 = (((x221&x222)<x223)*x224);

	if (t55 != 11) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 9;
	int8_t x226 = INT8_MIN;
	volatile uint32_t x227 = UINT32_MAX;
	volatile int64_t x228 = INT64_MAX;
	int64_t t56 = INT64_MAX;

	t56 = (((x225&x226)<x227)*x228);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = 185680;
	uint8_t x231 = 7U;
	static uint64_t x232 = 307LLU;
	uint64_t t57 = 906810LLU;

	t57 = (((x229&x230)<x231)*x232);

	if (t57 != 307LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -1;
	int32_t x234 = INT32_MAX;
	int32_t x235 = INT32_MIN;
	int16_t x236 = -1;
	volatile int32_t t58 = 1359777;

	t58 = (((x233&x234)<x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x239 = 44681560U;
	int64_t x240 = -1LL;
	int64_t t59 = -10003764834LL;

	t59 = (((x237&x238)<x239)*x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -1;
	uint32_t x243 = 247U;
	int8_t x244 = INT8_MIN;
	static int32_t t60 = -252086;

	t60 = (((x241&x242)<x243)*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MAX;
	volatile int64_t x246 = INT64_MIN;
	uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 1U;

	t61 = (((x245&x246)<x247)*x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 14064075U;
	int16_t x251 = -1;
	int16_t x252 = 2;

	t62 = (((x249&x250)<x251)*x252);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x254 = 234U;
	int8_t x255 = 0;
	static uint32_t x256 = 22005U;
	volatile uint32_t t63 = 367727245U;

	t63 = (((x253&x254)<x255)*x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	static int16_t x258 = INT16_MAX;
	int64_t x259 = -335992LL;
	int64_t x260 = 150738380909971160LL;
	volatile int64_t t64 = 209348536994544264LL;

	t64 = (((x257&x258)<x259)*x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 2047622431U;
	volatile uint64_t x262 = UINT64_MAX;
	volatile uint64_t x264 = 111414LLU;

	t65 = (((x261&x262)<x263)*x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -1;
	int32_t x266 = 98559821;
	int32_t x267 = INT32_MAX;
	static int16_t x268 = INT16_MIN;

	t66 = (((x265&x266)<x267)*x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -261056194;

	t67 = (((x269&x270)<x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = -1LL;
	int16_t x276 = INT16_MAX;
	int32_t t68 = 6223394;

	t68 = (((x273&x274)<x275)*x276);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1815178985045829657LL;
	uint16_t x278 = 332U;
	static int64_t x279 = INT64_MAX;
	volatile uint64_t x280 = 29542195506060LLU;
	static uint64_t t69 = 338LLU;

	t69 = (((x277&x278)<x279)*x280);

	if (t69 != 29542195506060LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 107U;
	uint16_t x282 = 743U;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = 0;

	t70 = (((x281&x282)<x283)*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 106U;
	int64_t x286 = 256304LL;
	volatile int32_t x287 = -1;

	t71 = (((x285&x286)<x287)*x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 916LL;
	int8_t x290 = -1;
	volatile int16_t x291 = 5093;
	volatile uint16_t x292 = 6672U;
	static int32_t t72 = -257;

	t72 = (((x289&x290)<x291)*x292);

	if (t72 != 6672) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 0;
	int32_t x295 = INT32_MAX;
	int64_t x296 = -1LL;
	static int64_t t73 = -50779433109964LL;

	t73 = (((x293&x294)<x295)*x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = 1;
	int32_t x299 = INT32_MIN;

	t74 = (((x297&x298)<x299)*x300);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 6U;
	int64_t x302 = INT64_MIN;
	volatile int64_t x303 = -1LL;
	uint32_t x304 = 246U;
	uint32_t t75 = 225922U;

	t75 = (((x301&x302)<x303)*x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = 13194U;
	int16_t x307 = -1;

	t76 = (((x305&x306)<x307)*x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MAX;
	int32_t x310 = -1455;
	int64_t x311 = INT64_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = (((x309&x310)<x311)*x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = 56U;
	uint64_t x314 = 3672316415058165LLU;
	uint64_t x316 = 10494LLU;
	uint64_t t78 = 161439103LLU;

	t78 = (((x313&x314)<x315)*x316);

	if (t78 != 10494LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int64_t x318 = -481510029222LL;
	static uint64_t x319 = UINT64_MAX;
	int64_t t79 = INT64_MIN;

	t79 = (((x317&x318)<x319)*x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MAX;
	static int16_t x322 = -6562;
	uint32_t x323 = 1360U;
	int8_t x324 = 0;
	int32_t t80 = -4613116;

	t80 = (((x321&x322)<x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 5;
	static int32_t x328 = 27427827;
	volatile int32_t t81 = 4399;

	t81 = (((x325&x326)<x327)*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -1LL;
	volatile int64_t t82 = INT64_MIN;

	t82 = (((x329&x330)<x331)*x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int8_t x334 = -9;
	uint16_t x335 = 37U;
	int16_t x336 = -1;

	t83 = (((x333&x334)<x335)*x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = -361;
	volatile int32_t x339 = -10496;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = (((x337&x338)<x339)*x340);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 5225683U;
	int8_t x342 = INT8_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = -35084;

	t85 = (((x341&x342)<x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int32_t x346 = INT32_MIN;
	volatile uint16_t x347 = 41U;
	volatile uint32_t t86 = 47508U;

	t86 = (((x345&x346)<x347)*x348);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -364333;
	static int32_t x352 = INT32_MAX;
	volatile int32_t t87 = INT32_MAX;

	t87 = (((x349&x350)<x351)*x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 3059968U;
	static uint64_t x355 = UINT64_MAX;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (((x353&x354)<x355)*x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MIN;
	volatile uint32_t x359 = 635079U;
	uint8_t x360 = 89U;
	volatile int32_t t89 = 349623067;

	t89 = (((x357&x358)<x359)*x360);

	if (t89 != 89) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = UINT32_MAX;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = 39585050662667LL;

	t90 = (((x361&x362)<x363)*x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	int8_t x366 = INT8_MAX;
	static uint16_t x368 = 12U;
	static int32_t t91 = 17880356;

	t91 = (((x365&x366)<x367)*x368);

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 3223U;
	volatile int32_t t92 = 1127;

	t92 = (((x369&x370)<x371)*x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -94LL;
	uint16_t x374 = 12U;
	static int8_t x375 = -1;
	volatile int8_t x376 = -1;
	int32_t t93 = -7702526;

	t93 = (((x373&x374)<x375)*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 0U;
	volatile uint64_t x380 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = (((x377&x378)<x379)*x380);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	volatile int32_t x382 = -53762640;

	t95 = (((x381&x382)<x383)*x384);

	if (t95 != -93449133287177293LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	static uint16_t x386 = UINT16_MAX;
	volatile uint64_t x387 = 3448562991109LLU;
	static int32_t x388 = INT32_MIN;

	t96 = (((x385&x386)<x387)*x388);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = UINT32_MAX;
	uint64_t x391 = 1456993LLU;
	int16_t x392 = 3;
	int32_t t97 = -36;

	t97 = (((x389&x390)<x391)*x392);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	int64_t x394 = -1LL;
	uint32_t x395 = 1584893U;
	int16_t x396 = -1;
	int32_t t98 = -18660;

	t98 = (((x393&x394)<x395)*x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 38U;
	volatile uint32_t x398 = 1295U;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -1;

	t99 = (((x397&x398)<x399)*x400);

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

