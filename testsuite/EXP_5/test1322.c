#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
volatile int32_t t1 = 3;
static volatile int32_t t2 = 7371;
int16_t x17 = INT16_MIN;
int64_t x22 = INT64_MIN;
int32_t t5 = -2;
int32_t x34 = 720;
static int8_t x35 = 0;
int8_t x36 = 45;
int32_t t8 = -20;
volatile int32_t x43 = 7058712;
static volatile int32_t t10 = 441363498;
uint32_t x52 = 1324571902U;
uint8_t x53 = 5U;
int16_t x56 = -9860;
static uint8_t x58 = 81U;
static uint32_t x62 = 1U;
volatile int32_t t15 = 510538065;
static uint16_t x69 = 117U;
int8_t x71 = INT8_MIN;
static int32_t t18 = 65030659;
int8_t x78 = -1;
uint16_t x79 = UINT16_MAX;
volatile int32_t t19 = 12209;
int8_t x91 = INT8_MIN;
int8_t x96 = 0;
int64_t x97 = -1LL;
int32_t t24 = -14;
int32_t x114 = INT32_MIN;
int32_t x115 = INT32_MIN;
static uint64_t x116 = UINT64_MAX;
static int64_t x117 = INT64_MIN;
uint16_t x123 = 2U;
int64_t x128 = 9617010355403LL;
uint32_t x131 = 7834U;
int32_t x138 = INT32_MIN;
volatile uint16_t x141 = UINT16_MAX;
int16_t x155 = 3;
int32_t t38 = -56;
int8_t x165 = 58;
uint16_t x167 = 10U;
volatile uint16_t x170 = UINT16_MAX;
int8_t x171 = -3;
uint32_t x175 = 759768U;
int32_t x177 = INT32_MAX;
volatile uint8_t x188 = 67U;
uint8_t x191 = 112U;
static uint32_t x197 = 4U;
static int32_t t49 = 416679;
volatile int64_t x203 = INT64_MIN;
volatile int32_t t50 = 360551;
int8_t x206 = INT8_MIN;
int32_t t52 = -6926;
int16_t x220 = INT16_MAX;
static int32_t x221 = -1;
int32_t x226 = INT32_MAX;
int32_t x231 = INT32_MIN;
int32_t x235 = -1;
static uint64_t x237 = UINT64_MAX;
static int32_t x244 = -1;
int32_t x247 = INT32_MIN;
int32_t t61 = 1;
volatile int32_t x251 = -1;
int64_t x269 = INT64_MIN;
volatile int64_t x272 = INT64_MIN;
volatile uint16_t x273 = 0U;
volatile int32_t t71 = -271789;
uint16_t x290 = 4578U;
int16_t x300 = -1440;
uint32_t x304 = 1856570U;
uint8_t x307 = UINT8_MAX;
static volatile uint16_t x310 = 3349U;
static uint16_t x311 = 8832U;
static volatile int8_t x318 = INT8_MAX;
volatile int32_t t79 = -23595;
uint32_t x321 = UINT32_MAX;
int16_t x323 = 88;
static int16_t x326 = -1;
int32_t x329 = -24170;
int32_t x330 = 845858;
int8_t x333 = INT8_MIN;
int16_t x338 = -1;
uint32_t x340 = 1025647687U;
int32_t x344 = -1202408;
int16_t x347 = -1;
volatile int16_t x350 = -1;
volatile int32_t t88 = -33231777;
int16_t x358 = INT16_MIN;
int64_t x378 = -1LL;
uint8_t x385 = UINT8_MAX;
int8_t x386 = -1;
static volatile int32_t t96 = -9083899;
static uint32_t x393 = 45U;
volatile uint32_t x396 = UINT32_MAX;
volatile int32_t t98 = -241783;
volatile int32_t t99 = -236909829;


void f0(void) {
	uint64_t x1 = 30505561973474580LLU;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = 1990054480U;
	static int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -21920644;

	t0 = (x1<((x2==x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 5;
	volatile int16_t x7 = 93;
	uint8_t x8 = UINT8_MAX;

	t1 = (x5<((x6==x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MAX;
	int64_t x11 = -946LL;
	static int16_t x12 = -1;

	t2 = (x9<((x10==x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	static int16_t x14 = INT16_MIN;
	volatile uint8_t x15 = 18U;
	uint8_t x16 = 51U;
	int32_t t3 = 105177327;

	t3 = (x13<((x14==x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = 16145719;
	int64_t x19 = INT64_MAX;
	static int16_t x20 = -235;
	int32_t t4 = 32830360;

	t4 = (x17<((x18==x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = INT8_MIN;

	t5 = (x21<((x22==x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int64_t x26 = -1LL;
	int8_t x27 = -1;
	volatile uint8_t x28 = 1U;
	int32_t t6 = -769038;

	t6 = (x25<((x26==x27)&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = UINT8_MAX;
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	volatile int32_t t7 = -10804;

	t7 = (x29<((x30==x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = 1177902U;

	t8 = (x33<((x34==x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 13928652881587895LLU;
	volatile int32_t t9 = 4107;

	t9 = (x37<((x38==x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 0U;
	volatile int16_t x42 = -4968;
	uint16_t x44 = UINT16_MAX;

	t10 = (x41<((x42==x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 92;
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	int32_t x48 = -1;
	volatile int32_t t11 = 138164126;

	t11 = (x45<((x46==x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int8_t x50 = INT8_MIN;
	uint32_t x51 = 150945U;
	volatile int32_t t12 = -4;

	t12 = (x49<((x50==x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = UINT16_MAX;
	volatile int32_t t13 = -11371;

	t13 = (x53<((x54==x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	static uint64_t x59 = UINT64_MAX;
	volatile int32_t x60 = 22;
	int32_t t14 = -470889;

	t14 = (x57<((x58==x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint16_t x63 = 96U;
	static int8_t x64 = -1;

	t15 = (x61<((x62==x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int32_t x66 = -1;
	volatile int32_t x67 = -30;
	static volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = -315;

	t16 = (x65<((x66==x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 849LLU;
	uint16_t x72 = 0U;
	volatile int32_t t17 = -243363;

	t17 = (x69<((x70==x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	volatile uint32_t x74 = 211U;
	static int32_t x75 = -1;
	int16_t x76 = INT16_MIN;

	t18 = (x73<((x74==x75)&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 5U;
	static int8_t x80 = -1;

	t19 = (x77<((x78==x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	volatile int16_t x82 = INT16_MAX;
	int16_t x83 = -1;
	volatile int64_t x84 = 1423LL;
	int32_t t20 = -952;

	t20 = (x81<((x82==x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	uint32_t x86 = 12571U;
	static volatile int8_t x87 = -5;
	int8_t x88 = -2;
	int32_t t21 = -332328;

	t21 = (x85<((x86==x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x89 = 0U;
	int8_t x90 = INT8_MAX;
	int64_t x92 = -2LL;
	volatile int32_t t22 = 6;

	t22 = (x89<((x90==x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	volatile int16_t x94 = 9;
	volatile uint64_t x95 = 309839495961608495LLU;
	volatile int32_t t23 = -7258;

	t23 = (x93<((x94==x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MAX;
	int32_t x99 = INT32_MIN;
	static int16_t x100 = INT16_MIN;

	t24 = (x97<((x98==x99)&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 28U;
	volatile uint8_t x102 = 7U;
	volatile int64_t x103 = 93421LL;
	static volatile int64_t x104 = 10296LL;
	static volatile int32_t t25 = -45000595;

	t25 = (x101<((x102==x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = 71894367;
	int64_t x107 = -1LL;
	int8_t x108 = -1;
	volatile int32_t t26 = -47305200;

	t26 = (x105<((x106==x107)&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 46;
	uint8_t x110 = 5U;
	uint8_t x111 = 25U;
	static int64_t x112 = INT64_MAX;
	static volatile int32_t t27 = -391767909;

	t27 = (x109<((x110==x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t t28 = 731063;

	t28 = (x113<((x114==x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	static int32_t x119 = 249;
	volatile uint32_t x120 = 33736U;
	volatile int32_t t29 = 1;

	t29 = (x117<((x118==x119)&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 28271397324996LLU;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 874920;

	t30 = (x121<((x122==x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -2723366;
	int32_t x126 = 2;
	uint32_t x127 = 4640511U;
	volatile int32_t t31 = -21838203;

	t31 = (x125<((x126==x127)&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 17U;
	int32_t x130 = 13892;
	int64_t x132 = -1LL;
	volatile int32_t t32 = -326517;

	t32 = (x129<((x130==x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = 0;
	static int8_t x135 = INT8_MIN;
	static int32_t x136 = 1483297;
	int32_t t33 = -26391634;

	t33 = (x133<((x134==x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	static int16_t x140 = -1;
	volatile int32_t t34 = -26;

	t34 = (x137<((x138==x139)&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x142 = -1;
	uint64_t x143 = 98667177693051LLU;
	int16_t x144 = -420;
	int32_t t35 = -30488;

	t35 = (x141<((x142==x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 85U;
	int32_t x146 = INT32_MAX;
	int8_t x147 = 5;
	int16_t x148 = INT16_MAX;
	static int32_t t36 = -47;

	t36 = (x145<((x146==x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int8_t x150 = INT8_MAX;
	static volatile int64_t x151 = INT64_MIN;
	int8_t x152 = -54;
	volatile int32_t t37 = 412;

	t37 = (x149<((x150==x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MIN;
	uint8_t x156 = 4U;

	t38 = (x153<((x154==x155)&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	static int8_t x160 = -3;
	int32_t t39 = -691;

	t39 = (x157<((x158==x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -276793LL;
	uint32_t x162 = UINT32_MAX;
	volatile uint32_t x163 = UINT32_MAX;
	int8_t x164 = 15;
	static int32_t t40 = -19867482;

	t40 = (x161<((x162==x163)&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MIN;
	uint16_t x168 = 41U;
	static volatile int32_t t41 = 399558645;

	t41 = (x165<((x166==x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = UINT8_MAX;
	int32_t x172 = -1;
	volatile int32_t t42 = 10;

	t42 = (x169<((x170==x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 3U;
	volatile uint64_t x174 = 8LLU;
	uint8_t x176 = 92U;
	int32_t t43 = 137;

	t43 = (x173<((x174==x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;
	int32_t t44 = 4441;

	t44 = (x177<((x178==x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MAX;
	int64_t x182 = -2LL;
	int8_t x183 = -1;
	int16_t x184 = -593;
	volatile int32_t t45 = -1;

	t45 = (x181<((x182==x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 4864U;
	int64_t x186 = 59LL;
	int32_t x187 = INT32_MIN;
	int32_t t46 = -61820;

	t46 = (x185<((x186==x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 1038793660U;
	uint16_t x190 = 1U;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -11372;

	t47 = (x189<((x190==x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int16_t x194 = 109;
	int64_t x195 = INT64_MIN;
	volatile int64_t x196 = -1LL;
	static int32_t t48 = -743104029;

	t48 = (x193<((x194==x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x198 = INT8_MIN;
	int32_t x199 = 292;
	static int64_t x200 = INT64_MIN;

	t49 = (x197<((x198==x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 242363673936670LLU;
	int32_t x202 = INT32_MAX;
	uint32_t x204 = 974166U;

	t50 = (x201<((x202==x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = 30062;
	volatile int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -1232;

	t51 = (x205<((x206==x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	int16_t x212 = INT16_MIN;

	t52 = (x209<((x210==x211)&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 21U;
	uint8_t x214 = 45U;
	uint16_t x215 = 1U;
	static int32_t x216 = -1;
	int32_t t53 = 921;

	t53 = (x213<((x214==x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	static int64_t x218 = 26991LL;
	volatile uint64_t x219 = 34769514262844015LLU;
	static int32_t t54 = -5653;

	t54 = (x217<((x218==x219)&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	static int64_t x224 = -4339455716LL;
	int32_t t55 = -1459;

	t55 = (x221<((x222==x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 1410;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = INT16_MIN;
	int32_t t56 = -1231;

	t56 = (x225<((x226==x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int32_t x230 = -1;
	volatile uint16_t x232 = 24U;
	int32_t t57 = 10059466;

	t57 = (x229<((x230==x231)&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	uint16_t x234 = 3U;
	uint8_t x236 = UINT8_MAX;
	static int32_t t58 = -663160859;

	t58 = (x233<((x234==x235)&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = -1815660108143998LL;
	int8_t x239 = -1;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 1;

	t59 = (x237<((x238==x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -14;
	int32_t x242 = INT32_MAX;
	uint64_t x243 = 144456LLU;
	int32_t t60 = -1;

	t60 = (x241<((x242==x243)&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static uint64_t x246 = UINT64_MAX;
	int32_t x248 = INT32_MIN;

	t61 = (x245<((x246==x247)&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int64_t x250 = 129901980029350427LL;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 2;

	t62 = (x249<((x250==x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 2U;
	volatile int8_t x254 = 5;
	uint8_t x255 = 8U;
	int16_t x256 = INT16_MAX;
	int32_t t63 = 1;

	t63 = (x253<((x254==x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 493687764355LLU;
	uint32_t x258 = 416865367U;
	int16_t x259 = 20;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -370070550;

	t64 = (x257<((x258==x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = 418;
	int8_t x262 = 8;
	int64_t x263 = INT64_MAX;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = 800;

	t65 = (x261<((x262==x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static volatile int16_t x266 = INT16_MIN;
	uint64_t x267 = 4127LLU;
	uint8_t x268 = 0U;
	static volatile int32_t t66 = -465857;

	t66 = (x265<((x266==x267)&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = -59;
	volatile int64_t x271 = INT64_MIN;
	volatile int32_t t67 = 11316;

	t67 = (x269<((x270==x271)&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 1523773247LL;
	int64_t x275 = -301072738528514LL;
	static uint8_t x276 = 25U;
	volatile int32_t t68 = 806067940;

	t68 = (x273<((x274==x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x278 = 1;
	uint64_t x279 = 48254090227859LLU;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -146;

	t69 = (x277<((x278==x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x281 = UINT16_MAX;
	static int8_t x282 = INT8_MAX;
	uint64_t x283 = 496458191LLU;
	int8_t x284 = -8;
	volatile int32_t t70 = -8;

	t70 = (x281<((x282==x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	int16_t x286 = 901;
	uint64_t x287 = 10226532375856LLU;
	int16_t x288 = 1;

	t71 = (x285<((x286==x287)&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -7;
	int16_t x291 = -24;
	uint32_t x292 = 51046U;
	volatile int32_t t72 = -99322924;

	t72 = (x289<((x290==x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	volatile int16_t x294 = -1;
	static int32_t x295 = INT32_MAX;
	static uint8_t x296 = 0U;
	int32_t t73 = 12154;

	t73 = (x293<((x294==x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 2;
	volatile uint8_t x298 = 14U;
	static uint32_t x299 = 12U;
	volatile int32_t t74 = 21545;

	t74 = (x297<((x298==x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 299465LLU;
	uint8_t x302 = 1U;
	static int8_t x303 = 5;
	int32_t t75 = -760;

	t75 = (x301<((x302==x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static int64_t x306 = INT64_MIN;
	uint64_t x308 = 91LLU;
	volatile int32_t t76 = 4016;

	t76 = (x305<((x306==x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 2U;
	volatile int16_t x312 = INT16_MAX;
	static volatile int32_t t77 = -339110500;

	t77 = (x309<((x310==x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 15680U;
	volatile int8_t x314 = -1;
	volatile uint32_t x315 = 746518U;
	static int64_t x316 = 285343849025479LL;
	static volatile int32_t t78 = -49900586;

	t78 = (x313<((x314==x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x319 = INT16_MIN;
	static int8_t x320 = 6;

	t79 = (x317<((x318==x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = UINT32_MAX;
	int16_t x324 = -1;
	int32_t t80 = 3498630;

	t80 = (x321<((x322==x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 129LLU;
	uint8_t x327 = 37U;
	int64_t x328 = 178535305930LL;
	int32_t t81 = -145;

	t81 = (x325<((x326==x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x331 = UINT32_MAX;
	int64_t x332 = -1LL;
	volatile int32_t t82 = -7180;

	t82 = (x329<((x330==x331)&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x334 = INT8_MAX;
	int16_t x335 = -342;
	int32_t x336 = INT32_MIN;
	int32_t t83 = 30638126;

	t83 = (x333<((x334==x335)&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = UINT16_MAX;
	uint8_t x339 = 45U;
	int32_t t84 = 0;

	t84 = (x337<((x338==x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -5;
	static int32_t x342 = INT32_MAX;
	int32_t x343 = 3;
	int32_t t85 = 1052399266;

	t85 = (x341<((x342==x343)&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 161627848106LLU;
	static int32_t x346 = -2;
	uint64_t x348 = 107043462LLU;
	int32_t t86 = -4411465;

	t86 = (x345<((x346==x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int8_t x351 = 1;
	volatile uint32_t x352 = 54U;
	int32_t t87 = -11923;

	t87 = (x349<((x350==x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 12U;
	static volatile int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MAX;
	int8_t x356 = -14;

	t88 = (x353<((x354==x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	uint8_t x359 = 1U;
	static uint8_t x360 = 25U;
	volatile int32_t t89 = -7440;

	t89 = (x357<((x358==x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	static int64_t x362 = INT64_MIN;
	int32_t x363 = -509216;
	int64_t x364 = INT64_MIN;
	volatile int32_t t90 = -3081261;

	t90 = (x361<((x362==x363)&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MAX;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = -6409;
	volatile int32_t t91 = 97791311;

	t91 = (x365<((x366==x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 15354;
	volatile uint32_t x370 = UINT32_MAX;
	static int8_t x371 = 54;
	int8_t x372 = -1;
	int32_t t92 = 116292784;

	t92 = (x369<((x370==x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = 1;
	int32_t x374 = INT32_MAX;
	static int16_t x375 = -3009;
	int8_t x376 = INT8_MIN;
	int32_t t93 = 7942762;

	t93 = (x373<((x374==x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	static int32_t x379 = INT32_MIN;
	static volatile int64_t x380 = -19637250352LL;
	volatile int32_t t94 = -32756284;

	t94 = (x377<((x378==x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 1191431U;
	volatile uint32_t x382 = 8U;
	int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 10;

	t95 = (x381<((x382==x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x387 = 9052U;
	volatile uint16_t x388 = 3U;

	t96 = (x385<((x386==x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	volatile int8_t x390 = 7;
	volatile int8_t x391 = -1;
	int16_t x392 = -84;
	volatile int32_t t97 = 38831;

	t97 = (x389<((x390==x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int16_t x395 = -1;

	t98 = (x393<((x394==x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -25;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -58629586526272388LL;
	volatile uint16_t x400 = 2U;

	t99 = (x397<((x398==x399)&x400));

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

