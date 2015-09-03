#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 27U;
int32_t t1 = 2774;
volatile int64_t x10 = INT64_MIN;
static int64_t x11 = -2LL;
int8_t x13 = INT8_MAX;
int32_t t3 = 1078904;
volatile int8_t x17 = INT8_MIN;
int32_t t4 = 12458;
int64_t x22 = INT64_MIN;
uint32_t x29 = 49U;
volatile int8_t x31 = INT8_MAX;
int32_t t7 = 64310855;
int32_t x54 = INT32_MIN;
int8_t x56 = -1;
int16_t x59 = -64;
int64_t x60 = -1LL;
static int32_t t15 = -183095;
uint64_t x67 = 833647688649213LLU;
static uint32_t x72 = 60U;
volatile int32_t t17 = -1;
int8_t x75 = INT8_MIN;
uint64_t x76 = 6803072191186327LLU;
static int8_t x77 = INT8_MIN;
int16_t x85 = -1;
volatile int64_t x91 = INT64_MIN;
int32_t x96 = INT32_MIN;
volatile int32_t t23 = -615;
uint32_t x97 = 983688U;
volatile int32_t t24 = 2477;
uint64_t x107 = 472826418141LLU;
static int16_t x109 = 344;
static int8_t x110 = -1;
int32_t x116 = -1;
uint16_t x119 = 38U;
uint16_t x120 = UINT16_MAX;
volatile int32_t t29 = -3749;
static volatile int8_t x129 = -3;
uint8_t x130 = UINT8_MAX;
static int64_t x133 = 1184088LL;
volatile int32_t t34 = -288853;
volatile int32_t t36 = 315327987;
int32_t x149 = INT32_MIN;
uint64_t x162 = 43339675936345061LLU;
uint64_t x164 = UINT64_MAX;
int64_t x165 = INT64_MIN;
volatile int64_t x169 = 7LL;
int32_t t43 = 408;
int64_t x179 = 14219869LL;
int32_t t44 = -1;
volatile uint32_t x185 = UINT32_MAX;
int8_t x188 = INT8_MIN;
int8_t x191 = 0;
int64_t x194 = -2153197179488307LL;
volatile uint8_t x196 = 2U;
uint32_t x206 = UINT32_MAX;
volatile uint16_t x208 = UINT16_MAX;
int32_t x223 = -1;
static int32_t t58 = 17454034;
volatile int32_t x240 = -1;
uint64_t x241 = 3071775310534407814LLU;
uint16_t x242 = 5U;
int8_t x244 = 2;
volatile int32_t t60 = 119;
uint32_t x246 = 233230758U;
volatile uint64_t x255 = 3032538598255LLU;
int32_t t63 = 886044;
uint64_t x257 = 48671580483426773LLU;
volatile int32_t t64 = -1577635;
int16_t x271 = 13474;
int32_t t67 = 0;
static int64_t x274 = INT64_MIN;
int8_t x279 = INT8_MIN;
static volatile uint64_t x280 = 201022912542459LLU;
static uint64_t x294 = 15212851266563752LLU;
volatile int64_t x297 = -1LL;
int16_t x311 = -1;
static volatile int32_t t77 = -2008;
int32_t t78 = -15;
static volatile int32_t t79 = -39722203;
int16_t x326 = -1;
int64_t x327 = INT64_MIN;
volatile int32_t t82 = 6953768;
volatile int32_t x334 = INT32_MIN;
int16_t x336 = INT16_MIN;
int32_t x337 = INT32_MIN;
static volatile int32_t t84 = -57;
volatile int64_t x341 = INT64_MIN;
volatile int16_t x347 = INT16_MAX;
uint16_t x348 = 69U;
uint16_t x356 = 0U;
uint16_t x357 = 0U;
uint16_t x358 = 763U;
volatile int16_t x360 = INT16_MIN;
int32_t x362 = -1;
static uint8_t x363 = 2U;
int32_t t90 = -784749;
uint32_t x365 = 1710881U;
int32_t x369 = 28437830;
int64_t x373 = INT64_MIN;
uint8_t x374 = UINT8_MAX;
static volatile int32_t t94 = 12062;
int64_t x388 = -56599966982LL;
int8_t x394 = INT8_MIN;
volatile int8_t x396 = -1;
int8_t x398 = 0;
int32_t t99 = 4;


void f0(void) {
	static uint32_t x1 = 5172445U;
	int8_t x2 = INT8_MIN;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -13297747;

	t0 = ((x1<=x2)&(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int16_t x6 = INT16_MIN;
	int8_t x7 = 0;
	volatile int8_t x8 = INT8_MAX;

	t1 = ((x5<=x6)&(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 41;
	int32_t x12 = -1;
	volatile int32_t t2 = -1921751;

	t2 = ((x9<=x10)&(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 1U;
	static int32_t x15 = INT32_MAX;
	volatile uint8_t x16 = UINT8_MAX;

	t3 = ((x13<=x14)&(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 4U;
	int8_t x19 = INT8_MIN;
	volatile uint64_t x20 = 49839140153276458LLU;

	t4 = ((x17<=x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	uint8_t x23 = 90U;
	int32_t x24 = -1;
	volatile int32_t t5 = -635271663;

	t5 = ((x21<=x22)&(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -55;
	uint16_t x26 = UINT16_MAX;
	volatile int8_t x27 = INT8_MIN;
	volatile uint16_t x28 = UINT16_MAX;
	int32_t t6 = -381675210;

	t6 = ((x25<=x26)&(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x30 = 667966132918684LLU;
	uint8_t x32 = 36U;

	t7 = ((x29<=x30)&(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = -1;
	int32_t x36 = -13;
	static int32_t t8 = -95;

	t8 = ((x33<=x34)&(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = 181859718;
	static int8_t x39 = -16;
	volatile int16_t x40 = INT16_MAX;
	static int32_t t9 = -20;

	t9 = ((x37<=x38)&(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x41 = UINT64_MAX;
	uint32_t x42 = UINT32_MAX;
	static int32_t x43 = INT32_MAX;
	volatile int16_t x44 = 5572;
	volatile int32_t t10 = 277032;

	t10 = ((x41<=x42)&(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint16_t x46 = 6515U;
	volatile uint32_t x47 = 125U;
	int32_t x48 = 375;
	volatile int32_t t11 = -278282795;

	t11 = ((x45<=x46)&(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	uint32_t x50 = 73589U;
	static volatile uint64_t x51 = 54478LLU;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 99610904;

	t12 = ((x49<=x50)&(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	int32_t t13 = -103;

	t13 = ((x53<=x54)&(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	static int32_t t14 = -702234933;

	t14 = ((x57<=x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	volatile uint32_t x62 = 24481773U;
	int64_t x63 = 168328152385885LL;
	volatile uint32_t x64 = 12U;

	t15 = ((x61<=x62)&(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	int16_t x66 = INT16_MIN;
	int32_t x68 = 28857156;
	static volatile int32_t t16 = -87586;

	t16 = ((x65<=x66)&(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -321263;
	int32_t x70 = -16136813;
	static int64_t x71 = INT64_MIN;

	t17 = ((x69<=x70)&(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 86U;
	static int8_t x74 = -1;
	int32_t t18 = 1671;

	t18 = ((x73<=x74)&(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x78 = 1392U;
	int8_t x79 = INT8_MAX;
	static int64_t x80 = INT64_MIN;
	int32_t t19 = -3;

	t19 = ((x77<=x78)&(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	static int8_t x82 = -1;
	static volatile int32_t x83 = 1561258;
	int8_t x84 = INT8_MAX;
	int32_t t20 = -151402;

	t20 = ((x81<=x82)&(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MAX;
	uint64_t x87 = UINT64_MAX;
	static volatile int8_t x88 = INT8_MIN;
	int32_t t21 = -597;

	t21 = ((x85<=x86)&(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MAX;
	volatile int8_t x92 = 57;
	volatile int32_t t22 = -3540895;

	t22 = ((x89<=x90)&(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 2U;
	static int8_t x94 = INT8_MIN;
	volatile int32_t x95 = INT32_MIN;

	t23 = ((x93<=x94)&(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 76763LLU;
	int8_t x99 = 0;
	int32_t x100 = INT32_MAX;

	t24 = ((x97<=x98)&(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x101 = UINT16_MAX;
	int32_t x102 = INT32_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = 0;

	t25 = ((x101<=x102)&(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int32_t x106 = 582;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 10996782;

	t26 = ((x105<=x106)&(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t27 = 2490650;

	t27 = ((x109<=x110)&(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = -1LL;
	uint16_t x115 = UINT16_MAX;
	int32_t t28 = 4;

	t28 = ((x113<=x114)&(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 8574;
	volatile uint8_t x118 = 0U;

	t29 = ((x117<=x118)&(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -415162LL;
	int16_t x122 = -1;
	int8_t x123 = -1;
	int64_t x124 = 2231LL;
	volatile int32_t t30 = -48;

	t30 = ((x121<=x122)&(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -1;
	volatile int16_t x126 = 15319;
	int64_t x127 = 4LL;
	uint16_t x128 = 0U;
	int32_t t31 = 1;

	t31 = ((x125<=x126)&(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = 386643;

	t32 = ((x129<=x130)&(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	int32_t x135 = -11861;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 102417560;

	t33 = ((x133<=x134)&(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MAX;
	uint64_t x138 = 2530LLU;
	static int32_t x139 = INT32_MIN;
	uint32_t x140 = 824859397U;

	t34 = ((x137<=x138)&(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = INT64_MAX;
	static volatile int8_t x142 = INT8_MAX;
	static volatile int64_t x143 = -12418LL;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -8691;

	t35 = ((x141<=x142)&(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = UINT64_MAX;
	volatile int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	int32_t x148 = -1;

	t36 = ((x145<=x146)&(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	volatile int16_t x151 = INT16_MIN;
	volatile int64_t x152 = -305877691714LL;
	static int32_t t37 = 5334;

	t37 = ((x149<=x150)&(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = -985152;

	t38 = ((x153<=x154)&(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int16_t x158 = INT16_MIN;
	static int32_t x159 = INT32_MAX;
	static uint16_t x160 = 3479U;
	static volatile int32_t t39 = -2486525;

	t39 = ((x157<=x158)&(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	uint64_t x163 = 7017076LLU;
	volatile int32_t t40 = 789;

	t40 = ((x161<=x162)&(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 8U;
	static uint32_t x167 = UINT32_MAX;
	volatile uint32_t x168 = 391860270U;
	volatile int32_t t41 = 1;

	t41 = ((x165<=x166)&(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = UINT8_MAX;
	int8_t x171 = 0;
	int64_t x172 = INT64_MIN;
	int32_t t42 = 48;

	t42 = ((x169<=x170)&(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -16;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	volatile uint32_t x176 = 5167825U;

	t43 = ((x173<=x174)&(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = -50607421199LL;
	static int64_t x178 = INT64_MIN;
	static int8_t x180 = 0;

	t44 = ((x177<=x178)&(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	uint16_t x182 = UINT16_MAX;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -2714939614577771551LL;
	static int32_t t45 = -954515886;

	t45 = ((x181<=x182)&(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = 3;
	int16_t x187 = INT16_MIN;
	volatile int32_t t46 = -298262614;

	t46 = ((x185<=x186)&(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 62U;
	volatile int16_t x190 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 14877624;

	t47 = ((x189<=x190)&(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 1827535;
	int16_t x195 = INT16_MIN;
	volatile int32_t t48 = -800492810;

	t48 = ((x193<=x194)&(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint32_t x198 = 8U;
	int8_t x199 = -1;
	uint64_t x200 = 10768LLU;
	static volatile int32_t t49 = 153188;

	t49 = ((x197<=x198)&(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 5934315U;
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = -1LL;
	static volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 985405377;

	t50 = ((x201<=x202)&(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int32_t x207 = INT32_MIN;
	int32_t t51 = 7451934;

	t51 = ((x205<=x206)&(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = -1;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 67U;
	volatile int32_t t52 = -1505329;

	t52 = ((x209<=x210)&(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	int16_t x214 = -8058;
	int32_t x215 = -1;
	int64_t x216 = 12LL;
	volatile int32_t t53 = -147;

	t53 = ((x213<=x214)&(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = 0;
	uint16_t x219 = 480U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -964;

	t54 = ((x217<=x218)&(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MIN;
	static uint16_t x222 = UINT16_MAX;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = 6962211;

	t55 = ((x221<=x222)&(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	volatile uint8_t x226 = 0U;
	int16_t x227 = 13;
	int64_t x228 = -85LL;
	volatile int32_t t56 = 223;

	t56 = ((x225<=x226)&(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int64_t x230 = -1LL;
	int8_t x231 = INT8_MIN;
	int8_t x232 = 0;
	int32_t t57 = 768879773;

	t57 = ((x229<=x230)&(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 4;
	uint32_t x234 = 0U;
	volatile uint16_t x235 = 31U;
	int64_t x236 = -95322167003LL;

	t58 = ((x233<=x234)&(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MIN;
	uint8_t x239 = 6U;
	int32_t t59 = -200;

	t59 = ((x237<=x238)&(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = 1;

	t60 = ((x241<=x242)&(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int16_t x247 = -1;
	static int32_t x248 = -6;
	int32_t t61 = -218;

	t61 = ((x245<=x246)&(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -253576502035LL;
	int32_t x250 = -1;
	static int32_t x251 = INT32_MIN;
	int8_t x252 = 1;
	volatile int32_t t62 = 3;

	t62 = ((x249<=x250)&(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	int64_t x254 = 61LL;
	int16_t x256 = 1;

	t63 = ((x253<=x254)&(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 1224828072362972LLU;
	int64_t x259 = 903280344LL;
	int16_t x260 = -2330;

	t64 = ((x257<=x258)&(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 232LLU;
	volatile uint8_t x262 = 1U;
	int16_t x263 = INT16_MAX;
	volatile uint32_t x264 = 13U;
	volatile int32_t t65 = 1;

	t65 = ((x261<=x262)&(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = 1U;
	int32_t t66 = 11756;

	t66 = ((x265<=x266)&(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	int64_t x272 = 6238859851500LL;

	t67 = ((x269<=x270)&(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int8_t x275 = 1;
	static int16_t x276 = INT16_MAX;
	int32_t t68 = 1;

	t68 = ((x273<=x274)&(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -5;
	int32_t x278 = -1;
	int32_t t69 = 1;

	t69 = ((x277<=x278)&(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 1;
	static volatile uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 161;

	t70 = ((x281<=x282)&(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = 6527;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t71 = -9;

	t71 = ((x285<=x286)&(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	static int64_t x291 = -1LL;
	int16_t x292 = -43;
	int32_t t72 = 58;

	t72 = ((x289<=x290)&(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	static uint64_t x295 = 5107822LLU;
	int16_t x296 = INT16_MIN;
	static int32_t t73 = 228;

	t73 = ((x293<=x294)&(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 0LLU;
	uint8_t x299 = 5U;
	volatile int64_t x300 = 8LL;
	int32_t t74 = -1072248314;

	t74 = ((x297<=x298)&(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	uint32_t x302 = 123U;
	int16_t x303 = INT16_MAX;
	int16_t x304 = -1;
	volatile int32_t t75 = -24040788;

	t75 = ((x301<=x302)&(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = 105140104U;
	volatile int64_t x307 = -1942484751899LL;
	volatile uint8_t x308 = 43U;
	int32_t t76 = -217;

	t76 = ((x305<=x306)&(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x310 = -1;
	int8_t x312 = 15;

	t77 = ((x309<=x310)&(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 8U;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -1LL;
	uint8_t x316 = UINT8_MAX;

	t78 = ((x313<=x314)&(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = -1;
	int16_t x318 = INT16_MAX;
	static int8_t x319 = INT8_MIN;
	int32_t x320 = -15;

	t79 = ((x317<=x318)&(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 49;
	static uint64_t x322 = 10861960614374LLU;
	static volatile uint32_t x323 = 8U;
	static volatile uint32_t x324 = 307543U;
	int32_t t80 = 14003593;

	t80 = ((x321<=x322)&(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int64_t x328 = -1LL;
	static volatile int32_t t81 = -668399075;

	t81 = ((x325<=x326)&(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 3U;
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = 123537971839248813LLU;
	uint64_t x332 = 57491033614522168LLU;

	t82 = ((x329<=x330)&(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	volatile int32_t t83 = 38555492;

	t83 = ((x333<=x334)&(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x338 = UINT64_MAX;
	static int32_t x339 = INT32_MIN;
	uint8_t x340 = UINT8_MAX;

	t84 = ((x337<=x338)&(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = 2458LLU;
	int32_t x343 = -1;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t85 = -1863120;

	t85 = ((x341<=x342)&(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 43447147546102100LL;
	uint16_t x346 = 0U;
	int32_t t86 = -7;

	t86 = ((x345<=x346)&(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	uint64_t x350 = 496LLU;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 35;

	t87 = ((x349<=x350)&(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x354 = UINT32_MAX;
	int32_t x355 = INT32_MAX;
	volatile int32_t t88 = -450980787;

	t88 = ((x353<=x354)&(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x359 = UINT64_MAX;
	volatile int32_t t89 = 7;

	t89 = ((x357<=x358)&(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -177;
	int32_t x364 = INT32_MIN;

	t90 = ((x361<=x362)&(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = 25198LL;
	int16_t x368 = 429;
	int32_t t91 = -254;

	t91 = ((x365<=x366)&(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x370 = UINT64_MAX;
	uint16_t x371 = UINT16_MAX;
	static volatile int32_t x372 = -5;
	volatile int32_t t92 = -1;

	t92 = ((x369<=x370)&(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x375 = -2;
	uint64_t x376 = UINT64_MAX;
	int32_t t93 = 1;

	t93 = ((x373<=x374)&(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = 5;
	int32_t x380 = -1;

	t94 = ((x377<=x378)&(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	static int64_t x384 = -1LL;
	int32_t t95 = -1455;

	t95 = ((x381<=x382)&(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	static int8_t x386 = -1;
	uint16_t x387 = 26U;
	int32_t t96 = -26452;

	t96 = ((x385<=x386)&(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 3;
	volatile int64_t x390 = -1LL;
	int8_t x391 = 0;
	uint8_t x392 = 20U;
	volatile int32_t t97 = -16022;

	t97 = ((x389<=x390)&(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	static int32_t t98 = 1;

	t98 = ((x393<=x394)&(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 490U;
	int8_t x399 = -1;
	static int16_t x400 = 15;

	t99 = ((x397<=x398)&(x399<x400));

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

