#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 1401;
volatile uint8_t x7 = 67U;
int32_t x11 = INT32_MIN;
static int64_t x14 = -2927272969604995LL;
int16_t x17 = -1;
uint8_t x20 = 12U;
volatile int32_t t5 = 72707;
int32_t x26 = INT32_MIN;
uint8_t x27 = UINT8_MAX;
int8_t x31 = INT8_MAX;
uint64_t x32 = 313924936111LLU;
int32_t x42 = -20;
volatile int16_t x43 = INT16_MAX;
int32_t t10 = -161279;
static volatile int64_t x47 = INT64_MIN;
volatile uint64_t x48 = UINT64_MAX;
volatile int32_t x51 = -1;
volatile int32_t t12 = 78;
int64_t x65 = INT64_MIN;
int64_t x69 = -1268345549LL;
uint16_t x70 = UINT16_MAX;
uint32_t x73 = 370145U;
volatile int32_t t18 = 10;
uint32_t x78 = 123U;
static int16_t x80 = -1;
int16_t x81 = INT16_MIN;
uint32_t x84 = 1825532U;
volatile int8_t x90 = -1;
int64_t x96 = INT64_MIN;
int32_t x97 = -1;
volatile int32_t t24 = -125809;
uint8_t x102 = 0U;
uint16_t x113 = UINT16_MAX;
volatile int16_t x115 = -7;
volatile int32_t t28 = 5408;
int64_t x118 = INT64_MAX;
volatile int32_t t30 = 495651;
static uint32_t x125 = 1575311U;
int16_t x138 = INT16_MIN;
volatile int32_t x139 = INT32_MAX;
int32_t x140 = INT32_MAX;
static int32_t t34 = -1035990388;
static volatile int32_t t36 = -58638593;
volatile int32_t t38 = 0;
uint16_t x157 = UINT16_MAX;
int32_t t40 = -197267;
static int8_t x168 = -1;
volatile int16_t x171 = INT16_MIN;
int32_t x176 = -1445978;
int8_t x178 = INT8_MIN;
int32_t x183 = INT32_MAX;
int8_t x186 = 0;
uint64_t x190 = UINT64_MAX;
uint32_t x191 = 5247274U;
int8_t x192 = -1;
int8_t x198 = 0;
int8_t x204 = INT8_MIN;
volatile int64_t x205 = -1LL;
volatile uint32_t x207 = 4U;
int32_t t51 = 2;
int32_t x209 = -56358;
int32_t t52 = -26;
volatile int8_t x217 = -13;
int32_t x222 = 526631020;
int64_t x231 = -491288132046030LL;
static int32_t x237 = -1;
int32_t x241 = INT32_MIN;
volatile int8_t x260 = -1;
volatile int32_t t64 = 3;
uint16_t x261 = 3U;
static int64_t x262 = -1LL;
static uint32_t x265 = 214496U;
int32_t x270 = INT32_MAX;
static int16_t x271 = INT16_MIN;
static int32_t x277 = INT32_MIN;
volatile int32_t x287 = INT32_MAX;
int64_t x294 = INT64_MAX;
int8_t x297 = 2;
uint64_t x304 = 460521561251LLU;
uint16_t x306 = 25U;
volatile uint64_t x307 = UINT64_MAX;
volatile int32_t t76 = -59682;
int8_t x312 = -23;
volatile int32_t t77 = 118696;
int32_t x313 = INT32_MAX;
static int64_t x323 = INT64_MAX;
int32_t t80 = -1011099;
uint8_t x332 = 126U;
volatile int32_t t82 = 138412176;
int64_t x341 = -3006224856693150889LL;
static int16_t x343 = INT16_MIN;
int32_t t83 = -4913;
int16_t x347 = 788;
volatile int32_t x348 = -25638113;
uint32_t x355 = 37108U;
int64_t x370 = -1LL;
volatile uint16_t x373 = UINT16_MAX;
uint8_t x374 = 27U;
volatile int16_t x383 = INT16_MIN;
int32_t t93 = 10;
static uint16_t x391 = 4407U;
volatile int16_t x404 = -86;
static int64_t x405 = -12897644196LL;
static int32_t x406 = -505;
volatile uint16_t x407 = 7U;
static volatile uint8_t x411 = UINT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 722U;
	uint64_t x2 = 4340213LLU;
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MIN;

	t0 = (x1<=((x2==x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 844631044;
	uint64_t x6 = 1LLU;
	uint16_t x8 = 3U;
	int32_t t1 = 17082;

	t1 = (x5<=((x6==x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int32_t x12 = -1;
	static int32_t t2 = -378;

	t2 = (x9<=((x10==x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int16_t x15 = -1;
	static int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = 942656;

	t3 = (x13<=((x14==x15)/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	static int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -687;

	t4 = (x17<=((x18==x19)/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -6;
	int8_t x22 = 2;
	uint64_t x23 = UINT64_MAX;
	uint8_t x24 = 13U;

	t5 = (x21<=((x22==x23)/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -78;

	t6 = (x25<=((x26==x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int16_t x30 = INT16_MIN;
	int32_t t7 = -511;

	t7 = (x29<=((x30==x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	int8_t x34 = -1;
	int64_t x35 = INT64_MIN;
	uint8_t x36 = 37U;
	static volatile int32_t t8 = -162;

	t8 = (x33<=((x34==x35)/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile uint16_t x38 = 267U;
	static volatile uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -7920;

	t9 = (x37<=((x38==x39)/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static uint32_t x44 = 59569U;

	t10 = (x41<=((x42==x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -4;
	static int32_t x46 = -31711257;
	static volatile int32_t t11 = -248699;

	t11 = (x45<=((x46==x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -4;
	int64_t x50 = INT64_MIN;
	int64_t x52 = -1LL;

	t12 = (x49<=((x50==x51)/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MAX;
	int16_t x56 = 53;
	volatile int32_t t13 = -48757962;

	t13 = (x53<=((x54==x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	volatile uint32_t x59 = UINT32_MAX;
	static uint64_t x60 = 49LLU;
	static int32_t t14 = -203145;

	t14 = (x57<=((x58==x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint32_t x62 = 2378349U;
	int16_t x63 = -216;
	static volatile int64_t x64 = 177262LL;
	volatile int32_t t15 = 39339;

	t15 = (x61<=((x62==x63)/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = -1LL;
	int16_t x67 = -1;
	static int64_t x68 = INT64_MAX;
	int32_t t16 = -11061858;

	t16 = (x65<=((x66==x67)/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x71 = 510;
	static uint32_t x72 = 11U;
	int32_t t17 = 136816;

	t17 = (x69<=((x70==x71)/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	int64_t x76 = -1LL;

	t18 = (x73<=((x74==x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 44U;
	int8_t x79 = -1;
	static volatile int32_t t19 = -10;

	t19 = (x77<=((x78==x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MAX;
	volatile uint8_t x83 = 23U;
	volatile int32_t t20 = 92;

	t20 = (x81<=((x82==x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 17593;
	int32_t x86 = -1544;
	static uint32_t x87 = UINT32_MAX;
	uint32_t x88 = UINT32_MAX;
	static volatile int32_t t21 = 3669;

	t21 = (x85<=((x86==x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 90806U;
	uint8_t x91 = 1U;
	volatile int8_t x92 = -1;
	volatile int32_t t22 = 684924276;

	t22 = (x89<=((x90==x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int32_t x94 = -431203;
	volatile int8_t x95 = 0;
	int32_t t23 = 17214;

	t23 = (x93<=((x94==x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	uint8_t x99 = 15U;
	volatile uint64_t x100 = 106998LLU;

	t24 = (x97<=((x98==x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	static int16_t x104 = -1;
	int32_t t25 = -2138;

	t25 = (x101<=((x102==x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -51;
	static int8_t x106 = INT8_MIN;
	static int32_t x107 = -1;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -19081123;

	t26 = (x105<=((x106==x107)/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -1LL;
	int16_t x110 = -1;
	int16_t x111 = 9;
	int64_t x112 = -1LL;
	volatile int32_t t27 = -32648;

	t27 = (x109<=((x110==x111)/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 1823073456LLU;
	int64_t x116 = INT64_MIN;

	t28 = (x113<=((x114==x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 101U;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = -1;
	int32_t t29 = -1;

	t29 = (x117<=((x118==x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	static int8_t x122 = 1;
	int16_t x123 = INT16_MAX;
	int8_t x124 = INT8_MIN;

	t30 = (x121<=((x122==x123)/x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x126 = 30399838U;
	static uint64_t x127 = 418LLU;
	volatile uint64_t x128 = UINT64_MAX;
	int32_t t31 = -990405256;

	t31 = (x125<=((x126==x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int16_t x130 = INT16_MIN;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t x132 = INT32_MIN;
	int32_t t32 = 57163779;

	t32 = (x129<=((x130==x131)/x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 39;

	t33 = (x133<=((x134==x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;

	t34 = (x137<=((x138==x139)/x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static volatile uint32_t x142 = 46864140U;
	static volatile int64_t x143 = -1LL;
	uint8_t x144 = 16U;
	int32_t t35 = 3377767;

	t35 = (x141<=((x142==x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	static volatile int64_t x146 = -1328572LL;
	static int64_t x147 = INT64_MAX;
	int16_t x148 = 12138;

	t36 = (x145<=((x146==x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x149 = 879972U;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 27410U;
	volatile int32_t x152 = -1;
	volatile int32_t t37 = -163884918;

	t37 = (x149<=((x150==x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 4U;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = 34U;
	uint64_t x156 = UINT64_MAX;

	t38 = (x153<=((x154==x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -291017;

	t39 = (x157<=((x158==x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 696U;
	uint8_t x162 = UINT8_MAX;
	static int64_t x163 = 17275905918283LL;
	uint16_t x164 = 1U;

	t40 = (x161<=((x162==x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	uint64_t x166 = 5161088456526LLU;
	static uint8_t x167 = 1U;
	volatile int32_t t41 = -828500008;

	t41 = (x165<=((x166==x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	static volatile uint16_t x172 = 6845U;
	int32_t t42 = -50;

	t42 = (x169<=((x170==x171)/x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x174 = INT64_MAX;
	volatile int32_t x175 = -1;
	static volatile int32_t t43 = -93096;

	t43 = (x173<=((x174==x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int32_t x179 = -1;
	uint32_t x180 = 58996U;
	volatile int32_t t44 = -30957;

	t44 = (x177<=((x178==x179)/x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 1;
	int16_t x182 = -1;
	volatile int64_t x184 = 129563870302LL;
	volatile int32_t t45 = -2;

	t45 = (x181<=((x182==x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -1;
	uint32_t x187 = 2913916U;
	uint16_t x188 = 103U;
	volatile int32_t t46 = 227156749;

	t46 = (x185<=((x186==x187)/x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -2;
	static int32_t t47 = 62502493;

	t47 = (x189<=((x190==x191)/x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = -1;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = 150U;
	int32_t t48 = 3901352;

	t48 = (x193<=((x194==x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 6U;
	volatile int64_t x199 = -1LL;
	int8_t x200 = 1;
	volatile int32_t t49 = -7;

	t49 = (x197<=((x198==x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint8_t x202 = 0U;
	volatile uint16_t x203 = 25939U;
	volatile int32_t t50 = 100976;

	t50 = (x201<=((x202==x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x206 = INT16_MIN;
	int32_t x208 = INT32_MIN;

	t51 = (x205<=((x206==x207)/x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MAX;
	volatile int8_t x211 = -1;
	int16_t x212 = 56;

	t52 = (x209<=((x210==x211)/x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = 0;
	uint64_t x215 = 211165866LLU;
	uint32_t x216 = 2U;
	int32_t t53 = -523066193;

	t53 = (x213<=((x214==x215)/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	uint8_t x219 = 31U;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = -236493551;

	t54 = (x217<=((x218==x219)/x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = 12536521;

	t55 = (x221<=((x222==x223)/x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 387598155997571975LLU;
	static int32_t x226 = INT32_MIN;
	volatile int16_t x227 = -35;
	int16_t x228 = -1;
	volatile int32_t t56 = 163;

	t56 = (x225<=((x226==x227)/x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = -1;
	uint64_t x232 = 23198459918089297LLU;
	int32_t t57 = -531017312;

	t57 = (x229<=((x230==x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MAX;
	int64_t x235 = -1005144305LL;
	volatile int16_t x236 = INT16_MAX;
	int32_t t58 = -60447382;

	t58 = (x233<=((x234==x235)/x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	static uint32_t x239 = 124027720U;
	int8_t x240 = -1;
	volatile int32_t t59 = 517;

	t59 = (x237<=((x238==x239)/x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 46U;
	int32_t x243 = -1;
	static uint16_t x244 = 3U;
	int32_t t60 = 4583;

	t60 = (x241<=((x242==x243)/x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -10826;
	volatile uint64_t x246 = 36477399LLU;
	uint64_t x247 = 14480608905LLU;
	int64_t x248 = -1LL;
	static volatile int32_t t61 = -286498280;

	t61 = (x245<=((x246==x247)/x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 6U;
	int8_t x251 = 19;
	static volatile int8_t x252 = INT8_MAX;
	int32_t t62 = -4648252;

	t62 = (x249<=((x250==x251)/x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	volatile int64_t x254 = 22312LL;
	int32_t x255 = -1;
	uint64_t x256 = 364131518628LLU;
	int32_t t63 = -1108;

	t63 = (x253<=((x254==x255)/x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile uint32_t x258 = UINT32_MAX;
	volatile uint32_t x259 = 220U;

	t64 = (x257<=((x258==x259)/x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = 10277;
	uint8_t x264 = 90U;
	int32_t t65 = 6;

	t65 = (x261<=((x262==x263)/x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x266 = UINT64_MAX;
	static volatile int32_t x267 = 531226;
	static uint32_t x268 = 90283147U;
	volatile int32_t t66 = -240;

	t66 = (x265<=((x266==x267)/x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 15890U;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t67 = 8166;

	t67 = (x269<=((x270==x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x274 = -1LL;
	volatile uint64_t x275 = UINT64_MAX;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = 4047248;

	t68 = (x273<=((x274==x275)/x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x278 = 829867148056943LLU;
	int32_t x279 = -1;
	static int32_t x280 = INT32_MAX;
	static int32_t t69 = 79;

	t69 = (x277<=((x278==x279)/x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -728828;
	int16_t x282 = INT16_MIN;
	uint16_t x283 = UINT16_MAX;
	uint64_t x284 = UINT64_MAX;
	int32_t t70 = 1;

	t70 = (x281<=((x282==x283)/x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	volatile int8_t x286 = -2;
	static uint32_t x288 = 288028U;
	static int32_t t71 = -5572855;

	t71 = (x285<=((x286==x287)/x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MAX;
	uint32_t x291 = UINT32_MAX;
	static volatile int8_t x292 = 1;
	volatile int32_t t72 = -117;

	t72 = (x289<=((x290==x291)/x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 117541042LLU;
	uint32_t x295 = UINT32_MAX;
	volatile uint16_t x296 = 581U;
	int32_t t73 = 214318704;

	t73 = (x293<=((x294==x295)/x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x298 = 785039U;
	volatile int64_t x299 = -1LL;
	volatile int32_t x300 = -7781;
	volatile int32_t t74 = 39;

	t74 = (x297<=((x298==x299)/x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 19;
	uint16_t x302 = UINT16_MAX;
	volatile int16_t x303 = INT16_MIN;
	int32_t t75 = 48658;

	t75 = (x301<=((x302==x303)/x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -4731;
	int32_t x308 = INT32_MIN;

	t76 = (x305<=((x306==x307)/x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = -1;
	volatile uint32_t x311 = 375791369U;

	t77 = (x309<=((x310==x311)/x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x314 = 48U;
	volatile uint32_t x315 = UINT32_MAX;
	int8_t x316 = -1;
	int32_t t78 = -509045;

	t78 = (x313<=((x314==x315)/x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	volatile int64_t x322 = -1002967237895199724LL;
	static int8_t x324 = 44;
	volatile int32_t t79 = 25;

	t79 = (x321<=((x322==x323)/x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x325 = -1;
	int8_t x326 = 16;
	static uint8_t x327 = 1U;
	int8_t x328 = INT8_MIN;

	t80 = (x325<=((x326==x327)/x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = UINT8_MAX;
	static uint16_t x330 = UINT16_MAX;
	int8_t x331 = -1;
	int32_t t81 = 0;

	t81 = (x329<=((x330==x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x337 = 1;
	uint8_t x338 = UINT8_MAX;
	static int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;

	t82 = (x337<=((x338==x339)/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x342 = UINT8_MAX;
	uint16_t x344 = 283U;

	t83 = (x341<=((x342==x343)/x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -1;
	static uint16_t x346 = 8691U;
	volatile int32_t t84 = 1;

	t84 = (x345<=((x346==x347)/x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x353 = INT16_MIN;
	static int32_t x354 = INT32_MIN;
	static int64_t x356 = INT64_MIN;
	static int32_t t85 = 12399851;

	t85 = (x353<=((x354==x355)/x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	int16_t x359 = -14;
	volatile int32_t x360 = -1;
	int32_t t86 = -5370156;

	t86 = (x357<=((x358==x359)/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MAX;
	uint64_t x363 = 46395586LLU;
	uint32_t x364 = UINT32_MAX;
	int32_t t87 = 311353196;

	t87 = (x361<=((x362==x363)/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint32_t x366 = UINT32_MAX;
	static volatile int32_t x367 = INT32_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t88 = -61;

	t88 = (x365<=((x366==x367)/x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x369 = 13742495461LLU;
	int32_t x371 = INT32_MAX;
	volatile uint32_t x372 = 49403893U;
	int32_t t89 = -34772483;

	t89 = (x369<=((x370==x371)/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x375 = -1LL;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t90 = 116595379;

	t90 = (x373<=((x374==x375)/x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -1787857809306160LL;
	int32_t t91 = 1;

	t91 = (x377<=((x378==x379)/x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MAX;
	int16_t x384 = -1;
	volatile int32_t t92 = -510;

	t92 = (x381<=((x382==x383)/x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = 423523U;
	int32_t x387 = INT32_MAX;
	static uint64_t x388 = UINT64_MAX;

	t93 = (x385<=((x386==x387)/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = 0LL;
	static int16_t x390 = 14;
	int32_t x392 = INT32_MIN;
	volatile int32_t t94 = 117434;

	t94 = (x389<=((x390==x391)/x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MAX;
	volatile uint32_t x394 = 250828U;
	static volatile uint32_t x395 = 9159117U;
	int16_t x396 = 2569;
	int32_t t95 = -244330019;

	t95 = (x393<=((x394==x395)/x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x397 = INT16_MAX;
	int64_t x398 = -1LL;
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = INT64_MIN;
	int32_t t96 = -856;

	t96 = (x397<=((x398==x399)/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 11U;
	int16_t x402 = INT16_MAX;
	static int8_t x403 = -2;
	int32_t t97 = 224180285;

	t97 = (x401<=((x402==x403)/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x408 = UINT16_MAX;
	volatile int32_t t98 = -1000644663;

	t98 = (x405<=((x406==x407)/x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 3417LLU;
	volatile int64_t x410 = INT64_MAX;
	uint32_t x412 = 98U;
	volatile int32_t t99 = 48;

	t99 = (x409<=((x410==x411)/x412));

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

