#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
uint8_t x4 = 101U;
volatile int32_t x5 = INT32_MIN;
static uint8_t x7 = 1U;
uint16_t x8 = 29039U;
int16_t x9 = -1;
static int32_t x12 = INT32_MAX;
volatile int64_t x23 = 56LL;
uint32_t x24 = 6240748U;
int16_t x26 = INT16_MIN;
int16_t x30 = INT16_MIN;
static uint16_t x40 = 94U;
volatile int32_t t9 = 42545;
int16_t x54 = -1;
static uint8_t x60 = UINT8_MAX;
int64_t x61 = INT64_MIN;
int8_t x62 = INT8_MAX;
volatile int32_t t15 = -1740322;
static int8_t x71 = INT8_MAX;
int64_t x72 = INT64_MIN;
int16_t x73 = INT16_MIN;
static volatile int32_t t17 = -1048871845;
int16_t x80 = -1;
volatile int32_t t18 = -33652464;
int32_t t19 = -8196017;
static uint8_t x94 = 12U;
volatile int8_t x100 = INT8_MAX;
uint16_t x105 = UINT16_MAX;
volatile int64_t x106 = 3LL;
static uint64_t x113 = 30435673643LLU;
int64_t x116 = -1LL;
static int64_t x136 = INT64_MAX;
uint8_t x138 = UINT8_MAX;
int8_t x139 = -1;
volatile int8_t x140 = 2;
static int32_t t32 = 392162;
static int32_t x146 = INT32_MIN;
volatile int32_t t33 = -1;
volatile int32_t x156 = INT32_MIN;
volatile int32_t t35 = 85;
int32_t x160 = -134882;
volatile int64_t x163 = INT64_MAX;
int32_t t37 = 97718;
uint64_t x165 = 803594869966705637LLU;
int32_t x178 = -17449753;
static int64_t x184 = -532133LL;
int8_t x187 = INT8_MIN;
volatile int32_t t43 = -3;
static int64_t x191 = INT64_MIN;
int8_t x204 = INT8_MAX;
uint8_t x206 = 11U;
volatile uint16_t x216 = UINT16_MAX;
uint16_t x221 = UINT16_MAX;
int32_t x222 = -1;
int16_t x224 = INT16_MIN;
int32_t t51 = 49749;
uint64_t x229 = 2071610LLU;
uint8_t x233 = 54U;
uint8_t x234 = 20U;
static int8_t x235 = INT8_MIN;
static uint16_t x237 = 11U;
uint32_t x239 = 757U;
int8_t x243 = INT8_MIN;
int16_t x246 = -1;
uint64_t x253 = 25LLU;
uint8_t x255 = 13U;
uint32_t x256 = UINT32_MAX;
static volatile int32_t t58 = 1;
volatile int32_t t59 = 3666;
int16_t x261 = INT16_MIN;
static int16_t x266 = 171;
int16_t x267 = INT16_MIN;
int32_t x269 = INT32_MIN;
int16_t x272 = INT16_MIN;
volatile int16_t x279 = 1887;
volatile int32_t t64 = 369288;
uint8_t x284 = UINT8_MAX;
uint64_t x288 = UINT64_MAX;
volatile int16_t x294 = 0;
uint32_t x298 = 116836335U;
uint16_t x299 = 8648U;
static uint16_t x300 = 32203U;
int16_t x306 = -11189;
static uint32_t x307 = UINT32_MAX;
int32_t t71 = -752929780;
int32_t t72 = -7;
int8_t x319 = -14;
int32_t x320 = 1505;
int16_t x324 = INT16_MAX;
uint64_t x334 = 354279145174528886LLU;
volatile int32_t t75 = 12023652;
int64_t x337 = INT64_MAX;
static int64_t x346 = INT64_MIN;
int16_t x349 = 0;
volatile int32_t x350 = -1;
int16_t x352 = 12;
static volatile int32_t t79 = -50029792;
uint64_t x358 = UINT64_MAX;
int16_t x359 = 57;
int8_t x367 = 1;
volatile int16_t x368 = -88;
int8_t x369 = -1;
volatile int32_t t85 = -351573412;
uint32_t x381 = 1969171U;
int32_t t87 = -57;
static volatile int32_t t89 = -7155;
uint32_t x401 = 64875U;
int8_t x403 = INT8_MAX;
int64_t x407 = INT64_MIN;
static int32_t t92 = 217;
uint8_t x412 = 0U;
uint32_t x413 = UINT32_MAX;
int32_t x414 = INT32_MIN;
static int8_t x420 = INT8_MIN;
int64_t x432 = INT64_MIN;
int32_t t98 = -10762768;


void f0(void) {
	uint16_t x1 = 5180U;
	volatile int32_t x2 = -71079;
	volatile int32_t t0 = 384909;

	t0 = ((x1+(x2^x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	int32_t t1 = 34192401;

	t1 = ((x5+(x6^x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 1U;
	uint8_t x11 = UINT8_MAX;
	volatile int32_t t2 = 1038;

	t2 = ((x9+(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 30346;
	volatile int32_t x18 = 1;
	volatile int16_t x19 = INT16_MAX;
	int16_t x20 = INT16_MIN;
	static int32_t t3 = 15;

	t3 = ((x17+(x18^x19))<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int16_t x22 = -625;
	int32_t t4 = 31;

	t4 = ((x21+(x22^x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	volatile int32_t x27 = 94972325;
	int8_t x28 = -3;
	static volatile int32_t t5 = -537;

	t5 = ((x25+(x26^x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -37;
	int8_t x31 = -1;
	static int64_t x32 = 140827148677LL;
	volatile int32_t t6 = -874;

	t6 = ((x29+(x30^x31))<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -381866386LL;
	uint64_t x34 = 498821278LLU;
	static uint16_t x35 = 19U;
	static volatile uint64_t x36 = 268984839525LLU;
	static int32_t t7 = 7695130;

	t7 = ((x33+(x34^x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	volatile int32_t t8 = 3;

	t8 = ((x37+(x38^x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 3545984734656461656LL;
	int64_t x42 = 147017296LL;
	int16_t x43 = INT16_MAX;
	volatile uint16_t x44 = UINT16_MAX;

	t9 = ((x41+(x42^x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 5617981442281035LLU;
	volatile uint64_t x46 = 1419648034182161376LLU;
	int16_t x47 = -1;
	int8_t x48 = -1;
	volatile int32_t t10 = 1012038233;

	t10 = ((x45+(x46^x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MIN;
	static uint16_t x52 = 12547U;
	int32_t t11 = 1;

	t11 = ((x49+(x50^x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int32_t x55 = INT32_MAX;
	int32_t x56 = 865851592;
	static int32_t t12 = 43491;

	t12 = ((x53+(x54^x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = 2031754U;
	static int32_t x59 = INT32_MIN;
	volatile int32_t t13 = 99;

	t13 = ((x57+(x58^x59))<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = -22433;
	static volatile int32_t t14 = 2925;

	t14 = ((x61+(x62^x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x65 = INT8_MAX;
	uint32_t x66 = 13009639U;
	int64_t x67 = -1927100682LL;
	int32_t x68 = INT32_MIN;

	t15 = ((x65+(x66^x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int64_t x70 = INT64_MIN;
	int32_t t16 = 104072898;

	t16 = ((x69+(x70^x71))<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = 240374386853320LLU;
	volatile uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;

	t17 = ((x73+(x74^x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	uint32_t x78 = 175668U;
	volatile int8_t x79 = INT8_MIN;

	t18 = ((x77+(x78^x79))<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	static int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MAX;
	static volatile int8_t x88 = INT8_MIN;

	t19 = ((x85+(x86^x87))<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -12;
	uint32_t x90 = UINT32_MAX;
	static int8_t x91 = -1;
	int32_t x92 = -1;
	static volatile int32_t t20 = 17233;

	t20 = ((x89+(x90^x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = INT64_MIN;
	uint16_t x95 = 3753U;
	volatile uint64_t x96 = 56LLU;
	int32_t t21 = 6780;

	t21 = ((x93+(x94^x95))<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = -1;
	static uint64_t x99 = 233574LLU;
	volatile int32_t t22 = -1;

	t22 = ((x97+(x98^x99))<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = UINT64_MAX;
	volatile int16_t x102 = INT16_MIN;
	volatile int16_t x103 = -1;
	static volatile uint64_t x104 = 94006761LLU;
	volatile int32_t t23 = 60948033;

	t23 = ((x101+(x102^x103))<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x107 = 12U;
	int64_t x108 = INT64_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x105+(x106^x107))<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = 1U;
	int32_t x110 = -1;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 14665U;
	volatile int32_t t25 = -300756;

	t25 = ((x109+(x110^x111))<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	int32_t x115 = -1;
	static volatile int32_t t26 = 425;

	t26 = ((x113+(x114^x115))<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 1;
	static int32_t x118 = -1;
	static int64_t x119 = INT64_MAX;
	int64_t x120 = -1LL;
	static volatile int32_t t27 = -2;

	t27 = ((x117+(x118^x119))<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = 1U;
	int8_t x127 = 0;
	int64_t x128 = 11LL;
	volatile int32_t t28 = -2;

	t28 = ((x125+(x126^x127))<=x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	static int8_t x130 = -1;
	int32_t x131 = -1;
	int32_t x132 = INT32_MIN;
	volatile int32_t t29 = 81;

	t29 = ((x129+(x130^x131))<=x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = -1LL;
	static uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MIN;
	static int32_t t30 = -4414;

	t30 = ((x133+(x134^x135))<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = -1;
	int32_t t31 = 211;

	t31 = ((x137+(x138^x139))<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x141 = UINT64_MAX;
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = INT16_MIN;
	volatile uint16_t x144 = UINT16_MAX;

	t32 = ((x141+(x142^x143))<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x147 = 1;
	uint16_t x148 = UINT16_MAX;

	t33 = ((x145+(x146^x147))<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = 870524883183830215LL;
	uint16_t x150 = UINT16_MAX;
	uint64_t x151 = 11611044LLU;
	static volatile int64_t x152 = INT64_MIN;
	int32_t t34 = 4982687;

	t34 = ((x149+(x150^x151))<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 3;
	uint64_t x154 = 265751170157LLU;
	int8_t x155 = 3;

	t35 = ((x153+(x154^x155))<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x157 = UINT64_MAX;
	uint64_t x158 = 522086443506717LLU;
	int64_t x159 = 63LL;
	int32_t t36 = 1;

	t36 = ((x157+(x158^x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MAX;
	volatile int32_t x162 = INT32_MIN;
	uint64_t x164 = UINT64_MAX;

	t37 = ((x161+(x162^x163))<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x166 = INT64_MIN;
	volatile int8_t x167 = 7;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t38 = 1221;

	t38 = ((x165+(x166^x167))<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = 3049083420352LL;
	uint16_t x172 = UINT16_MAX;
	static int32_t t39 = 965;

	t39 = ((x169+(x170^x171))<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 19937241803549LLU;
	uint32_t x174 = UINT32_MAX;
	static volatile uint32_t x175 = 193128U;
	volatile uint32_t x176 = UINT32_MAX;
	int32_t t40 = 0;

	t40 = ((x173+(x174^x175))<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 8U;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 751835593;
	int32_t t41 = 170192;

	t41 = ((x177+(x178^x179))<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x181 = UINT64_MAX;
	static int32_t x182 = INT32_MAX;
	uint32_t x183 = 1568U;
	volatile int32_t t42 = 894450;

	t42 = ((x181+(x182^x183))<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -52;
	int16_t x186 = INT16_MIN;
	int16_t x188 = INT16_MIN;

	t43 = ((x185+(x186^x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MAX;
	static uint32_t x190 = 30610095U;
	static volatile int8_t x192 = -1;
	volatile int32_t t44 = 1;

	t44 = ((x189+(x190^x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	static uint8_t x198 = UINT8_MAX;
	static int8_t x199 = 0;
	static uint16_t x200 = UINT16_MAX;
	int32_t t45 = -57100;

	t45 = ((x197+(x198^x199))<=x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int32_t x202 = 249645048;
	int8_t x203 = -1;
	int32_t t46 = -282;

	t46 = ((x201+(x202^x203))<=x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = -1;
	uint16_t x207 = 7935U;
	int64_t x208 = -351528614403965LL;
	volatile int32_t t47 = 25934;

	t47 = ((x205+(x206^x207))<=x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = 4U;
	static uint64_t x212 = 9576661549LLU;
	static int32_t t48 = -7723392;

	t48 = ((x209+(x210^x211))<=x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = 4376;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = 62U;
	volatile int32_t t49 = 59;

	t49 = ((x213+(x214^x215))<=x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x217 = UINT16_MAX;
	static int8_t x218 = -1;
	int32_t x219 = 500;
	int16_t x220 = 235;
	volatile int32_t t50 = 83570;

	t50 = ((x217+(x218^x219))<=x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x223 = -12;

	t51 = ((x221+(x222^x223))<=x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	volatile int64_t x226 = -1LL;
	int8_t x227 = 0;
	int64_t x228 = INT64_MIN;
	volatile int32_t t52 = 1;

	t52 = ((x225+(x226^x227))<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x230 = UINT8_MAX;
	static int64_t x231 = -8441829857685LL;
	int32_t x232 = 16620;
	int32_t t53 = -139018041;

	t53 = ((x229+(x230^x231))<=x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x236 = INT8_MIN;
	int32_t t54 = 24579;

	t54 = ((x233+(x234^x235))<=x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x238 = 23456U;
	int64_t x240 = -13531LL;
	int32_t t55 = 263433325;

	t55 = ((x237+(x238^x239))<=x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = 2;
	int64_t x244 = -1LL;
	volatile int32_t t56 = -133189927;

	t56 = ((x241+(x242^x243))<=x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x245 = 0;
	volatile uint8_t x247 = UINT8_MAX;
	static uint64_t x248 = 399LLU;
	int32_t t57 = 14;

	t57 = ((x245+(x246^x247))<=x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x254 = 3;

	t58 = ((x253+(x254^x255))<=x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = INT8_MIN;
	uint16_t x258 = 31U;
	int32_t x259 = 13453465;
	static uint64_t x260 = UINT64_MAX;

	t59 = ((x257+(x258^x259))<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x262 = INT64_MIN;
	static int8_t x263 = INT8_MIN;
	uint64_t x264 = 1LLU;
	int32_t t60 = -4318768;

	t60 = ((x261+(x262^x263))<=x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int64_t x268 = -1118661970LL;
	int32_t t61 = -1856;

	t61 = ((x265+(x266^x267))<=x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x270 = 2284419177LLU;
	static uint16_t x271 = 15U;
	int32_t t62 = 7255213;

	t62 = ((x269+(x270^x271))<=x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = -8588760;
	int8_t x275 = 28;
	static int16_t x276 = -1;
	int32_t t63 = 466;

	t63 = ((x273+(x274^x275))<=x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = 44U;
	volatile int8_t x278 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;

	t64 = ((x277+(x278^x279))<=x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MAX;
	volatile int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	int32_t t65 = 107379124;

	t65 = ((x281+(x282^x283))<=x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = 2LLU;
	int32_t x287 = 1613;
	volatile int32_t t66 = -69355439;

	t66 = ((x285+(x286^x287))<=x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = -1;
	volatile int32_t x290 = 594642;
	int64_t x291 = INT64_MIN;
	static uint64_t x292 = 10LLU;
	int32_t t67 = 1;

	t67 = ((x289+(x290^x291))<=x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -24670;
	int16_t x295 = -1;
	volatile uint16_t x296 = 12U;
	volatile int32_t t68 = 12960;

	t68 = ((x293+(x294^x295))<=x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = -22328966;
	volatile int32_t t69 = 455435482;

	t69 = ((x297+(x298^x299))<=x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x301 = 381U;
	int32_t x302 = -1;
	uint64_t x303 = 11717507155075LLU;
	static int8_t x304 = -1;
	volatile int32_t t70 = 2954283;

	t70 = ((x301+(x302^x303))<=x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = 2360LLU;
	int32_t x308 = 65172;

	t71 = ((x305+(x306^x307))<=x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = UINT8_MAX;
	volatile uint16_t x312 = UINT16_MAX;

	t72 = ((x309+(x310^x311))<=x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = 30;
	int8_t x318 = 6;
	volatile int32_t t73 = -493;

	t73 = ((x317+(x318^x319))<=x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = 0;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 106796U;
	int32_t t74 = 19017;

	t74 = ((x321+(x322^x323))<=x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x333 = INT16_MIN;
	uint32_t x335 = UINT32_MAX;
	static int64_t x336 = 4532477024LL;

	t75 = ((x333+(x334^x335))<=x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = -1;
	int16_t x340 = 14;
	int32_t t76 = 3;

	t76 = ((x337+(x338^x339))<=x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = 2U;
	int32_t x342 = 2;
	volatile uint64_t x343 = UINT64_MAX;
	static volatile uint8_t x344 = 16U;
	volatile int32_t t77 = 114038977;

	t77 = ((x341+(x342^x343))<=x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = 15;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t78 = 0;

	t78 = ((x345+(x346^x347))<=x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x351 = 22;

	t79 = ((x349+(x350^x351))<=x352);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x353 = 269U;
	volatile int8_t x354 = INT8_MIN;
	volatile int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	int32_t t80 = 1;

	t80 = ((x353+(x354^x355))<=x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x357 = 221442LLU;
	uint8_t x360 = 2U;
	static volatile int32_t t81 = 1963631;

	t81 = ((x357+(x358^x359))<=x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = 278549375779326045LLU;
	static volatile uint32_t x362 = 24329U;
	static int16_t x363 = INT16_MIN;
	volatile int32_t x364 = INT32_MIN;
	volatile int32_t t82 = 2;

	t82 = ((x361+(x362^x363))<=x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = 591;
	volatile int16_t x366 = -1;
	static volatile int32_t t83 = -30;

	t83 = ((x365+(x366^x367))<=x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x370 = INT64_MIN;
	uint32_t x371 = UINT32_MAX;
	uint8_t x372 = 0U;
	volatile int32_t t84 = -30196126;

	t84 = ((x369+(x370^x371))<=x372);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = -43;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MAX;

	t85 = ((x373+(x374^x375))<=x376);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = -1;
	int64_t x378 = -82049075534865LL;
	volatile uint16_t x379 = UINT16_MAX;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t86 = 95040668;

	t86 = ((x377+(x378^x379))<=x380);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x382 = UINT32_MAX;
	static uint8_t x383 = 120U;
	static int8_t x384 = INT8_MAX;

	t87 = ((x381+(x382^x383))<=x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = 5;
	uint64_t x387 = UINT64_MAX;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t88 = -190;

	t88 = ((x385+(x386^x387))<=x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = 38U;

	t89 = ((x389+(x390^x391))<=x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x393 = UINT32_MAX;
	uint32_t x394 = UINT32_MAX;
	uint16_t x395 = 17U;
	static int8_t x396 = -28;
	static int32_t t90 = -239;

	t90 = ((x393+(x394^x395))<=x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x402 = UINT16_MAX;
	static uint8_t x404 = 1U;
	volatile int32_t t91 = 1059554918;

	t91 = ((x401+(x402^x403))<=x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x405 = 0U;
	volatile int8_t x406 = INT8_MIN;
	uint32_t x408 = 68U;

	t92 = ((x405+(x406^x407))<=x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = -380524;
	int64_t x410 = -4LL;
	int8_t x411 = 1;
	volatile int32_t t93 = -27583;

	t93 = ((x409+(x410^x411))<=x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x415 = UINT8_MAX;
	static volatile int16_t x416 = INT16_MIN;
	int32_t t94 = 3;

	t94 = ((x413+(x414^x415))<=x416);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x417 = -25;
	int64_t x418 = -25794901439LL;
	volatile int32_t x419 = -1;
	int32_t t95 = 35785146;

	t95 = ((x417+(x418^x419))<=x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	volatile uint64_t x423 = 310638197790350837LLU;
	int8_t x424 = 5;
	volatile int32_t t96 = 6187;

	t96 = ((x421+(x422^x423))<=x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = 1;
	static uint64_t x426 = 34752LLU;
	int16_t x427 = -6;
	int32_t x428 = INT32_MIN;
	volatile int32_t t97 = 53;

	t97 = ((x425+(x426^x427))<=x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = -1;
	int16_t x430 = 36;
	static int8_t x431 = INT8_MIN;

	t98 = ((x429+(x430^x431))<=x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x437 = INT64_MIN;
	uint64_t x438 = 4641314008799854523LLU;
	int64_t x439 = -14809LL;
	int8_t x440 = -31;
	int32_t t99 = 1372;

	t99 = ((x437+(x438^x439))<=x440);

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

