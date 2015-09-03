#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 15U;
int16_t x10 = -1;
static int32_t x11 = INT32_MIN;
static volatile int32_t t2 = 42;
static volatile int8_t x16 = INT8_MIN;
static uint64_t x22 = UINT64_MAX;
volatile int32_t x24 = INT32_MIN;
volatile uint64_t x25 = UINT64_MAX;
volatile int32_t t6 = -140024;
int32_t x30 = -1;
uint32_t x31 = 398226U;
volatile int8_t x40 = 14;
static int32_t x42 = INT32_MIN;
int32_t t10 = -12755;
volatile int32_t t11 = -5210328;
int8_t x51 = INT8_MIN;
volatile int8_t x54 = 34;
int16_t x58 = INT16_MIN;
uint32_t x61 = UINT32_MAX;
int32_t x62 = -1;
uint8_t x71 = 36U;
int32_t t17 = -218176;
uint8_t x79 = 1U;
int64_t x81 = 1LL;
int16_t x84 = INT16_MAX;
int32_t x85 = INT32_MIN;
int32_t x86 = INT32_MIN;
static uint32_t x87 = UINT32_MAX;
int32_t x90 = INT32_MIN;
uint64_t x91 = 35400148LLU;
int8_t x92 = -1;
static int32_t x95 = INT32_MIN;
int32_t t23 = 1;
int16_t x100 = INT16_MIN;
static int64_t x102 = INT64_MIN;
int32_t t25 = 39372;
uint16_t x108 = 122U;
uint64_t x117 = 38LLU;
static uint32_t x119 = UINT32_MAX;
uint64_t x125 = 663902398820717LLU;
int32_t t31 = -1817;
int32_t x131 = INT32_MAX;
int64_t x135 = -19807799LL;
volatile uint8_t x140 = 4U;
int64_t x143 = INT64_MIN;
int16_t x144 = INT16_MIN;
volatile int8_t x149 = -1;
int8_t x155 = INT8_MIN;
int8_t x157 = INT8_MIN;
int32_t x158 = INT32_MAX;
int64_t x161 = INT64_MAX;
static int16_t x170 = 1;
uint8_t x190 = 0U;
int16_t x195 = 2;
uint16_t x197 = UINT16_MAX;
int32_t x203 = INT32_MIN;
int32_t t50 = -1022080;
volatile uint64_t x210 = UINT64_MAX;
volatile int32_t t52 = 1;
volatile int64_t x214 = -1LL;
int64_t x215 = INT64_MIN;
int16_t x221 = -521;
uint16_t x233 = UINT16_MAX;
uint8_t x240 = 0U;
int32_t x249 = INT32_MAX;
uint16_t x250 = 952U;
static int64_t x255 = INT64_MIN;
int32_t x261 = INT32_MAX;
int8_t x272 = 3;
int8_t x274 = INT8_MAX;
int16_t x280 = INT16_MAX;
int8_t x282 = INT8_MIN;
int32_t x293 = -1;
static int32_t x296 = -9;
int32_t t73 = 0;
int8_t x298 = -1;
uint8_t x305 = 1U;
volatile int32_t t76 = 1317419;
uint32_t x313 = UINT32_MAX;
volatile int32_t t78 = 2401664;
int64_t x318 = INT64_MIN;
volatile int32_t x328 = -1;
int32_t t81 = -13294;
uint32_t x330 = 43807520U;
int32_t x332 = INT32_MIN;
static int32_t x335 = 198598125;
uint8_t x339 = 80U;
volatile uint16_t x342 = 3824U;
int32_t t85 = -325442;
static uint8_t x345 = UINT8_MAX;
volatile int64_t x347 = 6660824240LL;
volatile int8_t x349 = -55;
int32_t t87 = 8387929;
static volatile int32_t x354 = -1815;
uint16_t x359 = UINT16_MAX;
volatile int32_t t89 = 76893394;
int8_t x365 = 3;
uint16_t x367 = 622U;
volatile int8_t x368 = INT8_MIN;
volatile int32_t x370 = -31901;
int8_t x373 = INT8_MIN;
static uint64_t x375 = 547983047973LLU;
int64_t x376 = INT64_MIN;
uint8_t x377 = 0U;
int16_t x378 = 144;
static int32_t x379 = INT32_MAX;
int16_t x384 = -1627;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 127020735893923240LLU;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 995178570;

	t0 = (x1<=((x2^x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int8_t x6 = 62;
	volatile uint32_t x7 = UINT32_MAX;
	int16_t x8 = -357;
	volatile int32_t t1 = -32951765;

	t1 = (x5<=((x6^x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 126710U;
	uint16_t x12 = 870U;

	t2 = (x9<=((x10^x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 10824670LLU;
	uint32_t x14 = 2487708U;
	int32_t x15 = INT32_MIN;
	volatile int32_t t3 = -2;

	t3 = (x13<=((x14^x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 9941U;
	static uint16_t x18 = 3U;
	volatile int16_t x19 = 8903;
	int16_t x20 = -4595;
	int32_t t4 = -44491;

	t4 = (x17<=((x18^x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint64_t x23 = 396745LLU;
	static int32_t t5 = -115298591;

	t5 = (x21<=((x22^x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 4U;
	int16_t x27 = -1;
	volatile uint16_t x28 = UINT16_MAX;

	t6 = (x25<=((x26^x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 8067634U;
	int8_t x32 = INT8_MAX;
	static int32_t t7 = 121;

	t7 = (x29<=((x30^x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -49;
	static volatile int32_t x34 = 1667297;
	int16_t x35 = -188;
	static volatile int32_t x36 = 8385;
	static int32_t t8 = -9;

	t8 = (x33<=((x34^x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = -1;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 1790;

	t9 = (x37<=((x38^x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x43 = -14147;
	volatile int64_t x44 = -7543158037LL;

	t10 = (x41<=((x42^x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 121661323LLU;
	static int32_t x46 = -28497583;
	int16_t x47 = -6470;
	uint8_t x48 = 27U;

	t11 = (x45<=((x46^x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x50 = 4U;
	int8_t x52 = -1;
	static volatile int32_t t12 = 3492003;

	t12 = (x49<=((x50^x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -681391440;
	int16_t x55 = -1;
	static uint32_t x56 = 166263U;
	static volatile int32_t t13 = 1;

	t13 = (x53<=((x54^x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int64_t x59 = -12LL;
	int8_t x60 = -1;
	int32_t t14 = 217346525;

	t14 = (x57<=((x58^x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x63 = INT64_MAX;
	static uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -389023871;

	t15 = (x61<=((x62^x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	int8_t x67 = 0;
	uint64_t x68 = 316112159218795LLU;
	int32_t t16 = 181;

	t16 = (x65<=((x66^x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = 176558LL;
	uint64_t x72 = 1731156001657030641LLU;

	t17 = (x69<=((x70^x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -2;
	static volatile uint32_t x74 = 2U;
	int64_t x75 = INT64_MAX;
	static int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -29736895;

	t18 = (x73<=((x74^x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int32_t x78 = INT32_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -4778;

	t19 = (x77<=((x78^x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = -1LL;
	volatile int8_t x83 = INT8_MIN;
	static int32_t t20 = 2013356;

	t20 = (x81<=((x82^x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -17354838;

	t21 = (x85<=((x86^x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 3538U;
	int32_t t22 = -1000999;

	t22 = (x89<=((x90^x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 2770477409209LL;
	uint16_t x94 = UINT16_MAX;
	uint8_t x96 = 19U;

	t23 = (x93<=((x94^x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1825U;
	static int8_t x98 = 0;
	uint32_t x99 = 395U;
	static volatile int32_t t24 = -1;

	t24 = (x97<=((x98^x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	volatile int64_t x103 = -251629139LL;
	uint8_t x104 = UINT8_MAX;

	t25 = (x101<=((x102^x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	static int32_t x106 = 6;
	int32_t x107 = -2;
	static volatile int32_t t26 = 2339806;

	t26 = (x105<=((x106^x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int8_t x110 = INT8_MIN;
	static volatile int16_t x111 = INT16_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -1;

	t27 = (x109<=((x110^x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = 1554402144U;
	uint32_t x115 = 174433U;
	uint32_t x116 = UINT32_MAX;
	static int32_t t28 = 6;

	t28 = (x113<=((x114^x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 9159LLU;
	static uint16_t x120 = 13864U;
	int32_t t29 = -2;

	t29 = (x117<=((x118^x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint8_t x122 = UINT8_MAX;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = -244379LL;
	volatile int32_t t30 = 964917;

	t30 = (x121<=((x122^x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = -1LL;
	int16_t x127 = INT16_MIN;
	static uint32_t x128 = 294446052U;

	t31 = (x125<=((x126^x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	volatile int8_t x130 = INT8_MAX;
	uint32_t x132 = UINT32_MAX;
	int32_t t32 = -329;

	t32 = (x129<=((x130^x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 57U;
	int16_t x134 = -2669;
	volatile int16_t x136 = 5794;
	volatile int32_t t33 = 5554745;

	t33 = (x133<=((x134^x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile int16_t x138 = -218;
	uint64_t x139 = 45521271207730128LLU;
	static volatile int32_t t34 = 181842;

	t34 = (x137<=((x138^x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 156;
	static int8_t x142 = -1;
	volatile int32_t t35 = -1872;

	t35 = (x141<=((x142^x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 4U;
	volatile uint16_t x146 = 5U;
	int64_t x147 = 16413859717LL;
	int16_t x148 = -1;
	static int32_t t36 = -2279905;

	t36 = (x145<=((x146^x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = 1953U;
	int8_t x151 = -7;
	uint64_t x152 = UINT64_MAX;
	int32_t t37 = 19732;

	t37 = (x149<=((x150^x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 596969U;
	int8_t x154 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -6159353;

	t38 = (x153<=((x154^x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x159 = 8;
	int32_t x160 = -1;
	volatile int32_t t39 = 77706136;

	t39 = (x157<=((x158^x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = INT8_MIN;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = -609435185;

	t40 = (x161<=((x162^x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	static volatile int16_t x166 = 26;
	volatile uint64_t x167 = 1819420207115880235LLU;
	static volatile int8_t x168 = -5;
	static volatile int32_t t41 = 299483;

	t41 = (x165<=((x166^x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	static int32_t t42 = 3114;

	t42 = (x169<=((x170^x171)<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = UINT16_MAX;
	int32_t t43 = -3548;

	t43 = (x173<=((x174^x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	static uint8_t x178 = 1U;
	volatile int8_t x179 = INT8_MIN;
	volatile int64_t x180 = INT64_MIN;
	int32_t t44 = 9160339;

	t44 = (x177<=((x178^x179)<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MAX;
	static int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int8_t x184 = -1;
	int32_t t45 = -335889748;

	t45 = (x181<=((x182^x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -15392182;
	static int32_t x186 = -648163;
	int16_t x187 = INT16_MAX;
	int64_t x188 = 101LL;
	int32_t t46 = 11256;

	t46 = (x185<=((x186^x187)<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	static int32_t x191 = 1507538;
	uint32_t x192 = 2U;
	int32_t t47 = -956;

	t47 = (x189<=((x190^x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 3U;
	int64_t x194 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t48 = 10823;

	t48 = (x193<=((x194^x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -14585;
	static volatile int32_t t49 = -1;

	t49 = (x197<=((x198^x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 88U;
	uint32_t x202 = 92329235U;
	int8_t x204 = INT8_MIN;

	t50 = (x201<=((x202^x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 4U;
	int8_t x206 = 22;
	int16_t x207 = 1;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -8558;

	t51 = (x205<=((x206^x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	uint16_t x211 = 22305U;
	static int16_t x212 = 3989;

	t52 = (x209<=((x210^x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int32_t x216 = 89;
	volatile int32_t t53 = 2017789;

	t53 = (x213<=((x214^x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = 91;
	volatile int8_t x218 = 59;
	volatile uint64_t x219 = 437LLU;
	uint16_t x220 = 3381U;
	volatile int32_t t54 = 37;

	t54 = (x217<=((x218^x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile int64_t x224 = INT64_MAX;
	int32_t t55 = 44179;

	t55 = (x221<=((x222^x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MAX;
	int32_t x227 = -1;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -6197421;

	t56 = (x225<=((x226^x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int8_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int8_t x232 = -3;
	volatile int32_t t57 = -16;

	t57 = (x229<=((x230^x231)<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = INT8_MIN;
	static volatile uint8_t x235 = UINT8_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -1725012;

	t58 = (x233<=((x234^x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -149;
	int16_t x238 = INT16_MAX;
	volatile int64_t x239 = INT64_MIN;
	int32_t t59 = 19;

	t59 = (x237<=((x238^x239)<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	volatile int64_t x242 = -3LL;
	volatile int64_t x243 = INT64_MIN;
	int16_t x244 = -6119;
	int32_t t60 = 617;

	t60 = (x241<=((x242^x243)<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 8553238104390LLU;
	int16_t x246 = INT16_MIN;
	static volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = -563;
	int32_t t61 = -434;

	t61 = (x245<=((x246^x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x251 = INT64_MAX;
	int32_t x252 = -547805047;
	volatile int32_t t62 = -108794;

	t62 = (x249<=((x250^x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint8_t x254 = 1U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 35;

	t63 = (x253<=((x254^x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int32_t x258 = -1;
	uint64_t x259 = 74LLU;
	static int8_t x260 = -1;
	volatile int32_t t64 = 57;

	t64 = (x257<=((x258^x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 28U;
	static int8_t x263 = INT8_MAX;
	uint8_t x264 = 86U;
	volatile int32_t t65 = 15848763;

	t65 = (x261<=((x262^x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	static volatile int64_t x266 = 51174084170130372LL;
	int32_t x267 = -3;
	int32_t x268 = -1;
	int32_t t66 = 100363079;

	t66 = (x265<=((x266^x267)<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 1857619659222LLU;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	int32_t t67 = -197;

	t67 = (x269<=((x270^x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int32_t x275 = -1;
	uint16_t x276 = 25U;
	volatile int32_t t68 = 9;

	t68 = (x273<=((x274^x275)<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -158429LL;
	static uint32_t x278 = UINT32_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t t69 = -6021;

	t69 = (x277<=((x278^x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 10937;
	volatile int8_t x283 = -1;
	int8_t x284 = -1;
	volatile int32_t t70 = 89501033;

	t70 = (x281<=((x282^x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 6U;
	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MAX;
	static int8_t x288 = 30;
	volatile int32_t t71 = 12;

	t71 = (x285<=((x286^x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	uint32_t x290 = UINT32_MAX;
	static uint64_t x291 = 1358204583472LLU;
	static int16_t x292 = INT16_MIN;
	int32_t t72 = 103762;

	t72 = (x289<=((x290^x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x294 = INT16_MAX;
	int64_t x295 = -1LL;

	t73 = (x293<=((x294^x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 24079U;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 6184354;

	t74 = (x297<=((x298^x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 218527058322LLU;
	int32_t x302 = INT32_MAX;
	uint64_t x303 = 184557639262260187LLU;
	int8_t x304 = -1;
	int32_t t75 = 1;

	t75 = (x301<=((x302^x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x306 = INT64_MIN;
	int64_t x307 = -1953488855872969LL;
	uint16_t x308 = 3U;

	t76 = (x305<=((x306^x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = 1;
	int32_t x310 = -756027171;
	static uint16_t x311 = UINT16_MAX;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t77 = 115218;

	t77 = (x309<=((x310^x311)<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -1;

	t78 = (x313<=((x314^x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -1;
	int64_t x319 = -1LL;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = 16154705;

	t79 = (x317<=((x318^x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 81U;
	volatile int64_t x322 = -6323310877123LL;
	volatile uint64_t x323 = 102744823900LLU;
	static int16_t x324 = -237;
	volatile int32_t t80 = -80;

	t80 = (x321<=((x322^x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MIN;

	t81 = (x325<=((x326^x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x329 = -1747;
	int64_t x331 = INT64_MIN;
	int32_t t82 = -29;

	t82 = (x329<=((x330^x331)<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	static int64_t x334 = 9672483LL;
	int32_t x336 = INT32_MIN;
	static int32_t t83 = 82896;

	t83 = (x333<=((x334^x335)<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MAX;
	uint64_t x340 = 122865849695578LLU;
	volatile int32_t t84 = -26457760;

	t84 = (x337<=((x338^x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 12U;
	volatile int8_t x343 = INT8_MAX;
	volatile uint8_t x344 = UINT8_MAX;

	t85 = (x341<=((x342^x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = 9405LL;
	static volatile int8_t x348 = -1;
	int32_t t86 = 46285;

	t86 = (x345<=((x346^x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x350 = INT32_MIN;
	int64_t x351 = 3482784462742812LL;
	uint32_t x352 = 244298U;

	t87 = (x349<=((x350^x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 738LLU;
	int32_t x355 = 403784178;
	volatile int8_t x356 = 2;
	int32_t t88 = 23942;

	t88 = (x353<=((x354^x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -900;
	static uint64_t x358 = UINT64_MAX;
	static int64_t x360 = 1044LL;

	t89 = (x357<=((x358^x359)<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	static uint64_t x362 = UINT64_MAX;
	int16_t x363 = 24;
	static int16_t x364 = 1483;
	int32_t t90 = 1;

	t90 = (x361<=((x362^x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MAX;
	volatile int32_t t91 = 0;

	t91 = (x365<=((x366^x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -1;
	volatile int32_t x371 = INT32_MAX;
	int64_t x372 = -1LL;
	volatile int32_t t92 = 41;

	t92 = (x369<=((x370^x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x374 = INT8_MAX;
	volatile int32_t t93 = 28581;

	t93 = (x373<=((x374^x375)<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x380 = -4629LL;
	int32_t t94 = 0;

	t94 = (x377<=((x378^x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 194526857U;
	int8_t x382 = -1;
	uint64_t x383 = 11231634068925697LLU;
	volatile int32_t t95 = 209745;

	t95 = (x381<=((x382^x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 0;
	uint32_t x386 = 24U;
	int8_t x387 = -3;
	int16_t x388 = -18;
	volatile int32_t t96 = -5239443;

	t96 = (x385<=((x386^x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = 78;
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MIN;
	int32_t x392 = 6834965;
	static volatile int32_t t97 = -236;

	t97 = (x389<=((x390^x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 2U;
	uint32_t x396 = 4U;
	volatile int32_t t98 = 954;

	t98 = (x393<=((x394^x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	int32_t x398 = INT32_MAX;
	int32_t x399 = 0;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 1006113;

	t99 = (x397<=((x398^x399)<=x400));

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

