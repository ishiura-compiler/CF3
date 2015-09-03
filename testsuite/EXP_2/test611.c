#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
static int32_t x10 = 119;
uint64_t t3 = 253475191397LLU;
volatile uint64_t x28 = 1035524189222LLU;
static int16_t x30 = INT16_MIN;
uint64_t x32 = 458884LLU;
volatile int32_t t7 = 40993849;
uint8_t x43 = 4U;
int8_t x46 = 1;
static int64_t x49 = -1LL;
uint32_t x54 = 3U;
uint64_t x55 = UINT64_MAX;
static uint8_t x58 = UINT8_MAX;
int32_t x59 = INT32_MIN;
static uint64_t x65 = UINT64_MAX;
static int64_t x67 = 3LL;
int8_t x71 = -1;
uint64_t x86 = UINT64_MAX;
static uint64_t x87 = 53151981LLU;
uint16_t x91 = 270U;
static uint8_t x93 = 38U;
int8_t x95 = INT8_MIN;
int64_t x97 = INT64_MAX;
int64_t x99 = -1LL;
int32_t t23 = 81969;
volatile int16_t x103 = -1;
int32_t x119 = INT32_MAX;
int16_t x124 = INT16_MAX;
int16_t x128 = INT16_MIN;
int16_t x136 = 34;
uint64_t x141 = UINT64_MAX;
static uint32_t x155 = UINT32_MAX;
volatile int32_t t38 = -6;
int64_t x169 = 23853LL;
uint16_t x176 = UINT16_MAX;
volatile int16_t x177 = -1;
static int32_t x204 = -1;
int64_t x207 = INT64_MAX;
int16_t x214 = -2133;
volatile int32_t t51 = 2372;
int32_t x223 = -1410;
volatile uint32_t x229 = 12119212U;
volatile int8_t x230 = INT8_MIN;
volatile int64_t x235 = -1LL;
static int32_t x238 = INT32_MAX;
static int8_t x241 = -11;
uint64_t x243 = 7604192LLU;
int16_t x244 = -1;
int64_t x248 = INT64_MIN;
int64_t x252 = INT64_MIN;
int16_t x258 = 28;
int8_t x262 = INT8_MIN;
volatile uint16_t x266 = 8145U;
int8_t x269 = INT8_MIN;
volatile int64_t x274 = -1LL;
int8_t x284 = 1;
uint64_t x286 = UINT64_MAX;
static int32_t x289 = -1016005365;
volatile int32_t x294 = -318;
uint64_t x303 = UINT64_MAX;
int64_t x307 = -1473LL;
int64_t x312 = INT64_MIN;
int64_t t74 = INT64_MIN;
volatile int16_t x313 = INT16_MIN;
int32_t t75 = 7;
int16_t x317 = INT16_MIN;
uint8_t x320 = UINT8_MAX;
volatile int64_t x326 = INT64_MAX;
uint64_t x327 = 10569615487054339LLU;
int16_t x329 = -3;
int16_t x330 = INT16_MAX;
static uint32_t x332 = 1468795852U;
uint32_t t79 = 516917116U;
uint16_t x334 = 4U;
int32_t x341 = -1;
int8_t x345 = INT8_MIN;
volatile int32_t t83 = 0;
volatile int32_t t84 = 1255;
volatile uint8_t x354 = UINT8_MAX;
uint8_t x360 = UINT8_MAX;
int32_t t86 = -3186808;
static int8_t x373 = -17;
volatile uint64_t x375 = 127LLU;
volatile int8_t x376 = -1;
uint64_t x381 = 25LLU;
volatile int64_t x382 = INT64_MIN;
volatile int32_t x383 = INT32_MIN;
volatile int32_t t91 = -953;
int32_t t92 = 254154;
int8_t x400 = INT8_MAX;
volatile int32_t t94 = 108;
uint16_t x405 = UINT16_MAX;
static uint8_t x407 = UINT8_MAX;
volatile int32_t t97 = -1;
uint8_t x413 = 9U;
int8_t x414 = 13;
uint8_t x418 = 43U;


void f0(void) {
	uint32_t x1 = 265U;
	int32_t x2 = -689219653;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = INT32_MAX;

	t0 = ((x1==(x2/x3))^x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint16_t x6 = 15U;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 7555070;

	t1 = ((x5==(x6/x7))^x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 9520;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = INT32_MAX;

	t2 = ((x9==(x10/x11))^x12);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	static uint8_t x18 = UINT8_MAX;
	static int8_t x19 = 2;
	static uint64_t x20 = 1318297927989483338LLU;

	t3 = ((x17==(x18/x19))^x20);

	if (t3 != 1318297927989483338LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 5927553U;
	static int64_t x24 = 198702LL;
	int64_t t4 = 2446356327946LL;

	t4 = ((x21==(x22/x23))^x24);

	if (t4 != 198702LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MIN;
	uint64_t t5 = 4LLU;

	t5 = ((x25==(x26/x27))^x28);

	if (t5 != 1035524189222LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	static volatile int8_t x31 = INT8_MIN;
	volatile uint64_t t6 = 31860979758981133LLU;

	t6 = ((x29==(x30/x31))^x32);

	if (t6 != 458884LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	int64_t x34 = INT64_MAX;
	uint64_t x35 = 46391LLU;
	volatile int16_t x36 = -1;

	t7 = ((x33==(x34/x35))^x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 452937858075642LLU;
	static volatile int32_t x38 = -5908;
	static uint64_t x39 = 24172260824239818LLU;
	int8_t x40 = -1;
	volatile int32_t t8 = 174;

	t8 = ((x37==(x38/x39))^x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = 6;
	uint16_t x44 = 4U;
	int32_t t9 = 253224538;

	t9 = ((x41==(x42/x43))^x44);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	static volatile int8_t x47 = -1;
	int32_t x48 = 63469859;
	volatile int32_t t10 = 113810771;

	t10 = ((x45==(x46/x47))^x48);

	if (t10 != 63469859) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = ((x49==(x50/x51))^x52);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = INT32_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = 129822;

	t12 = ((x53==(x54/x55))^x56);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -1092253108209247LL;
	int8_t x60 = INT8_MAX;
	int32_t t13 = 1500076;

	t13 = ((x57==(x58/x59))^x60);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 2516;
	uint64_t x62 = 5191LLU;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t14 = INT32_MIN;

	t14 = ((x61==(x62/x63))^x64);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x66 = 0U;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t15 = -125853;

	t15 = ((x65==(x66/x67))^x68);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	int64_t x72 = -21995311304272343LL;
	int64_t t16 = 398LL;

	t16 = ((x69==(x70/x71))^x72);

	if (t16 != -21995311304272343LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	int16_t x74 = -16027;
	uint8_t x75 = 14U;
	static uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x73==(x74/x75))^x76);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = 68578025529624LL;
	uint32_t x78 = 110663U;
	int16_t x79 = INT16_MIN;
	static int32_t x80 = INT32_MIN;
	int32_t t18 = INT32_MIN;

	t18 = ((x77==(x78/x79))^x80);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	static volatile int16_t x82 = INT16_MAX;
	int64_t x83 = -1LL;
	uint16_t x84 = UINT16_MAX;
	static volatile int32_t t19 = -779515851;

	t19 = ((x81==(x82/x83))^x84);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	int8_t x88 = -7;
	int32_t t20 = 16169771;

	t20 = ((x85==(x86/x87))^x88);

	if (t20 != -7) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MIN;
	uint16_t x90 = 15600U;
	int16_t x92 = 6511;
	int32_t t21 = -24578929;

	t21 = ((x89==(x90/x91))^x92);

	if (t21 != 6511) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = 0LL;
	int32_t x96 = -1;
	static int32_t t22 = -55319;

	t22 = ((x93==(x94/x95))^x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x98 = 165U;
	int32_t x100 = -1;

	t23 = ((x97==(x98/x99))^x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	volatile int16_t x102 = INT16_MIN;
	uint64_t x104 = 1049960953705913681LLU;
	volatile uint64_t t24 = 97LLU;

	t24 = ((x101==(x102/x103))^x104);

	if (t24 != 1049960953705913681LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 7380355048LLU;
	static int8_t x106 = 1;
	volatile int64_t x107 = 83992794126479LL;
	int8_t x108 = 0;
	int32_t t25 = -25268;

	t25 = ((x105==(x106/x107))^x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = -7;
	static int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t26 = -127578;

	t26 = ((x113==(x114/x115))^x116);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -11232;
	int8_t x118 = 33;
	uint32_t x120 = 112541U;
	static volatile uint32_t t27 = 7351U;

	t27 = ((x117==(x118/x119))^x120);

	if (t27 != 112541U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1681;
	int32_t x122 = INT32_MAX;
	uint16_t x123 = 35U;
	int32_t t28 = 21;

	t28 = ((x121==(x122/x123))^x124);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = 6805859;
	int8_t x126 = INT8_MIN;
	static int32_t x127 = -1;
	static int32_t t29 = 4027927;

	t29 = ((x125==(x126/x127))^x128);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = -5;
	int32_t x130 = INT32_MIN;
	volatile int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	static int32_t t30 = 49;

	t30 = ((x129==(x130/x131))^x132);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 8831968U;
	int32_t t31 = -59879004;

	t31 = ((x133==(x134/x135))^x136);

	if (t31 != 34) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = INT64_MIN;
	uint16_t x138 = 509U;
	uint16_t x139 = 1U;
	static volatile int32_t x140 = INT32_MIN;
	static volatile int32_t t32 = INT32_MIN;

	t32 = ((x137==(x138/x139))^x140);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = -1;
	volatile int32_t t33 = -36267719;

	t33 = ((x141==(x142/x143))^x144);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = UINT16_MAX;
	static uint64_t x146 = 15767421532098LLU;
	int8_t x147 = INT8_MAX;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = ((x145==(x146/x147))^x148);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x149 = 35153169466779262LL;
	static int32_t x150 = 16713;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x149==(x150/x151))^x152);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MAX;
	volatile int32_t x154 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = ((x153==(x154/x155))^x156);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	uint8_t x159 = UINT8_MAX;
	static int32_t x160 = INT32_MIN;
	int32_t t37 = INT32_MIN;

	t37 = ((x157==(x158/x159))^x160);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 1;
	int8_t x162 = INT8_MIN;
	volatile uint64_t x163 = UINT64_MAX;
	uint8_t x164 = UINT8_MAX;

	t38 = ((x161==(x162/x163))^x164);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MIN;
	uint8_t x166 = 1U;
	int16_t x167 = -3256;
	static volatile int8_t x168 = INT8_MAX;
	int32_t t39 = -9508;

	t39 = ((x165==(x166/x167))^x168);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x170 = 10773U;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = -785;
	static volatile int32_t t40 = 7746;

	t40 = ((x169==(x170/x171))^x172);

	if (t40 != -785) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = UINT32_MAX;
	static int8_t x175 = 19;
	volatile int32_t t41 = 32278257;

	t41 = ((x173==(x174/x175))^x176);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = 4832526755414278LL;
	int64_t x179 = 33782LL;
	int64_t x180 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = ((x177==(x178/x179))^x180);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 243U;
	static uint16_t x184 = 673U;
	volatile int32_t t43 = 57897285;

	t43 = ((x181==(x182/x183))^x184);

	if (t43 != 673) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 15;
	volatile int64_t x186 = 4019282LL;
	static int64_t x187 = INT64_MIN;
	uint8_t x188 = 93U;
	volatile int32_t t44 = -5308803;

	t44 = ((x185==(x186/x187))^x188);

	if (t44 != 93) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = -14;
	uint16_t x190 = 1589U;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x189==(x190/x191))^x192);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x197 = INT64_MAX;
	uint16_t x198 = 1U;
	static int32_t x199 = -1;
	volatile int64_t x200 = -681296LL;
	static volatile int64_t t46 = -124227374LL;

	t46 = ((x197==(x198/x199))^x200);

	if (t46 != -681296LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = UINT32_MAX;
	int32_t t47 = 18;

	t47 = ((x201==(x202/x203))^x204);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x205 = 4U;
	static volatile int16_t x206 = -1;
	int8_t x208 = INT8_MIN;
	volatile int32_t t48 = 255671674;

	t48 = ((x205==(x206/x207))^x208);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	int32_t x212 = -1;
	int32_t t49 = -664;

	t49 = ((x209==(x210/x211))^x212);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int64_t x216 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = ((x213==(x214/x215))^x216);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = INT64_MIN;
	int64_t x218 = -1LL;
	int64_t x219 = INT64_MAX;
	static uint16_t x220 = 815U;

	t51 = ((x217==(x218/x219))^x220);

	if (t51 != 815) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x221 = 95614813LLU;
	static uint8_t x222 = UINT8_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x221==(x222/x223))^x224);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = 62U;
	static uint64_t x227 = 435LLU;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t53 = 424884124;

	t53 = ((x225==(x226/x227))^x228);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = -6066;
	volatile int32_t t54 = 59833;

	t54 = ((x229==(x230/x231))^x232);

	if (t54 != -6066) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = 37;
	uint8_t x234 = 22U;
	int8_t x236 = INT8_MIN;
	int32_t t55 = 699118430;

	t55 = ((x233==(x234/x235))^x236);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	uint32_t x239 = 3U;
	int32_t x240 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = ((x237==(x238/x239))^x240);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x242 = 29642659LLU;
	volatile int32_t t57 = 3;

	t57 = ((x241==(x242/x243))^x244);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 51U;
	uint64_t x246 = UINT64_MAX;
	static int32_t x247 = -1;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x245==(x246/x247))^x248);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = 20;
	int16_t x250 = -1;
	int8_t x251 = -1;
	int64_t t59 = INT64_MIN;

	t59 = ((x249==(x250/x251))^x252);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	uint16_t x254 = 84U;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = 230;
	int32_t t60 = 522;

	t60 = ((x253==(x254/x255))^x256);

	if (t60 != 230) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = 432;
	uint32_t x259 = 27669U;
	uint64_t x260 = 55023410001581011LLU;
	volatile uint64_t t61 = 36005439812LLU;

	t61 = ((x257==(x258/x259))^x260);

	if (t61 != 55023410001581011LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x261 = INT16_MIN;
	int32_t x263 = -1;
	uint8_t x264 = 19U;
	static int32_t t62 = 1;

	t62 = ((x261==(x262/x263))^x264);

	if (t62 != 19) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MAX;
	int8_t x267 = -1;
	int8_t x268 = 1;
	int32_t t63 = 1;

	t63 = ((x265==(x266/x267))^x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x270 = -1;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;
	int64_t t64 = 32LL;

	t64 = ((x269==(x270/x271))^x272);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x273 = UINT16_MAX;
	static int64_t x275 = INT64_MIN;
	static volatile int32_t x276 = INT32_MIN;
	int32_t t65 = INT32_MIN;

	t65 = ((x273==(x274/x275))^x276);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x277 = 365396793622859LLU;
	uint64_t x278 = 6805LLU;
	volatile int32_t x279 = 49;
	int64_t x280 = INT64_MAX;
	int64_t t66 = INT64_MAX;

	t66 = ((x277==(x278/x279))^x280);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x281 = 5;
	int32_t x282 = -1;
	uint32_t x283 = 228U;
	volatile int32_t t67 = -19034860;

	t67 = ((x281==(x282/x283))^x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -151;
	int16_t x287 = INT16_MAX;
	int8_t x288 = 0;
	volatile int32_t t68 = 2;

	t68 = ((x285==(x286/x287))^x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = -45;
	uint32_t x291 = 1576457U;
	uint16_t x292 = 29U;
	int32_t t69 = 1;

	t69 = ((x289==(x290/x291))^x292);

	if (t69 != 29) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x293 = -1;
	volatile uint16_t x295 = 3503U;
	volatile int64_t x296 = -1LL;
	volatile int64_t t70 = 978990LL;

	t70 = ((x293==(x294/x295))^x296);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = INT32_MIN;
	volatile uint8_t x299 = UINT8_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t71 = 16174;

	t71 = ((x297==(x298/x299))^x300);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -4;
	int32_t x302 = INT32_MIN;
	static int32_t x304 = INT32_MIN;
	static int32_t t72 = INT32_MIN;

	t72 = ((x301==(x302/x303))^x304);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int8_t x306 = -1;
	uint32_t x308 = 7712U;
	uint32_t t73 = 93U;

	t73 = ((x305==(x306/x307))^x308);

	if (t73 != 7712U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MAX;

	t74 = ((x309==(x310/x311))^x312);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x314 = 15312044138LL;
	int16_t x315 = -1;
	int8_t x316 = INT8_MAX;

	t75 = ((x313==(x314/x315))^x316);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x318 = INT8_MIN;
	static uint8_t x319 = UINT8_MAX;
	int32_t t76 = -9;

	t76 = ((x317==(x318/x319))^x320);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int16_t x322 = 1059;
	volatile int8_t x323 = INT8_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t77 = -9321140;

	t77 = ((x321==(x322/x323))^x324);

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MAX;
	int16_t x328 = -1;
	int32_t t78 = 143;

	t78 = ((x325==(x326/x327))^x328);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x331 = -1LL;

	t79 = ((x329==(x330/x331))^x332);

	if (t79 != 1468795852U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	int8_t x335 = -1;
	int32_t x336 = 344044853;
	static volatile int32_t t80 = 692983365;

	t80 = ((x333==(x334/x335))^x336);

	if (t80 != 344044853) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = -3244427984LL;
	int64_t x338 = INT64_MIN;
	volatile int64_t x339 = INT64_MIN;
	int16_t x340 = -24;
	volatile int32_t t81 = -2;

	t81 = ((x337==(x338/x339))^x340);

	if (t81 != -24) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x342 = -1;
	int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = ((x341==(x342/x343))^x344);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x346 = INT64_MIN;
	volatile uint32_t x347 = 2814243U;
	uint8_t x348 = 113U;

	t83 = ((x345==(x346/x347))^x348);

	if (t83 != 113) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x349 = 1U;
	uint64_t x350 = UINT64_MAX;
	volatile int16_t x351 = -1;
	int8_t x352 = INT8_MIN;

	t84 = ((x349==(x350/x351))^x352);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 24U;
	int64_t x355 = INT64_MAX;
	static uint8_t x356 = 1U;
	volatile int32_t t85 = 172485;

	t85 = ((x353==(x354/x355))^x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x357 = 2U;
	static int32_t x358 = INT32_MAX;
	uint16_t x359 = 10843U;

	t86 = ((x357==(x358/x359))^x360);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -1;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	static int16_t x372 = INT16_MIN;
	int32_t t87 = 77019;

	t87 = ((x369==(x370/x371))^x372);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x374 = INT16_MAX;
	volatile int32_t t88 = -62;

	t88 = ((x373==(x374/x375))^x376);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = -1;
	uint16_t x378 = 92U;
	uint64_t x379 = 95214212487269LLU;
	volatile uint64_t x380 = 473195677LLU;
	uint64_t t89 = 1524151309617LLU;

	t89 = ((x377==(x378/x379))^x380);

	if (t89 != 473195677LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x384 = INT8_MIN;
	volatile int32_t t90 = 459;

	t90 = ((x381==(x382/x383))^x384);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MIN;
	int8_t x386 = -50;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = -1;

	t91 = ((x385==(x386/x387))^x388);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 5465840172990411261LLU;
	int64_t x390 = INT64_MAX;
	volatile int8_t x391 = -1;
	int16_t x392 = INT16_MAX;

	t92 = ((x389==(x390/x391))^x392);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = INT32_MIN;
	static uint32_t x394 = UINT32_MAX;
	uint16_t x395 = 7053U;
	volatile uint32_t x396 = 200951U;
	uint32_t t93 = 714258U;

	t93 = ((x393==(x394/x395))^x396);

	if (t93 != 200951U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x397 = INT16_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	static volatile int64_t x399 = -4294701276487757LL;

	t94 = ((x397==(x398/x399))^x400);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = 0;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 82U;
	uint32_t x404 = 1U;
	volatile uint32_t t95 = 211129258U;

	t95 = ((x401==(x402/x403))^x404);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x406 = 1U;
	static volatile int8_t x408 = INT8_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x405==(x406/x407))^x408);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x409 = 535U;
	volatile int8_t x410 = INT8_MAX;
	uint16_t x411 = 7U;
	int32_t x412 = -1;

	t97 = ((x409==(x410/x411))^x412);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x415 = -8;
	static int16_t x416 = 5;
	volatile int32_t t98 = -2589;

	t98 = ((x413==(x414/x415))^x416);

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -497;
	uint8_t x419 = 5U;
	volatile uint16_t x420 = 50U;
	static volatile int32_t t99 = 1185724;

	t99 = ((x417==(x418/x419))^x420);

	if (t99 != 50) { NG(); } else { ; }
	
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

