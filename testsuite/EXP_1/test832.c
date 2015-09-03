#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = 44;
int16_t x10 = INT16_MIN;
volatile int64_t t2 = -6802034904559LL;
static int64_t x17 = INT64_MIN;
int64_t t3 = 21LL;
int16_t x32 = INT16_MAX;
int16_t x33 = 0;
volatile int32_t x35 = INT32_MIN;
volatile int64_t t7 = -277858758380LL;
uint8_t x39 = 1U;
int8_t x40 = 0;
int32_t t8 = -4202;
volatile uint64_t x42 = 30809LLU;
uint8_t x46 = 4U;
volatile int16_t x49 = -38;
int64_t x54 = -1LL;
uint8_t x56 = UINT8_MAX;
static volatile uint64_t t15 = 33971LLU;
uint64_t t16 = 139317914618679189LLU;
static volatile int32_t x73 = -1;
uint16_t x77 = UINT16_MAX;
uint64_t x84 = UINT64_MAX;
uint16_t x85 = 202U;
uint16_t x91 = UINT16_MAX;
volatile uint64_t x92 = UINT64_MAX;
volatile uint64_t t21 = 919085284LLU;
int64_t x93 = INT64_MIN;
static int16_t x97 = INT16_MAX;
int32_t x100 = INT32_MAX;
static int32_t t23 = 81056680;
uint64_t x102 = UINT64_MAX;
volatile int16_t x104 = 1;
static volatile int32_t x105 = -45;
int16_t x106 = INT16_MAX;
int64_t x112 = INT64_MIN;
uint32_t x121 = 17001454U;
int16_t x125 = INT16_MIN;
uint64_t x127 = 16438695LLU;
uint64_t t30 = 2LLU;
int8_t x130 = INT8_MAX;
volatile uint64_t t32 = 7LLU;
volatile int32_t x159 = -1;
int8_t x160 = INT8_MAX;
uint8_t x166 = 124U;
volatile int64_t t40 = INT64_MAX;
uint8_t x169 = UINT8_MAX;
int16_t x174 = INT16_MIN;
int8_t x176 = 0;
int64_t t43 = -1717291972315LL;
static int32_t x182 = 2278;
volatile uint64_t t44 = 193940463779LLU;
int32_t x186 = INT32_MIN;
uint64_t x190 = 533302105786LLU;
uint32_t x194 = 5894372U;
volatile int32_t x199 = INT32_MIN;
volatile uint64_t t48 = 240207316297072472LLU;
int64_t x203 = -38938412379812LL;
int16_t x206 = INT16_MAX;
int32_t x209 = 7121513;
uint8_t x211 = UINT8_MAX;
uint32_t t51 = 170308U;
int32_t x214 = INT32_MIN;
uint8_t x220 = UINT8_MAX;
static uint16_t x226 = UINT16_MAX;
volatile int32_t t55 = 0;
int64_t x233 = INT64_MAX;
uint64_t x236 = 34920227835397LLU;
uint16_t x239 = 2814U;
static volatile int64_t x261 = 5362081LL;
int16_t x262 = -15331;
volatile int16_t x264 = INT16_MIN;
int64_t x266 = 1976983556LL;
volatile int32_t x273 = INT32_MAX;
uint32_t x275 = UINT32_MAX;
int32_t x282 = INT32_MIN;
int16_t x285 = INT16_MIN;
int8_t x288 = -1;
volatile int32_t x289 = INT32_MIN;
static volatile int16_t x302 = INT16_MIN;
uint32_t x309 = 183709U;
int64_t x315 = -5045324698026LL;
static volatile int32_t x317 = INT32_MIN;
int16_t x320 = INT16_MIN;
int32_t t80 = 119136;
uint32_t x329 = 58U;
volatile int64_t x331 = INT64_MIN;
int64_t x335 = -2325814453LL;
int64_t x336 = INT64_MIN;
int8_t x341 = -1;
int16_t x342 = 1;
volatile uint32_t x348 = 13U;
static int64_t x360 = INT64_MAX;
int32_t x361 = -1;
uint16_t x362 = UINT16_MAX;
uint8_t x371 = 6U;
static uint8_t x379 = 2U;
int16_t x383 = -4798;
static volatile int32_t x390 = -1;
int32_t x392 = -1008;
int16_t x397 = 0;
static int32_t x402 = -124;
static int64_t t97 = 4200173809900242806LL;
static int32_t x412 = -1;
volatile int64_t t99 = 73973638597801LL;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static volatile int32_t x2 = INT32_MAX;
	uint64_t x4 = 5799228182653LLU;
	volatile uint64_t t0 = 344757941317211837LLU;

	t0 = (((x1%x2)|x3)^x4);

	if (t0 != 18446738274481368962LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	static volatile uint8_t x6 = 21U;
	int16_t x7 = INT16_MIN;
	static uint8_t x8 = 123U;
	volatile int32_t t1 = -1;

	t1 = (((x5%x6)|x7)^x8);

	if (t1 != -32644) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x11 = -7430LL;
	uint16_t x12 = UINT16_MAX;

	t2 = (((x9%x10)|x11)^x12);

	if (t2 != -65531LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x18 = 9017204U;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -1;

	t3 = (((x17%x18)|x19)^x20);

	if (t3 != 1923LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 5100U;
	int16_t x22 = -1;
	int32_t x23 = INT32_MIN;
	int16_t x24 = -1;
	static volatile int32_t t4 = INT32_MAX;

	t4 = (((x21%x22)|x23)^x24);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MIN;
	static int32_t x27 = INT32_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t5 = 1084869LLU;

	t5 = (((x25%x26)|x27)^x28);

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 27LLU;
	int32_t x30 = 8;
	int16_t x31 = INT16_MIN;
	uint64_t t6 = 56LLU;

	t6 = (((x29%x30)|x31)^x32);

	if (t6 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = -104;
	int64_t x36 = 44676520068360LL;

	t7 = (((x33%x34)|x35)^x36);

	if (t7 != -44678127041272LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = INT32_MIN;
	uint16_t x38 = 207U;

	t8 = (((x37%x38)|x39)^x40);

	if (t8 != -29) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -11052766266LL;
	int32_t x43 = -1;
	static int8_t x44 = -1;
	uint64_t t9 = 3793734352570991LLU;

	t9 = (((x41%x42)|x43)^x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = INT8_MIN;
	volatile int64_t x47 = 245640635201065167LL;
	int32_t x48 = -1;
	volatile int64_t t10 = 9139457057715LL;

	t10 = (((x45%x46)|x47)^x48);

	if (t10 != -245640635201065168LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = -3LL;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MAX;
	static volatile int64_t t11 = -27186966808871939LL;

	t11 = (((x49%x50)|x51)^x52);

	if (t11 != -32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MAX;
	static int32_t x55 = INT32_MAX;
	int64_t t12 = -107985456394LL;

	t12 = (((x53%x54)|x55)^x56);

	if (t12 != 2147483392LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 7U;
	uint32_t x58 = 73677U;
	int64_t x59 = INT64_MAX;
	int32_t x60 = 127936;
	static int64_t t13 = 987635748791280LL;

	t13 = (((x57%x58)|x59)^x60);

	if (t13 != 9223372036854647871LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = UINT64_MAX;
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	int32_t x64 = -113;
	static uint64_t t14 = 17368979545031411LLU;

	t14 = (((x61%x62)|x63)^x64);

	if (t14 != 112LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x65 = 584224825LLU;
	static int64_t x66 = 1LL;
	int64_t x67 = INT64_MAX;
	volatile uint16_t x68 = 17689U;

	t15 = (((x65%x66)|x67)^x68);

	if (t15 != 9223372036854758118LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 4100003969791728458LLU;
	uint64_t x70 = 12097LLU;
	int8_t x71 = -1;
	uint16_t x72 = 2930U;

	t16 = (((x69%x70)|x71)^x72);

	if (t16 != 18446744073709548685LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x74 = INT64_MIN;
	uint32_t x75 = 2750U;
	int16_t x76 = -1;
	int64_t t17 = 1508LL;

	t17 = (((x73%x74)|x75)^x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = 57540481LL;
	uint32_t x79 = 1203U;
	volatile int64_t x80 = -1LL;
	volatile int64_t t18 = -33898858210281LL;

	t18 = (((x77%x78)|x79)^x80);

	if (t18 != -65536LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	static volatile int64_t x82 = 2529LL;
	volatile int64_t x83 = INT64_MIN;
	static volatile uint64_t t19 = 538973013119813261LLU;

	t19 = (((x81%x82)|x83)^x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x86 = 1688U;
	uint16_t x87 = 886U;
	int16_t x88 = -10;
	volatile int32_t t20 = -23;

	t20 = (((x85%x86)|x87)^x88);

	if (t20 != -1016) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 9U;
	volatile int8_t x90 = INT8_MIN;

	t21 = (((x89%x90)|x91)^x92);

	if (t21 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x94 = INT32_MIN;
	static int64_t x95 = INT64_MAX;
	int64_t x96 = INT64_MAX;
	volatile int64_t t22 = 609LL;

	t22 = (((x93%x94)|x95)^x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x98 = 17303U;
	int16_t x99 = 1;

	t23 = (((x97%x98)|x99)^x100);

	if (t23 != 2147468182) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	volatile uint64_t t24 = 712273002050046135LLU;

	t24 = (((x101%x102)|x103)^x104);

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t25 = -13;

	t25 = (((x105%x106)|x107)^x108);

	if (t25 != 2147483603) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -42325418790112LL;
	uint16_t x110 = 156U;
	volatile int8_t x111 = INT8_MIN;
	int64_t t26 = 4199848LL;

	t26 = (((x109%x110)|x111)^x112);

	if (t26 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 2U;
	volatile int64_t x114 = INT64_MIN;
	int32_t x115 = 811101293;
	static int8_t x116 = -1;
	volatile int64_t t27 = -27910445758LL;

	t27 = (((x113%x114)|x115)^x116);

	if (t27 != -811101296LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = 0;
	uint32_t x118 = 1019U;
	int64_t x119 = -1LL;
	int32_t x120 = INT32_MAX;
	int64_t t28 = 235LL;

	t28 = (((x117%x118)|x119)^x120);

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x122 = 1;
	uint32_t x123 = 41413852U;
	int32_t x124 = INT32_MAX;
	volatile uint32_t t29 = 51U;

	t29 = (((x121%x122)|x123)^x124);

	if (t29 != 2106069795U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x126 = 504U;
	int8_t x128 = INT8_MIN;

	t30 = (((x125%x126)|x127)^x128);

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MIN;
	static uint8_t x131 = UINT8_MAX;
	static int64_t x132 = INT64_MIN;
	int64_t t31 = INT64_MAX;

	t31 = (((x129%x130)|x131)^x132);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	volatile uint64_t x134 = 3188LLU;
	volatile int8_t x135 = -10;
	uint8_t x136 = 109U;

	t32 = (((x133%x134)|x135)^x136);

	if (t32 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -1378750LL;
	int64_t x138 = INT64_MAX;
	static int32_t x139 = INT32_MIN;
	static int16_t x140 = INT16_MAX;
	int64_t t33 = 483LL;

	t33 = (((x137%x138)|x139)^x140);

	if (t33 != -1406531LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 51641001649LLU;
	int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MIN;
	int16_t x144 = -1;
	volatile uint64_t t34 = 31LLU;

	t34 = (((x141%x142)|x143)^x144);

	if (t34 != 2046089550LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 0U;
	volatile uint32_t x146 = 1215862096U;
	static int64_t x147 = -1LL;
	int16_t x148 = INT16_MIN;
	volatile int64_t t35 = -497953143LL;

	t35 = (((x145%x146)|x147)^x148);

	if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int8_t x150 = 11;
	static uint64_t x151 = 3185888898083973LLU;
	int64_t x152 = INT64_MIN;
	volatile uint64_t t36 = 2405658LLU;

	t36 = (((x149%x150)|x151)^x152);

	if (t36 != 9226557925752859789LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x153 = 316U;
	volatile uint64_t x154 = 13276368632753LLU;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 34642U;
	uint64_t t37 = 51182230452976611LLU;

	t37 = (((x153%x154)|x155)^x156);

	if (t37 != 30893LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 57U;
	volatile int16_t x158 = 2387;
	int32_t t38 = 722;

	t38 = (((x157%x158)|x159)^x160);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x161 = UINT16_MAX;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = INT8_MAX;
	static uint16_t x164 = 12184U;
	uint64_t t39 = 58812LLU;

	t39 = (((x161%x162)|x163)^x164);

	if (t39 != 53351LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	int16_t x167 = -1;
	int64_t x168 = INT64_MIN;

	t40 = (((x165%x166)|x167)^x168);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 1U;
	uint32_t x172 = 363U;
	volatile int64_t t41 = 492584458LL;

	t41 = (((x169%x170)|x171)^x172);

	if (t41 != 404LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	volatile int32_t t42 = -245068;

	t42 = (((x173%x174)|x175)^x176);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 5648U;
	int32_t x178 = 305;
	int64_t x179 = -34LL;
	int32_t x180 = INT32_MIN;

	t43 = (((x177%x178)|x179)^x180);

	if (t43 != 2147483614LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 16LLU;
	static int32_t x183 = 26;
	int32_t x184 = INT32_MIN;

	t44 = (((x181%x182)|x183)^x184);

	if (t44 != 18446744071562067994LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	static volatile uint8_t x188 = 0U;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x185%x186)|x187)^x188);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 0;
	volatile int32_t x191 = -1;
	int8_t x192 = -1;
	static volatile uint64_t t46 = 13486143LLU;

	t46 = (((x189%x190)|x191)^x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 13751240838482622LL;
	int8_t x195 = -1;
	static volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t47 = 1041LLU;

	t47 = (((x193%x194)|x195)^x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	volatile uint64_t x200 = UINT64_MAX;

	t48 = (((x197%x198)|x199)^x200);

	if (t48 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MIN;
	uint64_t x202 = UINT64_MAX;
	static int8_t x204 = INT8_MIN;
	static volatile uint64_t t49 = 1620726365113LLU;

	t49 = (((x201%x202)|x203)^x204);

	if (t49 != 38938412379868LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x205 = 8270367033722531LLU;
	uint8_t x207 = 72U;
	volatile int8_t x208 = INT8_MIN;
	volatile uint64_t t50 = 626275092607611285LLU;

	t50 = (((x205%x206)|x207)^x208);

	if (t50 != 18446744073709530859LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x210 = UINT32_MAX;
	int16_t x212 = -6;

	t51 = (((x209%x210)|x211)^x212);

	if (t51 != 4287845637U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x215 = 197568U;
	int8_t x216 = -3;
	uint32_t t52 = 787010962U;

	t52 = (((x213%x214)|x215)^x216);

	if (t52 != 61U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = 2778639346005956782LLU;
	uint16_t x218 = 425U;
	uint32_t x219 = 1448513U;
	static volatile uint64_t t53 = 166925939LLU;

	t53 = (((x217%x218)|x219)^x220);

	if (t53 != 1448858LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = -7510;
	int8_t x222 = INT8_MIN;
	int32_t x223 = 176;
	uint32_t x224 = 5U;
	static volatile uint32_t t54 = 30526U;

	t54 = (((x221%x222)|x223)^x224);

	if (t54 != 4294967231U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 0U;
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 315U;

	t55 = (((x225%x226)|x227)^x228);

	if (t55 != 65220) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MAX;
	uint8_t x230 = 31U;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MIN;
	uint64_t t56 = 389030152LLU;

	t56 = (((x229%x230)|x231)^x232);

	if (t56 != 32767LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x234 = -1;
	int8_t x235 = 0;
	volatile uint64_t t57 = 5337153542628LLU;

	t57 = (((x233%x234)|x235)^x236);

	if (t57 != 34920227835397LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 437828195LLU;
	uint32_t x238 = 4U;
	int32_t x240 = -1332;
	volatile uint64_t t58 = 202LLU;

	t58 = (((x237%x238)|x239)^x240);

	if (t58 != 18446744073709547571LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	int16_t x244 = -1;
	int64_t t59 = -248260LL;

	t59 = (((x241%x242)|x243)^x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x245 = 323U;
	uint64_t x246 = 429LLU;
	volatile uint16_t x247 = 102U;
	static int32_t x248 = -1;
	uint64_t t60 = 684714LLU;

	t60 = (((x245%x246)|x247)^x248);

	if (t60 != 18446744073709551256LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 1516352783LL;
	static uint8_t x250 = 7U;
	volatile uint32_t x251 = 3U;
	uint8_t x252 = 0U;
	volatile int64_t t61 = 235896240066610054LL;

	t61 = (((x249%x250)|x251)^x252);

	if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 0U;
	int16_t x254 = INT16_MAX;
	static uint64_t x255 = 339939284LLU;
	static int32_t x256 = 1508;
	static uint64_t t62 = 7260LLU;

	t62 = (((x253%x254)|x255)^x256);

	if (t62 != 339937840LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	static uint16_t x258 = UINT16_MAX;
	int32_t x259 = INT32_MIN;
	static volatile int32_t x260 = INT32_MAX;
	int64_t t63 = -151492LL;

	t63 = (((x257%x258)|x259)^x260);

	if (t63 != -2147450881LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x263 = INT64_MIN;
	volatile int64_t t64 = -201553419899273007LL;

	t64 = (((x261%x262)|x263)^x264);

	if (t64 != 9223372036854754602LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	volatile int16_t x267 = -356;
	int64_t x268 = INT64_MIN;
	static int64_t t65 = INT64_MAX;

	t65 = (((x265%x266)|x267)^x268);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x269 = 34116469644680LLU;
	static int64_t x270 = INT64_MAX;
	uint8_t x271 = 26U;
	int32_t x272 = 18;
	volatile uint64_t t66 = 367112881432938LLU;

	t66 = (((x269%x270)|x271)^x272);

	if (t66 != 34116469644680LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x274 = 2950U;
	int64_t x276 = -29455874534868LL;
	volatile int64_t t67 = 3740801354891585760LL;

	t67 = (((x273%x274)|x275)^x276);

	if (t67 != -29458191864365LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = 275797;
	uint16_t x278 = 5U;
	uint64_t x279 = UINT64_MAX;
	volatile int8_t x280 = -1;
	static uint64_t t68 = 527063604844821504LLU;

	t68 = (((x277%x278)|x279)^x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;
	static volatile uint64_t t69 = 6870470995073076LLU;

	t69 = (((x281%x282)|x283)^x284);

	if (t69 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x286 = -1LL;
	uint16_t x287 = 1250U;
	int64_t t70 = -274801220408461860LL;

	t70 = (((x285%x286)|x287)^x288);

	if (t70 != -1251LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = 14;
	volatile uint32_t x291 = 60U;
	uint32_t x292 = 1735U;
	volatile uint32_t t71 = 800024U;

	t71 = (((x289%x290)|x291)^x292);

	if (t71 != 4294965561U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x293 = INT8_MAX;
	uint32_t x294 = 946667U;
	static volatile uint16_t x295 = UINT16_MAX;
	int32_t x296 = INT32_MIN;
	uint32_t t72 = 104U;

	t72 = (((x293%x294)|x295)^x296);

	if (t72 != 2147549183U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x297 = INT16_MIN;
	uint32_t x298 = UINT32_MAX;
	static uint16_t x299 = 1643U;
	int64_t x300 = -4928543023004LL;
	int64_t t73 = 130016046288412LL;

	t73 = (((x297%x298)|x299)^x300);

	if (t73 != -4928406936049LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x301 = INT32_MAX;
	int64_t x303 = -558026572393725LL;
	static volatile int16_t x304 = INT16_MAX;
	int64_t t74 = 21687138292LL;

	t74 = (((x301%x302)|x303)^x304);

	if (t74 != -558026572398592LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = -1099;
	int64_t x306 = -1LL;
	volatile uint32_t x307 = UINT32_MAX;
	volatile int64_t x308 = INT64_MIN;
	volatile int64_t t75 = 114679634789671LL;

	t75 = (((x305%x306)|x307)^x308);

	if (t75 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x310 = 2787684707158932LLU;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t x312 = INT32_MIN;
	static uint64_t t76 = 147661134624508LLU;

	t76 = (((x309%x310)|x311)^x312);

	if (t76 != 18446744071562264575LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = -201LL;
	int32_t x314 = -1;
	int32_t x316 = -1;
	int64_t t77 = -88850603LL;

	t77 = (((x313%x314)|x315)^x316);

	if (t77 != 5045324698025LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x318 = 36985518820487LL;
	uint64_t x319 = 56960954201LLU;
	static volatile uint64_t t78 = 463425224783118973LLU;

	t78 = (((x317%x318)|x319)^x320);

	if (t78 != 1021095769LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x321 = 1;
	uint16_t x322 = UINT16_MAX;
	static int8_t x323 = INT8_MIN;
	int32_t x324 = 24626;
	int32_t t79 = 237754111;

	t79 = (((x321%x322)|x323)^x324);

	if (t79 != -24653) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MAX;
	int32_t x327 = 860;
	static int16_t x328 = INT16_MAX;

	t80 = (((x325%x326)|x327)^x328);

	if (t80 != 31904) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x330 = 20U;
	volatile int64_t x332 = INT64_MIN;
	int64_t t81 = 34576163115675170LL;

	t81 = (((x329%x330)|x331)^x332);

	if (t81 != 18LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 591898076112LL;
	volatile int32_t x334 = INT32_MIN;
	volatile int64_t t82 = -36220LL;

	t82 = (((x333%x334)|x335)^x336);

	if (t82 != 9223372034705187803LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x337 = 0U;
	volatile int8_t x338 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t83 = 22217;

	t83 = (((x337%x338)|x339)^x340);

	if (t83 != -2147483393) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x343 = -1;
	uint8_t x344 = 2U;
	int32_t t84 = -9;

	t84 = (((x341%x342)|x343)^x344);

	if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = 34U;
	volatile uint32_t t85 = 59213237U;

	t85 = (((x345%x346)|x347)^x348);

	if (t85 != 47U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x349 = 16;
	int32_t x350 = INT32_MIN;
	volatile int64_t x351 = -1LL;
	uint64_t x352 = 101591364492585316LLU;
	volatile uint64_t t86 = 2309571846399LLU;

	t86 = (((x349%x350)|x351)^x352);

	if (t86 != 18345152709216966299LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x353 = 44559U;
	volatile int8_t x354 = -4;
	int32_t x355 = INT32_MAX;
	int16_t x356 = -1;
	volatile uint32_t t87 = 3290U;

	t87 = (((x353%x354)|x355)^x356);

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = -31;
	int64_t x359 = 1746695433662685LL;
	int64_t t88 = 2348188483608494LL;

	t88 = (((x357%x358)|x359)^x360);

	if (t88 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x363 = 62U;
	int64_t x364 = INT64_MIN;
	int64_t t89 = 776757570LL;

	t89 = (((x361%x362)|x363)^x364);

	if (t89 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = -896;
	int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	int32_t t90 = INT32_MAX;

	t90 = (((x365%x366)|x367)^x368);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -14589499;
	static int32_t x370 = INT32_MIN;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t91 = 151893;

	t91 = (((x369%x370)|x371)^x372);

	if (t91 != 14606791) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = UINT64_MAX;
	static int32_t x374 = 3801308;
	uint64_t x375 = 95107397LLU;
	uint16_t x376 = 217U;
	static uint64_t t92 = 32259LLU;

	t92 = (((x373%x374)|x375)^x376);

	if (t92 != 95141254LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 1647873452LLU;
	int16_t x378 = 899;
	volatile int64_t x380 = INT64_MAX;
	static uint64_t t93 = 3076LLU;

	t93 = (((x377%x378)|x379)^x380);

	if (t93 != 9223372036854775648LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = 123306;
	int8_t x382 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t94 = 4848;

	t94 = (((x381%x382)|x383)^x384);

	if (t94 != 2147478890) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 543198414LLU;
	int8_t x391 = INT8_MIN;
	volatile uint64_t t95 = 7853660580LLU;

	t95 = (((x389%x390)|x391)^x392);

	if (t95 != 990LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x398 = INT8_MAX;
	volatile uint8_t x399 = UINT8_MAX;
	static volatile int32_t x400 = INT32_MIN;
	volatile int32_t t96 = -107516;

	t96 = (((x397%x398)|x399)^x400);

	if (t96 != -2147483393) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x403 = INT64_MAX;
	int64_t x404 = 3559783031110685LL;

	t97 = (((x401%x402)|x403)^x404);

	if (t97 != 9219812253823665122LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = 0U;
	int32_t x406 = INT32_MAX;
	uint16_t x407 = 0U;
	int32_t x408 = INT32_MIN;
	int32_t t98 = INT32_MIN;

	t98 = (((x405%x406)|x407)^x408);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = -1LL;
	volatile int64_t x411 = 21927943672643LL;

	t99 = (((x409%x410)|x411)^x412);

	if (t99 != -21927943672644LL) { NG(); } else { ; }
	
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

