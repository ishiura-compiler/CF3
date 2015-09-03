#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MIN;
uint8_t x12 = 112U;
volatile uint64_t x14 = UINT64_MAX;
int8_t x19 = INT8_MIN;
static volatile int32_t x22 = 138660;
static uint32_t x24 = 33085U;
uint32_t t5 = 722U;
volatile uint8_t x32 = 24U;
volatile int64_t t9 = 2131901168767188673LL;
int64_t t10 = -257729775357363329LL;
int16_t x57 = INT16_MIN;
volatile int16_t x64 = -1;
int8_t x76 = INT8_MIN;
volatile uint16_t x78 = 497U;
static int8_t x93 = INT8_MIN;
static int32_t t19 = -260333;
volatile uint32_t t20 = 585114622U;
int32_t t21 = -14269242;
uint64_t t22 = 288650938245328678LLU;
int64_t x110 = INT64_MIN;
static volatile uint64_t x111 = UINT64_MAX;
uint64_t t23 = 0LLU;
volatile int32_t x113 = 58804166;
volatile uint64_t t24 = 2017LLU;
uint8_t x121 = UINT8_MAX;
uint64_t x124 = 1881LLU;
volatile uint64_t t25 = 544210794531578720LLU;
static int64_t x127 = INT64_MAX;
volatile int8_t x131 = -52;
volatile int16_t x132 = INT16_MAX;
int8_t x134 = -1;
volatile int32_t x142 = INT32_MAX;
int64_t x147 = INT64_MIN;
int8_t x148 = INT8_MIN;
volatile int16_t x150 = -12;
volatile int32_t t32 = 3749;
int16_t x164 = 0;
uint64_t x165 = UINT64_MAX;
static uint64_t t35 = 1655073472LLU;
int8_t x178 = INT8_MAX;
uint32_t x190 = 6887U;
volatile uint8_t x191 = 15U;
static int32_t t40 = -335;
int16_t x197 = -74;
int32_t t41 = 7816784;
int8_t x205 = -1;
int16_t x215 = INT16_MAX;
uint64_t x218 = 6953140LLU;
volatile int32_t t48 = -15145484;
int64_t x233 = INT64_MAX;
int16_t x235 = -1;
int16_t x237 = INT16_MIN;
static int64_t x239 = -1LL;
uint16_t x244 = 8730U;
uint64_t x245 = UINT64_MAX;
volatile int16_t x247 = INT16_MIN;
int64_t x248 = 1215485681857LL;
volatile uint64_t x251 = 175857573766059728LLU;
uint8_t x260 = 5U;
int32_t x264 = 0;
int64_t x265 = -2068741439LL;
int8_t x268 = INT8_MIN;
static int32_t t57 = -209435038;
volatile int32_t t58 = 1;
volatile int8_t x278 = INT8_MIN;
volatile int64_t t59 = 2386360189LL;
int32_t x281 = 3469;
volatile int32_t t61 = -1429226;
uint16_t x301 = 2330U;
static volatile uint64_t t65 = 521496589906297153LLU;
uint64_t x315 = 347018067252LLU;
uint64_t x316 = 193042250841401855LLU;
static uint16_t x321 = UINT16_MAX;
int16_t x323 = 4;
uint16_t x325 = 11U;
static uint32_t x328 = 1219888925U;
volatile uint64_t t70 = 3750296608893LLU;
volatile int64_t t71 = -36641007LL;
int32_t t73 = 73878119;
uint16_t x341 = 21237U;
uint16_t x350 = 108U;
uint32_t x352 = 28490630U;
uint32_t t76 = 213702934U;
volatile int32_t x354 = INT32_MAX;
static int16_t x358 = -2;
volatile int32_t x362 = -44126;
int16_t x366 = INT16_MIN;
uint8_t x375 = 3U;
volatile int32_t t82 = -641694022;
int32_t x385 = -286616;
static int64_t x388 = INT64_MIN;
int32_t x389 = INT32_MIN;
static volatile int32_t t87 = 1;
static int64_t x401 = INT64_MAX;
int8_t x404 = -52;
int16_t x421 = 4;
uint16_t x422 = 3U;
uint16_t x423 = 6773U;
volatile uint8_t x424 = 1U;
uint32_t x428 = 30020908U;
static uint16_t x430 = 2707U;
static int32_t x432 = -1;
volatile int32_t t94 = 14;
uint32_t x434 = UINT32_MAX;
int64_t x436 = 1516571LL;
uint8_t x442 = UINT8_MAX;
volatile int16_t x444 = INT16_MIN;
volatile int64_t x446 = -1LL;
uint32_t x447 = UINT32_MAX;
int8_t x448 = -1;
volatile int32_t t98 = 111;


void f0(void) {
	uint32_t x1 = 798577U;
	uint32_t x2 = 53204U;
	volatile uint32_t x3 = 52492722U;
	static uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 23118308677839LLU;

	t0 = ((x1<x2)|(x3-x4));

	if (t0 != 52492723LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	int8_t x8 = -1;
	volatile int32_t t1 = 770;

	t1 = ((x5<x6)|(x7-x8));

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static uint8_t x10 = 12U;
	int64_t x11 = INT64_MAX;
	int64_t t2 = 45590399501552LL;

	t2 = ((x9<x10)|(x11-x12));

	if (t2 != 9223372036854775695LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1903U;
	static int32_t x15 = -1;
	int8_t x16 = 0;
	volatile int32_t t3 = 127588219;

	t3 = ((x13<x14)|(x15-x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int8_t x18 = 14;
	int8_t x20 = -1;
	volatile int32_t t4 = -991581;

	t4 = ((x17<x18)|(x19-x20));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 8213502U;
	uint16_t x23 = 226U;

	t5 = ((x21<x22)|(x23-x24));

	if (t5 != 4294934437U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = -1;
	volatile int16_t x31 = INT16_MAX;
	int32_t t6 = -118;

	t6 = ((x29<x30)|(x31-x32));

	if (t6 != 32743) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = 1;
	int16_t x38 = 1;
	int8_t x39 = 26;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t7 = 613586391;

	t7 = ((x37<x38)|(x39-x40));

	if (t7 != 154) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = INT16_MIN;
	uint64_t x46 = 65110LLU;
	static uint32_t x47 = 2U;
	static uint8_t x48 = UINT8_MAX;
	volatile uint32_t t8 = 12750U;

	t8 = ((x45<x46)|(x47-x48));

	if (t8 != 4294967043U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = -317994658239486LL;
	uint32_t x50 = 219751U;
	int64_t x51 = INT64_MIN;
	volatile int8_t x52 = -12;

	t9 = ((x49<x50)|(x51-x52));

	if (t9 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	int64_t x54 = INT64_MIN;
	static volatile int64_t x55 = 0LL;
	uint8_t x56 = 85U;

	t10 = ((x53<x54)|(x55-x56));

	if (t10 != -85LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = 1U;
	uint16_t x60 = UINT16_MAX;
	int32_t t11 = 100974;

	t11 = ((x57<x58)|(x59-x60));

	if (t11 != -65533) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int64_t x62 = INT64_MIN;
	uint8_t x63 = 1U;
	int32_t t12 = -444;

	t12 = ((x61<x62)|(x63-x64));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = 118623U;
	int64_t x66 = INT64_MAX;
	int64_t x67 = INT64_MIN;
	int64_t x68 = -1LL;
	int64_t t13 = 1564241921LL;

	t13 = ((x65<x66)|(x67-x68));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 1;
	static int16_t x70 = INT16_MAX;
	uint16_t x71 = 49U;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t14 = 4136815;

	t14 = ((x69<x70)|(x71-x72));

	if (t14 != -32717) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = INT64_MIN;
	volatile int8_t x74 = -2;
	static int64_t x75 = 2567217799287839LL;
	static int64_t t15 = 112133049601LL;

	t15 = ((x73<x74)|(x75-x76));

	if (t15 != 2567217799287967LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = INT16_MAX;
	int16_t x79 = INT16_MIN;
	int8_t x80 = 24;
	volatile int32_t t16 = 963;

	t16 = ((x77<x78)|(x79-x80));

	if (t16 != -32792) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	static int32_t x83 = 6437;
	int8_t x84 = -6;
	int32_t t17 = 8191400;

	t17 = ((x81<x82)|(x83-x84));

	if (t17 != 6443) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 55LLU;
	uint8_t x90 = 21U;
	int32_t x91 = 3;
	static int8_t x92 = -8;
	volatile int32_t t18 = 123;

	t18 = ((x89<x90)|(x91-x92));

	if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MAX;
	volatile int16_t x95 = INT16_MIN;
	uint8_t x96 = 1U;

	t19 = ((x93<x94)|(x95-x96));

	if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MAX;
	int8_t x98 = -26;
	uint32_t x99 = 8U;
	volatile uint8_t x100 = UINT8_MAX;

	t20 = ((x97<x98)|(x99-x100));

	if (t20 != 4294967049U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = 7U;
	uint32_t x102 = 5310314U;
	int32_t x103 = INT32_MAX;
	volatile uint8_t x104 = 2U;

	t21 = ((x101<x102)|(x103-x104));

	if (t21 != 2147483645) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = 1337;
	int32_t x106 = INT32_MIN;
	int32_t x107 = -1;
	uint64_t x108 = 109LLU;

	t22 = ((x105<x106)|(x107-x108));

	if (t22 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = -6541;
	int32_t x112 = 25802802;

	t23 = ((x109<x110)|(x111-x112));

	if (t23 != 18446744073683748813LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x114 = INT64_MAX;
	uint32_t x115 = 41492U;
	static uint64_t x116 = UINT64_MAX;

	t24 = ((x113<x114)|(x115-x116));

	if (t24 != 41493LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x122 = 6U;
	int16_t x123 = INT16_MAX;

	t25 = ((x121<x122)|(x123-x124));

	if (t25 != 30886LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -1LL;
	static int64_t x126 = INT64_MIN;
	uint8_t x128 = UINT8_MAX;
	int64_t t26 = -192565LL;

	t26 = ((x125<x126)|(x127-x128));

	if (t26 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = 82089LL;
	int32_t t27 = 1870;

	t27 = ((x129<x130)|(x131-x132));

	if (t27 != -32819) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x133 = UINT64_MAX;
	volatile int16_t x135 = -3;
	volatile int32_t x136 = 929;
	static int32_t t28 = 3;

	t28 = ((x133<x134)|(x135-x136));

	if (t28 != -932) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = -1219002169LL;
	uint32_t x143 = UINT32_MAX;
	uint8_t x144 = UINT8_MAX;
	static volatile uint32_t t29 = 161116281U;

	t29 = ((x141<x142)|(x143-x144));

	if (t29 != 4294967041U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 34U;
	volatile int16_t x146 = INT16_MIN;
	volatile int64_t t30 = -96793609375LL;

	t30 = ((x145<x146)|(x147-x148));

	if (t30 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int64_t t31 = -116718343078445LL;

	t31 = ((x149<x150)|(x151-x152));

	if (t31 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MAX;
	volatile int16_t x155 = INT16_MAX;
	uint16_t x156 = 21U;

	t32 = ((x153<x154)|(x155-x156));

	if (t32 != 32747) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = INT32_MAX;
	uint32_t x158 = 250896U;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = -1;
	static uint64_t t33 = 84918539495629330LLU;

	t33 = ((x157<x158)|(x159-x160));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MIN;
	volatile uint16_t x163 = 1U;
	int32_t t34 = -104868;

	t34 = ((x161<x162)|(x163-x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x166 = -1;
	uint64_t x167 = 253LLU;
	int32_t x168 = -1;

	t35 = ((x165<x166)|(x167-x168));

	if (t35 != 254LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = UINT16_MAX;
	static volatile uint8_t x170 = 73U;
	uint16_t x171 = UINT16_MAX;
	static int16_t x172 = -73;
	static volatile int32_t t36 = 1512;

	t36 = ((x169<x170)|(x171-x172));

	if (t36 != 65608) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x173 = -1;
	int32_t x174 = INT32_MAX;
	int16_t x175 = -3;
	int64_t x176 = -1LL;
	int64_t t37 = 1066740526096683LL;

	t37 = ((x173<x174)|(x175-x176));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = 1U;
	static uint8_t x179 = 10U;
	uint32_t x180 = 6910U;
	uint32_t t38 = 19971U;

	t38 = ((x177<x178)|(x179-x180));

	if (t38 != 4294960397U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t39 = 2149596349133238LLU;

	t39 = ((x181<x182)|(x183-x184));

	if (t39 != 4294967297LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	static volatile int32_t x192 = 19141;

	t40 = ((x189<x190)|(x191-x192));

	if (t40 != -19126) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x198 = 277681957337LLU;
	uint8_t x199 = 2U;
	static volatile uint16_t x200 = 20U;

	t41 = ((x197<x198)|(x199-x200));

	if (t41 != -18) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x201 = INT16_MAX;
	int8_t x202 = 0;
	volatile int64_t x203 = 3805LL;
	uint32_t x204 = UINT32_MAX;
	volatile int64_t t42 = 0LL;

	t42 = ((x201<x202)|(x203-x204));

	if (t42 != -4294963490LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x206 = UINT64_MAX;
	uint32_t x207 = 104U;
	int64_t x208 = -44561717747LL;
	volatile int64_t t43 = 3081270517225399LL;

	t43 = ((x205<x206)|(x207-x208));

	if (t43 != 44561717851LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = 54358LLU;
	int16_t x216 = 53;
	volatile int32_t t44 = 752823113;

	t44 = ((x213<x214)|(x215-x216));

	if (t44 != 32714) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x217 = UINT64_MAX;
	int8_t x219 = INT8_MAX;
	int32_t x220 = 130;
	volatile int32_t t45 = 342586;

	t45 = ((x217<x218)|(x219-x220));

	if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = 1047628480LL;
	static int8_t x222 = INT8_MIN;
	uint32_t x223 = 450U;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t46 = 226U;

	t46 = ((x221<x222)|(x223-x224));

	if (t46 != 451U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int64_t x226 = 1LL;
	int8_t x227 = 31;
	volatile int64_t x228 = INT64_MAX;
	volatile int64_t t47 = 15LL;

	t47 = ((x225<x226)|(x227-x228));

	if (t47 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x229 = -26;
	uint32_t x230 = UINT32_MAX;
	static int8_t x231 = INT8_MAX;
	static int32_t x232 = -4981740;

	t48 = ((x229<x230)|(x231-x232));

	if (t48 != 4981867) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x234 = INT32_MIN;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t49 = 33901050;

	t49 = ((x233<x234)|(x235-x236));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x238 = 19340U;
	uint32_t x240 = UINT32_MAX;
	volatile int64_t t50 = -1562LL;

	t50 = ((x237<x238)|(x239-x240));

	if (t50 != -4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = 0;
	int64_t x242 = INT64_MAX;
	int8_t x243 = -1;
	volatile int32_t t51 = 1788344;

	t51 = ((x241<x242)|(x243-x244));

	if (t51 != -8731) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x246 = 73LLU;
	volatile int64_t t52 = -4LL;

	t52 = ((x245<x246)|(x247-x248));

	if (t52 != -1215485714625LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = -1LL;
	int16_t x250 = INT16_MIN;
	int32_t x252 = -1;
	volatile uint64_t t53 = 1072056LLU;

	t53 = ((x249<x250)|(x251-x252));

	if (t53 != 175857573766059729LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = INT64_MAX;
	volatile int8_t x258 = -1;
	uint8_t x259 = 101U;
	int32_t t54 = 1;

	t54 = ((x257<x258)|(x259-x260));

	if (t54 != 96) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = -56;
	static uint64_t x262 = 313263LLU;
	static int8_t x263 = -12;
	int32_t t55 = -19631;

	t55 = ((x261<x262)|(x263-x264));

	if (t55 != -12) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x266 = 18U;
	volatile uint16_t x267 = 0U;
	volatile int32_t t56 = -54022;

	t56 = ((x265<x266)|(x267-x268));

	if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	volatile uint16_t x271 = 4716U;
	int32_t x272 = INT32_MAX;

	t57 = ((x269<x270)|(x271-x272));

	if (t57 != -2147478931) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = 11288U;
	int16_t x274 = INT16_MIN;
	int32_t x275 = 0;
	uint16_t x276 = 110U;

	t58 = ((x273<x274)|(x275-x276));

	if (t58 != -109) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x277 = 39U;
	int64_t x279 = 520272473278455LL;
	volatile int16_t x280 = -1;

	t59 = ((x277<x278)|(x279-x280));

	if (t59 != 520272473278456LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x282 = INT8_MIN;
	uint8_t x283 = 1U;
	int8_t x284 = 10;
	volatile int32_t t60 = 6;

	t60 = ((x281<x282)|(x283-x284));

	if (t60 != -9) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = -466806;
	uint16_t x287 = 26U;
	static uint16_t x288 = 5455U;

	t61 = ((x285<x286)|(x287-x288));

	if (t61 != -5429) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 268019131U;
	volatile int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t62 = 81807;

	t62 = ((x289<x290)|(x291-x292));

	if (t62 != -98303) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x297 = -1;
	volatile int8_t x298 = -1;
	volatile uint32_t x299 = 249914U;
	int32_t x300 = -1;
	volatile uint32_t t63 = 761456991U;

	t63 = ((x297<x298)|(x299-x300));

	if (t63 != 249915U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x302 = INT64_MIN;
	int32_t x303 = -750551063;
	static int32_t x304 = 2139;
	int32_t t64 = 65542;

	t64 = ((x301<x302)|(x303-x304));

	if (t64 != -750553202) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = 875038198U;
	int32_t x306 = INT32_MAX;
	uint64_t x307 = 112833081257237LLU;
	static uint64_t x308 = 3372498859910537LLU;

	t65 = ((x305<x306)|(x307-x308));

	if (t65 != 18443484407930898317LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x309 = 380396U;
	static int16_t x310 = -1;
	int64_t x311 = -250618890502422182LL;
	uint8_t x312 = 0U;
	int64_t t66 = 1472253564723874090LL;

	t66 = ((x309<x310)|(x311-x312));

	if (t66 != -250618890502422181LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = -1;
	int64_t x314 = INT64_MIN;
	uint64_t t67 = 42LLU;

	t67 = ((x313<x314)|(x315-x316));

	if (t67 != 18253702169886217013LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = -6731;
	uint32_t x319 = 16U;
	static int32_t x320 = INT32_MAX;
	static uint32_t t68 = 390U;

	t68 = ((x317<x318)|(x319-x320));

	if (t68 != 2147483665U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x322 = UINT32_MAX;
	int16_t x324 = -31;
	static int32_t t69 = 12479555;

	t69 = ((x321<x322)|(x323-x324));

	if (t69 != 35) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 17LLU;

	t70 = ((x325<x326)|(x327-x328));

	if (t70 != 18446744072489662709LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = INT16_MAX;
	static volatile int64_t x330 = 1LL;
	static int64_t x331 = -738830031619LL;
	static int16_t x332 = 31;

	t71 = ((x329<x330)|(x331-x332));

	if (t71 != -738830031650LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x333 = -1;
	volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = 8917371340009029369LLU;
	volatile uint16_t x336 = UINT16_MAX;
	uint64_t t72 = 13902019354347LLU;

	t72 = ((x333<x334)|(x335-x336));

	if (t72 != 8917371340008963834LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 27U;

	t73 = ((x337<x338)|(x339-x340));

	if (t73 != 229) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = INT64_MAX;
	uint16_t x344 = 1010U;
	int64_t t74 = 62390488600LL;

	t74 = ((x341<x342)|(x343-x344));

	if (t74 != 9223372036854774797LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = -26132282226LL;
	int8_t x347 = 3;
	int16_t x348 = INT16_MAX;
	int32_t t75 = -52093503;

	t75 = ((x345<x346)|(x347-x348));

	if (t75 != -32764) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x349 = -1LL;
	int32_t x351 = -1;

	t76 = ((x349<x350)|(x351-x352));

	if (t76 != 4266476665U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	int32_t x355 = -26146;
	int32_t x356 = 437107431;
	volatile int32_t t77 = -226732705;

	t77 = ((x353<x354)|(x355-x356));

	if (t77 != -437133577) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x357 = 0U;
	int16_t x359 = -1;
	volatile uint16_t x360 = UINT16_MAX;
	int32_t t78 = 0;

	t78 = ((x357<x358)|(x359-x360));

	if (t78 != -65536) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x361 = 4U;
	static int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = 6583006U;
	uint32_t t79 = 104646U;

	t79 = ((x361<x362)|(x363-x364));

	if (t79 != 4288384162U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = 2;
	int64_t x368 = 0LL;
	volatile int64_t t80 = 66552459375808138LL;

	t80 = ((x365<x366)|(x367-x368));

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x369 = 1231;
	volatile int32_t x370 = -1;
	int16_t x371 = 5;
	static uint32_t x372 = UINT32_MAX;
	uint32_t t81 = 120U;

	t81 = ((x369<x370)|(x371-x372));

	if (t81 != 6U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x373 = UINT64_MAX;
	static int32_t x374 = INT32_MIN;
	uint16_t x376 = 30U;

	t82 = ((x373<x374)|(x375-x376));

	if (t82 != -27) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x377 = 3U;
	int8_t x378 = -2;
	volatile int64_t x379 = 67614004616094LL;
	volatile int32_t x380 = INT32_MAX;
	volatile int64_t t83 = 2462107696995059362LL;

	t83 = ((x377<x378)|(x379-x380));

	if (t83 != 67611857132447LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 5U;
	int32_t x384 = 218065;
	uint32_t t84 = 15114653U;

	t84 = ((x381<x382)|(x383-x384));

	if (t84 != 4294749236U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x386 = 4479U;
	volatile int64_t x387 = -470703993257529701LL;
	volatile int64_t t85 = 140034886791356LL;

	t85 = ((x385<x386)|(x387-x388));

	if (t85 != 8752668043597246107LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x390 = -1;
	static int8_t x391 = -1;
	static volatile uint64_t x392 = 1674169526182LLU;
	volatile uint64_t t86 = 1347LLU;

	t86 = ((x389<x390)|(x391-x392));

	if (t86 != 18446742399540025433LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x397 = -438173386691276LL;
	uint64_t x398 = 32441986737LLU;
	int16_t x399 = -1;
	uint8_t x400 = 2U;

	t87 = ((x397<x398)|(x399-x400));

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x402 = 0U;
	volatile int8_t x403 = INT8_MIN;
	int32_t t88 = -5;

	t88 = ((x401<x402)|(x403-x404));

	if (t88 != -76) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = 129859283553176623LL;
	uint64_t x406 = 3LLU;
	static int64_t x407 = 2364286314491LL;
	volatile int8_t x408 = INT8_MIN;
	static volatile int64_t t89 = -861505354166LL;

	t89 = ((x405<x406)|(x407-x408));

	if (t89 != 2364286314619LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x409 = -1;
	static int8_t x410 = 1;
	uint32_t x411 = UINT32_MAX;
	uint8_t x412 = UINT8_MAX;
	static uint32_t t90 = 196U;

	t90 = ((x409<x410)|(x411-x412));

	if (t90 != 4294967041U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x413 = INT8_MAX;
	static int16_t x414 = INT16_MAX;
	uint32_t x415 = 2U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t91 = 4LLU;

	t91 = ((x413<x414)|(x415-x416));

	if (t91 != 3LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t t92 = -516550160;

	t92 = ((x421<x422)|(x423-x424));

	if (t92 != 6772) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = -117LL;
	int32_t x426 = -1;
	static int64_t x427 = 35LL;
	int64_t t93 = 2560911431235732368LL;

	t93 = ((x425<x426)|(x427-x428));

	if (t93 != -30020873LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x429 = INT32_MIN;
	int8_t x431 = INT8_MIN;

	t94 = ((x429<x430)|(x431-x432));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = -1;
	uint8_t x435 = UINT8_MAX;
	int64_t t95 = 214379192987198594LL;

	t95 = ((x433<x434)|(x435-x436));

	if (t95 != -1516316LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = 198455134394515273LL;
	int8_t x443 = -1;
	volatile int32_t t96 = -142574063;

	t96 = ((x441<x442)|(x443-x444));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x445 = 13U;
	volatile uint32_t t97 = 271U;

	t97 = ((x445<x446)|(x447-x448));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = 0;
	static uint64_t x450 = UINT64_MAX;
	static int16_t x451 = INT16_MAX;
	uint16_t x452 = 5440U;

	t98 = ((x449<x450)|(x451-x452));

	if (t98 != 27327) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = 5LL;
	static int8_t x454 = 33;
	uint64_t x455 = UINT64_MAX;
	volatile int16_t x456 = INT16_MAX;
	static volatile uint64_t t99 = 3LLU;

	t99 = ((x453<x454)|(x455-x456));

	if (t99 != 18446744073709518849LLU) { NG(); } else { ; }
	
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

