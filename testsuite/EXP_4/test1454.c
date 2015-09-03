#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 330;
int32_t t1 = 2620301;
int32_t t6 = 121183975;
int64_t x40 = 2728285563873227LL;
int32_t t9 = -8241937;
int16_t x43 = 2;
volatile int8_t x44 = 0;
int64_t x46 = -1LL;
static volatile int16_t x48 = INT16_MAX;
uint8_t x52 = UINT8_MAX;
int32_t x55 = -11534511;
uint64_t x56 = 229LLU;
volatile int32_t t14 = 63;
volatile uint16_t x68 = 23U;
int32_t t17 = -1;
int64_t x74 = INT64_MIN;
uint32_t x79 = 11802067U;
int32_t x80 = 17360;
uint32_t t19 = 445056236U;
int32_t t20 = 354415;
volatile int8_t x86 = -60;
int16_t x88 = 14049;
int64_t x90 = INT64_MAX;
volatile uint8_t x98 = 93U;
static int32_t x104 = -8;
static volatile int32_t t25 = 9347429;
static uint16_t x105 = 4U;
static volatile int32_t x107 = INT32_MAX;
static int8_t x115 = -1;
static int64_t x120 = INT64_MIN;
volatile int32_t x127 = INT32_MAX;
volatile int64_t t33 = 6439194LL;
static int32_t x139 = INT32_MIN;
int16_t x140 = -2;
int32_t t35 = -62;
int32_t x147 = -1;
int8_t x152 = -4;
volatile int32_t t37 = -46854;
int64_t x156 = -805694146641094LL;
int32_t t38 = -1;
int64_t x158 = INT64_MIN;
uint64_t x159 = 4377668216872392145LLU;
int64_t x174 = INT64_MAX;
int64_t x186 = INT64_MIN;
int32_t t46 = 128;
int8_t x193 = INT8_MIN;
static volatile int32_t t48 = 30186;
volatile uint16_t x198 = 708U;
int64_t x206 = 240737361356LL;
volatile int32_t t51 = 114488;
int32_t x219 = INT32_MAX;
volatile uint16_t x221 = UINT16_MAX;
int8_t x229 = INT8_MIN;
uint64_t x231 = UINT64_MAX;
static int8_t x232 = INT8_MIN;
volatile uint64_t x234 = 911572LLU;
int32_t x239 = INT32_MIN;
int8_t x250 = -1;
int32_t t62 = 943316;
static int32_t t65 = 2;
uint16_t x270 = 24827U;
int64_t x277 = -22145432449653LL;
int16_t x280 = INT16_MAX;
uint16_t x282 = 516U;
uint8_t x283 = UINT8_MAX;
uint8_t x287 = 67U;
static int64_t x288 = INT64_MIN;
volatile uint16_t x291 = 1668U;
static uint8_t x292 = UINT8_MAX;
int16_t x294 = -1;
int8_t x296 = INT8_MIN;
volatile int32_t t73 = 45;
volatile int64_t x300 = 1123174LL;
int64_t t75 = 3801071581593485201LL;
volatile uint32_t x306 = 4783U;
static volatile uint64_t t77 = 673247288LLU;
static volatile int32_t t78 = 46;
volatile int32_t t79 = -3;
uint32_t t80 = 268878U;
static int8_t x325 = -1;
int64_t x326 = INT64_MIN;
int32_t t81 = 420;
uint64_t x329 = 108923964754LLU;
static int64_t x331 = 1365079609129347LL;
static int32_t x335 = INT32_MIN;
volatile int64_t t83 = -11083564614810LL;
volatile int32_t x338 = 66743164;
int32_t x349 = INT32_MIN;
uint16_t x353 = 5U;
static int16_t x355 = -1;
volatile uint64_t x357 = UINT64_MAX;
int8_t x386 = -1;
int32_t t96 = -7985;
int16_t x391 = -1;
uint32_t t97 = 3U;
static int16_t x400 = -425;


void f0(void) {
	int32_t x1 = -27;
	int32_t x2 = INT32_MIN;
	volatile uint8_t x3 = 99U;
	uint32_t x4 = 13683648U;
	int32_t t0 = -5270;

	t0 = (x1&(x2==(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 6U;
	int16_t x8 = -4;

	t1 = (x5&(x6==(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int64_t x10 = -1LL;
	int64_t x11 = INT64_MIN;
	static volatile int16_t x12 = 2898;
	int32_t t2 = 5377;

	t2 = (x9&(x10==(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = 1;
	uint64_t x15 = 4747LLU;
	static uint32_t x16 = 66764U;
	volatile int32_t t3 = 33634204;

	t3 = (x13&(x14==(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 483U;
	int16_t x18 = 0;
	volatile int8_t x19 = INT8_MIN;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 1;

	t4 = (x17&(x18==(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = 3;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 3;

	t5 = (x21&(x22==(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 8;
	static int64_t x26 = 268LL;
	int32_t x27 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;

	t6 = (x25&(x26==(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = -18806;
	volatile uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 7U;
	volatile int32_t t7 = -386;

	t7 = (x29&(x30==(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	uint64_t x34 = 935704LLU;
	int16_t x35 = 301;
	uint32_t x36 = 277522U;
	volatile int32_t t8 = 413560794;

	t8 = (x33&(x34==(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = 40847301661LLU;
	int8_t x39 = -1;

	t9 = (x37&(x38==(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = 65;
	int32_t t10 = -39;

	t10 = (x41&(x42==(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	volatile uint64_t t11 = 0LLU;

	t11 = (x45&(x46==(x47<x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MIN;
	uint8_t x51 = 14U;
	volatile uint32_t t12 = 445657871U;

	t12 = (x49&(x50==(x51<x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MAX;
	volatile uint32_t t13 = 9871319U;

	t13 = (x53&(x54==(x55<x56)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = 2898399LL;
	uint8_t x59 = UINT8_MAX;
	volatile uint32_t x60 = 265U;

	t14 = (x57&(x58==(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int32_t x62 = -514497433;
	uint64_t x63 = 20LLU;
	volatile int64_t x64 = -1LL;
	static volatile int64_t t15 = 69LL;

	t15 = (x61&(x62==(x63<x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = INT64_MIN;
	uint32_t x66 = 2317351U;
	int8_t x67 = INT8_MIN;
	volatile int64_t t16 = -134211928843LL;

	t16 = (x65&(x66==(x67<x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 4U;
	uint64_t x70 = UINT64_MAX;
	static uint16_t x71 = 4420U;
	volatile uint16_t x72 = UINT16_MAX;

	t17 = (x69&(x70==(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1U;
	int32_t x75 = 1;
	int32_t x76 = 74;
	int32_t t18 = -1000;

	t18 = (x73&(x74==(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MAX;

	t19 = (x77&(x78==(x79<x80)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 1;
	int8_t x82 = 4;
	int8_t x83 = 29;
	volatile int16_t x84 = -1;

	t20 = (x81&(x82==(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 149U;
	int32_t x87 = -1;
	static volatile int32_t t21 = -9113;

	t21 = (x85&(x86==(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 0U;
	int16_t x91 = 128;
	static int64_t x92 = -1553816352906141LL;
	int32_t t22 = -990;

	t22 = (x89&(x90==(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 5LLU;
	uint64_t x94 = 10039464LLU;
	volatile int32_t x95 = INT32_MAX;
	int8_t x96 = -8;
	uint64_t t23 = 10639LLU;

	t23 = (x93&(x94==(x95<x96)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int64_t x99 = INT64_MIN;
	static volatile int64_t x100 = -1LL;
	int32_t t24 = 270;

	t24 = (x97&(x98==(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -9;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = -1;

	t25 = (x101&(x102==(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x106 = INT64_MAX;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = -3937363;

	t26 = (x105&(x106==(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	static volatile int64_t x112 = -115940538599292LL;
	volatile int64_t t27 = -11510840204267567LL;

	t27 = (x109&(x110==(x111<x112)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = INT32_MIN;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -47017;

	t28 = (x113&(x114==(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MAX;
	int64_t x119 = INT64_MAX;
	volatile int32_t t29 = 423136;

	t29 = (x117&(x118==(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int8_t x122 = -1;
	static int32_t x123 = -1;
	uint16_t x124 = 7U;
	int64_t t30 = 35398279338285106LL;

	t30 = (x121&(x122==(x123<x124)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = UINT32_MAX;
	volatile int64_t x126 = -2050469LL;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t31 = 363552652U;

	t31 = (x125&(x126==(x127<x128)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -31;
	volatile int8_t x130 = INT8_MAX;
	int64_t x131 = -1LL;
	int32_t x132 = 492996;
	static volatile int32_t t32 = 16467459;

	t32 = (x129&(x130==(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = 3319659650288LL;
	static volatile int32_t x134 = INT32_MIN;
	static int32_t x135 = INT32_MIN;
	int32_t x136 = 9354;

	t33 = (x133&(x134==(x135<x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 76U;
	int16_t x138 = -2;
	static int32_t t34 = 15862;

	t34 = (x137&(x138==(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -33;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = 6;
	int16_t x144 = INT16_MAX;

	t35 = (x141&(x142==(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 3U;
	uint64_t x146 = 915274016LLU;
	uint32_t x148 = 209486U;
	int32_t t36 = -9673609;

	t36 = (x145&(x146==(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	static uint64_t x150 = UINT64_MAX;
	static volatile uint32_t x151 = 175244U;

	t37 = (x149&(x150==(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -4979;
	int16_t x154 = -9117;
	int64_t x155 = -308LL;

	t38 = (x153&(x154==(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 383335522;
	int64_t x160 = -1LL;
	volatile int32_t t39 = 15510102;

	t39 = (x157&(x158==(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 12;
	int8_t x162 = INT8_MAX;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = -1;
	int32_t t40 = -1;

	t40 = (x161&(x162==(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	uint64_t x167 = 13902691883021783LLU;
	static int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 120332;

	t41 = (x165&(x166==(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static uint32_t x170 = 280072040U;
	volatile uint16_t x171 = UINT16_MAX;
	static volatile int64_t x172 = -8LL;
	int32_t t42 = -53538317;

	t42 = (x169&(x170==(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 119007455908228762LLU;
	int16_t x175 = INT16_MAX;
	int64_t x176 = INT64_MIN;
	uint64_t t43 = 752918761466944LLU;

	t43 = (x173&(x174==(x175<x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 4067U;
	volatile int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	int16_t x180 = 0;
	volatile uint32_t t44 = 141281894U;

	t44 = (x177&(x178==(x179<x180)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int64_t x182 = 35153930847940LL;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -3052;

	t45 = (x181&(x182==(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 9;
	int32_t x187 = INT32_MAX;
	static int16_t x188 = -394;

	t46 = (x185&(x186==(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x190 = 710U;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 1U;
	int64_t t47 = -1420426966011879LL;

	t47 = (x189&(x190==(x191<x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = -1;
	int16_t x195 = -1;
	int32_t x196 = -1;

	t48 = (x193&(x194==(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 25773719279LLU;
	int32_t x199 = INT32_MAX;
	static volatile uint64_t x200 = 159276594038LLU;
	volatile uint64_t t49 = 5201888LLU;

	t49 = (x197&(x198==(x199<x200)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = 24199480;
	int32_t x202 = -1;
	static int64_t x203 = INT64_MIN;
	int32_t x204 = -1;
	int32_t t50 = 0;

	t50 = (x201&(x202==(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 1712;
	volatile int64_t x207 = 82046718560LL;
	int16_t x208 = -1;

	t51 = (x205&(x206==(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	uint32_t x210 = 482U;
	volatile int16_t x211 = INT16_MAX;
	int64_t x212 = 551LL;
	volatile int32_t t52 = 1149077;

	t52 = (x209&(x210==(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MAX;
	static int8_t x216 = -23;
	int32_t t53 = 0;

	t53 = (x213&(x214==(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -1;
	volatile uint32_t x218 = 2023052U;
	static int16_t x220 = -1;
	int32_t t54 = 44;

	t54 = (x217&(x218==(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 2476323U;
	static volatile int32_t x223 = -3985228;
	int32_t x224 = 19338826;
	int32_t t55 = 32344693;

	t55 = (x221&(x222==(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	int8_t x226 = 9;
	int16_t x227 = -16;
	volatile int8_t x228 = 1;
	volatile int64_t t56 = -1883045LL;

	t56 = (x225&(x226==(x227<x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 0U;
	int32_t t57 = -20;

	t57 = (x229&(x230==(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 163069271LLU;
	volatile int32_t t58 = 199;

	t58 = (x233&(x234==(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int16_t x238 = INT16_MAX;
	static uint32_t x240 = 25123U;
	int32_t t59 = -147998;

	t59 = (x237&(x238==(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int64_t x242 = 2381002532LL;
	uint8_t x243 = 0U;
	static int16_t x244 = -9444;
	int32_t t60 = 3525426;

	t60 = (x241&(x242==(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 3U;
	static int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	int8_t x248 = 1;
	volatile int32_t t61 = -22801;

	t61 = (x245&(x246==(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int8_t x251 = 21;
	volatile uint16_t x252 = 983U;

	t62 = (x249&(x250==(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 9U;
	int8_t x256 = -54;
	volatile int64_t t63 = -4129933172597140LL;

	t63 = (x253&(x254==(x255<x256)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile uint16_t x258 = UINT16_MAX;
	volatile int64_t x259 = -1LL;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t64 = 271033995;

	t64 = (x257&(x258==(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	volatile int8_t x262 = 1;
	int32_t x263 = INT32_MIN;
	int16_t x264 = -1;

	t65 = (x261&(x262==(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	volatile int32_t x266 = -15303021;
	int64_t x267 = -1LL;
	uint32_t x268 = 117808402U;
	volatile int64_t t66 = -972LL;

	t66 = (x265&(x266==(x267<x268)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	static int64_t x271 = INT64_MIN;
	static uint8_t x272 = UINT8_MAX;
	volatile int64_t t67 = 63753LL;

	t67 = (x269&(x270==(x271<x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	uint16_t x274 = 12U;
	int64_t x275 = -1LL;
	uint8_t x276 = 1U;
	volatile int32_t t68 = 258446;

	t68 = (x273&(x274==(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	volatile uint64_t x279 = 6486097878116LLU;
	volatile int64_t t69 = 1019LL;

	t69 = (x277&(x278==(x279<x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 46;

	t70 = (x281&(x282==(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x285 = 113LLU;
	static int8_t x286 = 1;
	uint64_t t71 = 211891LLU;

	t71 = (x285&(x286==(x287<x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -19156;
	int32_t x290 = -57;
	int32_t t72 = 521;

	t72 = (x289&(x290==(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 2U;
	int16_t x295 = INT16_MAX;

	t73 = (x293&(x294==(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static int64_t x298 = 874052735922733218LL;
	int64_t x299 = -1LL;
	volatile int64_t t74 = 109LL;

	t74 = (x297&(x298==(x299<x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -174113479946191LL;
	volatile int32_t x302 = INT32_MIN;
	int32_t x303 = -1;
	volatile uint16_t x304 = UINT16_MAX;

	t75 = (x301&(x302==(x303<x304)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x307 = -360736621;
	static int8_t x308 = INT8_MIN;
	volatile uint32_t t76 = 77709U;

	t76 = (x305&(x306==(x307<x308)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 6316045900460LLU;
	int32_t x310 = 2655684;
	int16_t x311 = 3;
	volatile uint64_t x312 = 40486086156LLU;

	t77 = (x309&(x310==(x311<x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;
	uint16_t x316 = UINT16_MAX;

	t78 = (x313&(x314==(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 17U;
	volatile int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = 2;

	t79 = (x317&(x318==(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 336025U;
	static uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 115U;
	uint8_t x324 = 24U;

	t80 = (x321&(x322==(x323<x324)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MAX;

	t81 = (x325&(x326==(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = UINT32_MAX;
	volatile uint8_t x332 = UINT8_MAX;
	volatile uint64_t t82 = 6049656872538756LLU;

	t82 = (x329&(x330==(x331<x332)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -7791648504LL;
	static uint16_t x334 = 56U;
	int8_t x336 = INT8_MAX;

	t83 = (x333&(x334==(x335<x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x339 = INT8_MAX;
	volatile int16_t x340 = -1;
	static volatile uint32_t t84 = 2U;

	t84 = (x337&(x338==(x339<x340)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	volatile int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	static uint8_t x344 = 5U;
	volatile int32_t t85 = 546;

	t85 = (x341&(x342==(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 546280324LLU;
	uint8_t x346 = 4U;
	int16_t x347 = -1;
	static int8_t x348 = 10;
	uint64_t t86 = 286496765499LLU;

	t86 = (x345&(x346==(x347<x348)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = -39894;
	int8_t x351 = INT8_MIN;
	volatile uint8_t x352 = UINT8_MAX;
	int32_t t87 = 3328;

	t87 = (x349&(x350==(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 1978U;
	volatile int64_t x356 = -1LL;
	volatile int32_t t88 = 73231;

	t88 = (x353&(x354==(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x358 = 1U;
	int8_t x359 = 0;
	static int64_t x360 = -5975LL;
	uint64_t t89 = 6057659LLU;

	t89 = (x357&(x358==(x359<x360)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = -8317005;

	t90 = (x361&(x362==(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = 4;
	volatile uint16_t x368 = 106U;
	volatile int64_t t91 = 353LL;

	t91 = (x365&(x366==(x367<x368)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = 57;
	uint32_t x370 = 41036842U;
	volatile int16_t x371 = 22;
	volatile int64_t x372 = 1944891726032LL;
	volatile int32_t t92 = 19;

	t92 = (x369&(x370==(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = 1;
	volatile int64_t t93 = -49174191862LL;

	t93 = (x373&(x374==(x375<x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = 0;
	int16_t x378 = -1;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MAX;
	int32_t t94 = -102445;

	t94 = (x377&(x378==(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint32_t x382 = 25U;
	uint16_t x383 = UINT16_MAX;
	static int32_t x384 = INT32_MAX;
	static int32_t t95 = -15292;

	t95 = (x381&(x382==(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -10921;
	int64_t x387 = -487993847245065107LL;
	int16_t x388 = INT16_MAX;

	t96 = (x385&(x386==(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 29675U;
	int64_t x390 = INT64_MAX;
	static int16_t x392 = INT16_MAX;

	t97 = (x389&(x390==(x391<x392)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	volatile int8_t x394 = -1;
	int16_t x395 = 82;
	volatile int64_t x396 = INT64_MIN;
	static int32_t t98 = -3079;

	t98 = (x393&(x394==(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MAX;
	static int16_t x399 = INT16_MIN;
	static volatile int32_t t99 = 2;

	t99 = (x397&(x398==(x399<x400)));

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

