#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
int8_t x3 = -1;
int16_t x12 = -16305;
int16_t x13 = INT16_MAX;
static int32_t x20 = 9625384;
int32_t x21 = INT32_MIN;
int32_t x22 = -1392391;
int32_t t5 = -1469;
int8_t x26 = INT8_MIN;
volatile int8_t x32 = INT8_MIN;
static int32_t t8 = -186214;
uint32_t x42 = 117U;
int64_t x52 = INT64_MAX;
int8_t x64 = -60;
int32_t t15 = 57;
static int64_t x76 = INT64_MIN;
int16_t x79 = 3967;
int32_t x80 = INT32_MIN;
static int8_t x97 = INT8_MIN;
uint16_t x99 = 4624U;
int64_t x101 = INT64_MAX;
static int16_t x103 = 16158;
int16_t x122 = INT16_MIN;
int8_t x124 = INT8_MIN;
int32_t t30 = 10;
uint8_t x128 = 62U;
volatile int32_t t31 = -15150;
int64_t x135 = -1LL;
static volatile int32_t t33 = -7;
int64_t x143 = -1LL;
int64_t x152 = INT64_MAX;
int8_t x158 = -1;
int8_t x162 = -1;
static int32_t t40 = -124;
int32_t t42 = -822228;
uint8_t x174 = 8U;
int8_t x176 = -1;
int32_t t45 = 9813;
static int16_t x187 = 20;
int32_t t48 = 10821;
volatile int32_t x198 = 251551896;
static int8_t x200 = INT8_MIN;
int32_t x201 = 208;
static volatile int8_t x206 = -1;
int16_t x208 = INT16_MIN;
int16_t x209 = -4;
static volatile uint64_t x213 = 1058336637304LLU;
int64_t x215 = -2450434011587242744LL;
static volatile int8_t x216 = INT8_MAX;
int16_t x219 = INT16_MIN;
int16_t x224 = 10;
int8_t x230 = INT8_MIN;
uint32_t x235 = 803570595U;
uint8_t x240 = 34U;
int32_t t59 = -77;
uint16_t x251 = 0U;
uint32_t x253 = UINT32_MAX;
int16_t x254 = 2;
int16_t x255 = INT16_MIN;
uint16_t x259 = UINT16_MAX;
int16_t x264 = INT16_MIN;
int32_t t66 = 10431682;
volatile uint8_t x269 = UINT8_MAX;
volatile int16_t x272 = INT16_MAX;
int32_t t67 = 716;
static int64_t x273 = INT64_MAX;
uint8_t x274 = 2U;
uint32_t x276 = UINT32_MAX;
int32_t t69 = 419082;
int64_t x281 = 3103103549127551LL;
int16_t x287 = INT16_MAX;
uint32_t x299 = UINT32_MAX;
uint32_t x315 = UINT32_MAX;
int8_t x316 = INT8_MAX;
volatile int32_t t79 = -3;
int32_t x323 = INT32_MIN;
volatile int32_t t80 = -88407;
volatile int16_t x328 = INT16_MIN;
uint64_t x333 = 3LLU;
int16_t x334 = 532;
int32_t t83 = -565;
int32_t t85 = 5;
volatile int32_t t86 = 1928;
int16_t x352 = 5;
static volatile int8_t x353 = INT8_MIN;
static uint8_t x356 = 0U;
int16_t x358 = -1;
uint8_t x360 = UINT8_MAX;
static volatile int8_t x362 = INT8_MAX;
uint16_t x363 = 108U;
int16_t x365 = 1;
volatile int32_t t91 = -5;
uint32_t x369 = 314765042U;
uint32_t x370 = 56282U;
int32_t x373 = -38;
uint16_t x375 = 29888U;
int32_t x379 = INT32_MIN;
uint32_t x382 = 15904832U;
int64_t x391 = -57975LL;
static uint8_t x393 = 0U;
int32_t t99 = -9;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x4 = -8;
	volatile int32_t t0 = -177358;

	t0 = ((x1<=x2)+(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 110U;
	static uint64_t x6 = 4497498LLU;
	uint8_t x7 = 1U;
	volatile int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 5827;

	t1 = ((x5<=x6)+(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	uint8_t x11 = 1U;
	volatile int32_t t2 = -29;

	t2 = ((x9<=x10)+(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 2145321278563LLU;
	uint16_t x15 = UINT16_MAX;
	static int8_t x16 = -5;
	volatile int32_t t3 = 60464;

	t3 = ((x13<=x14)+(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	int32_t t4 = 13;

	t4 = ((x17<=x18)+(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MAX;

	t5 = ((x21<=x22)+(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	int16_t x27 = -3657;
	volatile int64_t x28 = 1239043014LL;
	volatile int32_t t6 = -864893117;

	t6 = ((x25<=x26)+(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 2759U;
	volatile int8_t x30 = -1;
	uint16_t x31 = 2847U;
	volatile int32_t t7 = 679;

	t7 = ((x29<=x30)+(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x34 = -40;
	int64_t x35 = -209477446746683LL;
	int64_t x36 = INT64_MIN;

	t8 = ((x33<=x34)+(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	int64_t x39 = 134520055LL;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -219713;

	t9 = ((x37<=x38)+(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int64_t x43 = INT64_MIN;
	int8_t x44 = 5;
	volatile int32_t t10 = 11967;

	t10 = ((x41<=x42)+(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static uint64_t x46 = 80642900820063029LLU;
	int16_t x47 = INT16_MAX;
	int64_t x48 = -1LL;
	volatile int32_t t11 = -112700;

	t11 = ((x45<=x46)+(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile uint16_t x50 = 1412U;
	uint64_t x51 = UINT64_MAX;
	int32_t t12 = -1669142;

	t12 = ((x49<=x50)+(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile int8_t x54 = INT8_MIN;
	int32_t x55 = 0;
	volatile int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 0;

	t13 = ((x53<=x54)+(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 7U;
	uint32_t x58 = 106U;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = 5468188430LLU;
	int32_t t14 = 59;

	t14 = ((x57<=x58)+(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 11807169782178LLU;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = -1;

	t15 = ((x61<=x62)+(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static int64_t x66 = -864907060669410LL;
	static uint64_t x67 = 697144476458LLU;
	int8_t x68 = INT8_MAX;
	int32_t t16 = 4;

	t16 = ((x65<=x66)+(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 54;
	int32_t x70 = -1;
	int16_t x71 = 2685;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -278976;

	t17 = ((x69<=x70)+(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -33039347;
	volatile int32_t x74 = -192;
	int32_t x75 = 391;
	volatile int32_t t18 = -12612457;

	t18 = ((x73<=x74)+(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -9;
	volatile uint8_t x78 = UINT8_MAX;
	int32_t t19 = -30570311;

	t19 = ((x77<=x78)+(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -15;
	int32_t x82 = 22;
	int64_t x83 = -1LL;
	uint32_t x84 = 2443U;
	volatile int32_t t20 = 0;

	t20 = ((x81<=x82)+(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static int16_t x86 = 1;
	uint32_t x87 = 311562U;
	uint8_t x88 = 3U;
	volatile int32_t t21 = 0;

	t21 = ((x85<=x86)+(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MAX;
	int32_t x91 = 18;
	int32_t x92 = -1759;
	int32_t t22 = 54;

	t22 = ((x89<=x90)+(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = INT32_MAX;
	static uint32_t x95 = 5547788U;
	static volatile int32_t x96 = INT32_MAX;
	static int32_t t23 = -270551;

	t23 = ((x93<=x94)+(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 1U;
	uint64_t x100 = 3LLU;
	volatile int32_t t24 = -3717598;

	t24 = ((x97<=x98)+(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = UINT16_MAX;
	volatile int8_t x104 = 0;
	static volatile int32_t t25 = -20706979;

	t25 = ((x101<=x102)+(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x105 = 619U;
	uint8_t x106 = 4U;
	volatile int64_t x107 = INT64_MIN;
	uint8_t x108 = 1U;
	volatile int32_t t26 = 1;

	t26 = ((x105<=x106)+(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	volatile int8_t x111 = INT8_MIN;
	volatile uint16_t x112 = 2U;
	int32_t t27 = 961330;

	t27 = ((x109<=x110)+(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = 4199U;
	int32_t t28 = -88935;

	t28 = ((x113<=x114)+(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	volatile int32_t x118 = 1;
	int32_t x119 = -347861682;
	int16_t x120 = -1;
	int32_t t29 = -2;

	t29 = ((x117<=x118)+(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	int64_t x123 = 2821579297157851LL;

	t30 = ((x121<=x122)+(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	volatile int16_t x126 = 11;
	int32_t x127 = -1;

	t31 = ((x125<=x126)+(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 11699014922LL;
	volatile int8_t x130 = INT8_MAX;
	static int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MAX;
	int32_t t32 = 314863631;

	t32 = ((x129<=x130)+(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static int64_t x134 = INT64_MIN;
	volatile uint64_t x136 = UINT64_MAX;

	t33 = ((x133<=x134)+(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 51U;
	volatile int32_t x138 = -1;
	int8_t x139 = INT8_MIN;
	volatile int16_t x140 = INT16_MIN;
	int32_t t34 = 54586;

	t34 = ((x137<=x138)+(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile int8_t x142 = INT8_MAX;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -276742685;

	t35 = ((x141<=x142)+(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	int8_t x146 = -1;
	static int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -135818;

	t36 = ((x145<=x146)+(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 1003U;
	static int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int32_t t37 = 421;

	t37 = ((x149<=x150)+(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 41U;
	volatile uint64_t x155 = 44788199LLU;
	static uint8_t x156 = 12U;
	static int32_t t38 = 1;

	t38 = ((x153<=x154)+(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 1U;
	int64_t x159 = INT64_MAX;
	int64_t x160 = -9329340577LL;
	int32_t t39 = 20;

	t39 = ((x157<=x158)+(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1371;
	int8_t x163 = INT8_MIN;
	volatile int32_t x164 = -179555605;

	t40 = ((x161<=x162)+(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = INT8_MIN;
	volatile int32_t x168 = -1;
	static int32_t t41 = -219080932;

	t41 = ((x165<=x166)+(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 2;
	static int16_t x170 = INT16_MAX;
	volatile int32_t x171 = INT32_MAX;
	uint16_t x172 = UINT16_MAX;

	t42 = ((x169<=x170)+(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -6;
	volatile int64_t x175 = INT64_MIN;
	volatile int32_t t43 = -1645;

	t43 = ((x173<=x174)+(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 25208U;
	volatile int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = -691528;

	t44 = ((x177<=x178)+(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	static volatile int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;

	t45 = ((x181<=x182)+(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 61;
	static uint32_t x186 = 6722962U;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = -178952;

	t46 = ((x185<=x186)+(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 25653U;
	int8_t x191 = -5;
	volatile int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = 21;

	t47 = ((x189<=x190)+(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	static uint32_t x194 = 0U;
	volatile int32_t x195 = INT32_MAX;
	int8_t x196 = -56;

	t48 = ((x193<=x194)+(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	volatile int32_t t49 = -251;

	t49 = ((x197<=x198)+(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 6U;
	uint8_t x203 = 44U;
	int8_t x204 = -1;
	int32_t t50 = -560029508;

	t50 = ((x201<=x202)+(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 465220883445LLU;
	static uint64_t x207 = UINT64_MAX;
	volatile int32_t t51 = -2717951;

	t51 = ((x205<=x206)+(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 32466722LLU;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t52 = -1994;

	t52 = ((x209<=x210)+(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MAX;
	int32_t t53 = 121;

	t53 = ((x213<=x214)+(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 694LLU;
	int64_t x218 = 62527LL;
	int64_t x220 = -1LL;
	volatile int32_t t54 = 14079200;

	t54 = ((x217<=x218)+(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MAX;
	uint64_t x222 = 151LLU;
	volatile uint32_t x223 = 42600U;
	static volatile int32_t t55 = 1;

	t55 = ((x221<=x222)+(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 23;
	uint16_t x226 = 395U;
	volatile uint64_t x227 = 939133761979372LLU;
	int16_t x228 = INT16_MAX;
	static int32_t t56 = 81;

	t56 = ((x225<=x226)+(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = 7183388U;
	int32_t t57 = 2;

	t57 = ((x229<=x230)+(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	int32_t x236 = 21860;
	volatile int32_t t58 = 8769;

	t58 = ((x233<=x234)+(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -451LL;
	static int32_t x238 = INT32_MIN;
	uint8_t x239 = UINT8_MAX;

	t59 = ((x237<=x238)+(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 2861;
	volatile int16_t x242 = INT16_MIN;
	uint16_t x243 = 1418U;
	int8_t x244 = INT8_MIN;
	int32_t t60 = 175014139;

	t60 = ((x241<=x242)+(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = 389U;
	static int32_t x248 = INT32_MIN;
	int32_t t61 = 0;

	t61 = ((x245<=x246)+(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	int64_t x252 = INT64_MIN;
	volatile int32_t t62 = 1301163;

	t62 = ((x249<=x250)+(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x256 = -1;
	static volatile int32_t t63 = 185;

	t63 = ((x253<=x254)+(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = -1;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = -23908430;

	t64 = ((x257<=x258)+(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint16_t x262 = UINT16_MAX;
	int16_t x263 = -1;
	volatile int32_t t65 = 353;

	t65 = ((x261<=x262)+(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 27397751LLU;
	int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MIN;
	volatile int8_t x268 = -1;

	t66 = ((x265<=x266)+(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	volatile uint64_t x271 = UINT64_MAX;

	t67 = ((x269<=x270)+(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x275 = INT32_MIN;
	int32_t t68 = 1678904;

	t68 = ((x273<=x274)+(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = -1;
	static volatile int16_t x279 = -1;
	volatile int8_t x280 = -1;

	t69 = ((x277<=x278)+(x279==x280));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = -13522801153272LL;
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 3546U;
	volatile int32_t t70 = 11957123;

	t70 = ((x281<=x282)+(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 123U;
	uint8_t x286 = UINT8_MAX;
	uint64_t x288 = 208660009299LLU;
	int32_t t71 = -1381349;

	t71 = ((x285<=x286)+(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = -190;
	static int64_t x291 = INT64_MIN;
	volatile int8_t x292 = 1;
	static volatile int32_t t72 = -1;

	t72 = ((x289<=x290)+(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -75633789811LL;
	volatile int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t73 = 238470144;

	t73 = ((x293<=x294)+(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	static int32_t x298 = INT32_MAX;
	int64_t x300 = -367855815LL;
	int32_t t74 = 2;

	t74 = ((x297<=x298)+(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile uint64_t x302 = 17757538848LLU;
	int8_t x303 = INT8_MAX;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -9964388;

	t75 = ((x301<=x302)+(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -59;
	int8_t x306 = INT8_MIN;
	int8_t x307 = 0;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = 1286;

	t76 = ((x305<=x306)+(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	static uint64_t x311 = 507090962662LLU;
	volatile uint32_t x312 = 30U;
	volatile int32_t t77 = -70467338;

	t77 = ((x309<=x310)+(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	static int32_t x314 = 17642310;
	volatile int32_t t78 = 243;

	t78 = ((x313<=x314)+(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = -1;
	volatile int64_t x318 = INT64_MAX;
	uint8_t x319 = UINT8_MAX;
	static int8_t x320 = -15;

	t79 = ((x317<=x318)+(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	static volatile uint32_t x322 = 43887032U;
	int32_t x324 = -1;

	t80 = ((x321<=x322)+(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 247U;
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = UINT32_MAX;
	static volatile int32_t t81 = -32097;

	t81 = ((x325<=x326)+(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	int32_t x331 = 2;
	static uint8_t x332 = 73U;
	static volatile int32_t t82 = -46;

	t82 = ((x329<=x330)+(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x335 = UINT64_MAX;
	uint16_t x336 = UINT16_MAX;

	t83 = ((x333<=x334)+(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 8;
	static uint16_t x338 = UINT16_MAX;
	static int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x337<=x338)+(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = -1;

	t85 = ((x341<=x342)+(x343==x344));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MAX;
	int64_t x348 = INT64_MIN;

	t86 = ((x345<=x346)+(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 12619U;
	volatile uint32_t x350 = 259U;
	uint64_t x351 = 1160396447692LLU;
	static int32_t t87 = -95465216;

	t87 = ((x349<=x350)+(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = 14;
	volatile int16_t x355 = INT16_MIN;
	static int32_t t88 = 1638;

	t88 = ((x353<=x354)+(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = -11;
	volatile int64_t x359 = -1LL;
	int32_t t89 = 3172;

	t89 = ((x357<=x358)+(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 14771;
	int16_t x364 = 321;
	volatile int32_t t90 = -115367515;

	t90 = ((x361<=x362)+(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x366 = 7U;
	int8_t x367 = -1;
	int64_t x368 = -1972448731736246151LL;

	t91 = ((x365<=x366)+(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	int32_t t92 = -2965;

	t92 = ((x369<=x370)+(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = -3;
	uint16_t x376 = 773U;
	volatile int32_t t93 = -4;

	t93 = ((x373<=x374)+(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int16_t x378 = -402;
	uint16_t x380 = 72U;
	volatile int32_t t94 = -7848;

	t94 = ((x377<=x378)+(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t95 = -3;

	t95 = ((x381<=x382)+(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 107142LLU;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MAX;
	static uint8_t x388 = 2U;
	volatile int32_t t96 = 982408720;

	t96 = ((x385<=x386)+(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -860716153540860LL;
	uint64_t x390 = UINT64_MAX;
	int16_t x392 = 13;
	static volatile int32_t t97 = -3252822;

	t97 = ((x389<=x390)+(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 94560LLU;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 171141;

	t98 = ((x393<=x394)+(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = UINT64_MAX;
	uint32_t x398 = 5122U;
	uint16_t x399 = 117U;
	uint32_t x400 = 79U;

	t99 = ((x397<=x398)+(x399==x400));

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

