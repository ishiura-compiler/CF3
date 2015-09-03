#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1827;
uint64_t t1 = 1069LLU;
volatile uint8_t x13 = 0U;
int16_t x16 = -4;
int8_t x20 = INT8_MIN;
uint16_t x24 = UINT16_MAX;
int32_t t5 = 32061522;
uint16_t x31 = 3U;
uint64_t x38 = 1LLU;
static int32_t x41 = INT32_MAX;
int16_t x44 = -1;
uint8_t x45 = 2U;
static int16_t x48 = 3285;
int64_t x49 = 1LL;
volatile int64_t t12 = 836110017953LL;
int32_t x54 = INT32_MIN;
int8_t x59 = INT8_MIN;
static int16_t x66 = INT16_MIN;
int8_t x67 = INT8_MAX;
volatile int32_t t16 = 0;
int16_t x73 = -31;
int32_t x74 = -3;
uint8_t x77 = 1U;
int16_t x82 = INT16_MIN;
int16_t x83 = INT16_MIN;
int16_t x87 = INT16_MIN;
volatile int32_t t21 = 1;
volatile uint16_t x94 = 313U;
int16_t x97 = -1;
volatile uint64_t t24 = 3215415812LLU;
volatile uint64_t t25 = 411254122LLU;
int16_t x114 = INT16_MAX;
uint16_t x118 = 3224U;
int8_t x138 = INT8_MIN;
volatile uint64_t x141 = 5130951339259LLU;
static volatile uint64_t t33 = 172347949LLU;
volatile uint64_t t36 = 14178890LLU;
int16_t x159 = 10299;
volatile uint32_t t38 = 23417049U;
volatile int64_t x168 = -1LL;
uint32_t x170 = 6U;
static volatile uint64_t t40 = 25792649LLU;
uint8_t x174 = 58U;
int8_t x178 = INT8_MIN;
int8_t x182 = INT8_MAX;
int16_t x186 = INT16_MAX;
static int32_t t44 = -2;
int8_t x191 = -1;
uint32_t x197 = UINT32_MAX;
int8_t x207 = -1;
static int16_t x208 = -1;
volatile int32_t x211 = -56974;
static int8_t x218 = INT8_MIN;
int16_t x221 = 1;
int16_t x227 = INT16_MIN;
static int64_t x243 = 285LL;
static volatile int32_t t57 = 1263;
int8_t x246 = INT8_MAX;
uint8_t x247 = UINT8_MAX;
uint8_t x251 = 1U;
uint16_t x252 = 45U;
volatile int8_t x253 = -7;
int64_t x254 = -1LL;
int8_t x262 = -1;
static volatile int64_t t63 = 13770323584113266LL;
volatile uint64_t t64 = 223LLU;
uint8_t x274 = UINT8_MAX;
uint8_t x277 = 43U;
uint32_t t68 = 621464U;
static int32_t x293 = 204587;
volatile uint32_t x304 = 89196106U;
uint32_t x305 = 181689877U;
uint64_t x332 = 313146128164406LLU;
int16_t x336 = -2756;
int32_t x343 = 9691638;
uint64_t x344 = 1LLU;
int64_t x354 = -1LL;
int16_t x361 = 0;
uint64_t x363 = UINT64_MAX;
static uint32_t x364 = 7971U;
static volatile int32_t x383 = -228682;
volatile int16_t x384 = -1;
int32_t t88 = -56323;
int8_t x389 = INT8_MAX;
volatile uint32_t t89 = 34U;
int64_t x399 = INT64_MIN;
int16_t x418 = -8643;
uint8_t x419 = 1U;
volatile int32_t t95 = 1020204;
int16_t x422 = -1;
int8_t x423 = INT8_MAX;
static uint32_t x439 = UINT32_MAX;


void f0(void) {
	uint16_t x1 = 17728U;
	int64_t x2 = INT64_MAX;
	volatile uint32_t x3 = 1U;
	static int64_t x4 = INT64_MAX;
	int64_t t0 = -1365007LL;

	t0 = ((x1-x2)|(x3<x4));

	if (t0 != -9223372036854758079LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 302598447092636071LLU;
	int32_t x7 = -1;
	static int32_t x8 = INT32_MIN;

	t1 = ((x5-x6)|(x7<x8));

	if (t1 != 302598447092637898LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -49811523675333493LL;
	int16_t x10 = INT16_MAX;
	int32_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int64_t t2 = -4332685LL;

	t2 = ((x9-x10)|(x11<x12));

	if (t2 != -49811523675366260LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 11;

	t3 = ((x13-x14)|(x15<x16));

	if (t3 != 129) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = 0U;
	volatile int64_t x19 = -445831LL;
	volatile int32_t t4 = -132546076;

	t4 = ((x17-x18)|(x19<x20));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -28939;
	int16_t x22 = 127;
	uint16_t x23 = UINT16_MAX;

	t5 = ((x21-x22)|(x23<x24));

	if (t5 != -29066) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MAX;
	uint16_t x26 = UINT16_MAX;
	volatile int32_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 4169242;

	t6 = ((x25-x26)|(x27<x28));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = 3241;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -3;

	t7 = ((x29-x30)|(x31<x32));

	if (t7 != -36009) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -709719;
	int8_t x34 = INT8_MIN;
	static uint32_t x35 = 43040U;
	uint32_t x36 = UINT32_MAX;
	static int32_t t8 = 5180250;

	t8 = ((x33-x34)|(x35<x36));

	if (t8 != -709591) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 202;
	uint32_t x39 = 3U;
	int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 3190921LLU;

	t9 = ((x37-x38)|(x39<x40));

	if (t9 != 201LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = 1;
	int8_t x43 = INT8_MAX;
	volatile int32_t t10 = -1;

	t10 = ((x41-x42)|(x43<x44));

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 572003006U;
	int64_t x47 = -1LL;
	uint32_t t11 = 14223389U;

	t11 = ((x45-x46)|(x47<x48));

	if (t11 != 3722964293U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = UINT8_MAX;

	t12 = ((x49-x50)|(x51<x52));

	if (t12 != 2147483649LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t x55 = -6584035;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 5151;

	t13 = ((x53-x54)|(x55<x56));

	if (t13 != 2147483521) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int32_t x58 = -1;
	int32_t x60 = -1;
	static int32_t t14 = 43896717;

	t14 = ((x57-x58)|(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 19U;
	int32_t x68 = -11192;
	int32_t t15 = 32382261;

	t15 = ((x65-x66)|(x67<x68));

	if (t15 != 32787) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int32_t x70 = -435871;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MAX;

	t16 = ((x69-x70)|(x71<x72));

	if (t16 != 435870) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t17 = 0;

	t17 = ((x73-x74)|(x75<x76));

	if (t17 != -28) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x78 = 11373005LLU;
	int16_t x79 = -1;
	int64_t x80 = INT64_MAX;
	volatile uint64_t t18 = 273233784487625999LLU;

	t18 = ((x77-x78)|(x79<x80));

	if (t18 != 18446744073698178613LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	volatile int64_t x84 = -1LL;
	volatile int32_t t19 = -17191647;

	t19 = ((x81-x82)|(x83<x84));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 1758U;
	volatile int64_t x86 = INT64_MAX;
	volatile int8_t x88 = -1;
	int64_t t20 = -9942049LL;

	t20 = ((x85-x86)|(x87<x88));

	if (t20 != -9223372036854774049LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 1U;
	int16_t x90 = INT16_MAX;
	volatile int16_t x91 = INT16_MIN;
	static int64_t x92 = INT64_MAX;

	t21 = ((x89-x90)|(x91<x92));

	if (t21 != -32765) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	uint64_t x95 = 339785125608586LLU;
	static int64_t x96 = -1LL;
	int32_t t22 = 3444367;

	t22 = ((x93-x94)|(x95<x96));

	if (t22 != -313) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = 33;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -1;
	int32_t t23 = -6696;

	t23 = ((x97-x98)|(x99<x100));

	if (t23 != -33) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x101 = 3LLU;
	static volatile uint16_t x102 = 8U;
	int16_t x103 = INT16_MAX;
	volatile int32_t x104 = -834287561;

	t24 = ((x101-x102)|(x103<x104));

	if (t24 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 3636357;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = 0;
	uint8_t x112 = UINT8_MAX;

	t25 = ((x109-x110)|(x111<x112));

	if (t25 != 3636359LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	uint8_t x115 = UINT8_MAX;
	uint8_t x116 = 6U;
	static volatile int64_t t26 = -2348113918LL;

	t26 = ((x113-x114)|(x115<x116));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	uint8_t x120 = 1U;
	volatile int32_t t27 = 49;

	t27 = ((x117-x118)|(x119<x120));

	if (t27 != -35992) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int32_t x122 = -2943564;
	int8_t x123 = INT8_MIN;
	int8_t x124 = 1;
	static volatile int32_t t28 = -32;

	t28 = ((x121-x122)|(x123<x124));

	if (t28 != 3009099) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 1059100;
	int8_t x126 = INT8_MIN;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t29 = 1;

	t29 = ((x125-x126)|(x127<x128));

	if (t29 != 1059228) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MIN;
	uint8_t x130 = 45U;
	int16_t x131 = -11935;
	volatile int16_t x132 = -10439;
	int32_t t30 = -6;

	t30 = ((x129-x130)|(x131<x132));

	if (t30 != -173) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = -1;
	int16_t x134 = INT16_MAX;
	int32_t x135 = -1;
	uint8_t x136 = 2U;
	int32_t t31 = 349330;

	t31 = ((x133-x134)|(x135<x136));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 57;
	static volatile int32_t x139 = INT32_MIN;
	static uint8_t x140 = 14U;
	volatile int32_t t32 = 12414;

	t32 = ((x137-x138)|(x139<x140));

	if (t32 != 185) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = -1LL;
	static uint16_t x143 = 53U;
	int64_t x144 = -1LL;

	t33 = ((x141-x142)|(x143<x144));

	if (t33 != 5130951339260LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 20013405080889LLU;
	int32_t t34 = -2;

	t34 = ((x145-x146)|(x147<x148));

	if (t34 != -65280) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = -1;
	uint16_t x151 = 74U;
	int32_t x152 = 3906;
	int32_t t35 = -5;

	t35 = ((x149-x150)|(x151<x152));

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = -1LL;
	uint64_t x154 = UINT64_MAX;
	volatile int64_t x155 = -1LL;
	int8_t x156 = -58;

	t36 = ((x153-x154)|(x155<x156));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 5;
	static uint16_t x158 = UINT16_MAX;
	volatile int32_t x160 = -1;
	int32_t t37 = 2592;

	t37 = ((x157-x158)|(x159<x160));

	if (t37 != -65530) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 27U;
	volatile int16_t x162 = -2392;
	static int64_t x163 = -7959436738380341LL;
	static int32_t x164 = 16396;

	t38 = ((x161-x162)|(x163<x164));

	if (t38 != 2419U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 571LLU;
	int32_t x166 = 1;
	int8_t x167 = 1;
	volatile uint64_t t39 = 21103838937LLU;

	t39 = ((x165-x166)|(x167<x168));

	if (t39 != 570LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 672841487LLU;
	static int8_t x171 = INT8_MIN;
	uint8_t x172 = 0U;

	t40 = ((x169-x170)|(x171<x172));

	if (t40 != 672841481LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 228568447U;
	int8_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	static uint32_t t41 = 45U;

	t41 = ((x173-x174)|(x175<x176));

	if (t41 != 228568389U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	volatile uint64_t x179 = 2479638029952381LLU;
	int64_t x180 = -1LL;
	int32_t t42 = 58853603;

	t42 = ((x177-x178)|(x179<x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	int32_t x183 = -1;
	int8_t x184 = INT8_MIN;
	volatile int64_t t43 = -8227598604203LL;

	t43 = ((x181-x182)|(x183<x184));

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -2015;
	int16_t x187 = 0;
	int8_t x188 = INT8_MAX;

	t44 = ((x185-x186)|(x187<x188));

	if (t44 != -34781) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t x190 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	uint32_t t45 = 6578765U;

	t45 = ((x189-x190)|(x191<x192));

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int16_t x194 = INT16_MAX;
	static int64_t x195 = 1LL;
	int16_t x196 = INT16_MAX;
	int32_t t46 = 560;

	t46 = ((x193-x194)|(x195<x196));

	if (t46 != -32511) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = INT8_MIN;
	volatile int64_t x199 = INT64_MAX;
	volatile uint16_t x200 = 7273U;
	uint32_t t47 = 64632022U;

	t47 = ((x197-x198)|(x199<x200));

	if (t47 != 127U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	static int32_t x203 = -758172;
	static int32_t x204 = INT32_MAX;
	uint64_t t48 = 725179965239060777LLU;

	t48 = ((x201-x202)|(x203<x204));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = 972853194LL;
	static int32_t x206 = -1;
	int64_t t49 = -63521614LL;

	t49 = ((x205-x206)|(x207<x208));

	if (t49 != 972853195LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MAX;
	int16_t x212 = 1;
	volatile int64_t t50 = 20766924493341801LL;

	t50 = ((x209-x210)|(x211<x212));

	if (t50 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 408LLU;
	int32_t x215 = -1;
	int64_t x216 = 10069762LL;
	static volatile uint64_t t51 = 1017023349LLU;

	t51 = ((x213-x214)|(x215<x216));

	if (t51 != 18446744073709551207LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -6995954;
	volatile uint16_t x219 = UINT16_MAX;
	static int32_t x220 = INT32_MAX;
	int32_t t52 = -43;

	t52 = ((x217-x218)|(x219<x220));

	if (t52 != -6995825) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x222 = 1144U;
	int32_t x223 = INT32_MIN;
	volatile int64_t x224 = INT64_MAX;
	volatile uint32_t t53 = 2938U;

	t53 = ((x221-x222)|(x223<x224));

	if (t53 != 4294966153U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 146162;
	int16_t x226 = INT16_MAX;
	int32_t x228 = INT32_MAX;
	volatile int32_t t54 = -12;

	t54 = ((x225-x226)|(x227<x228));

	if (t54 != 113395) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = 534597156531967322LL;
	volatile int64_t x230 = -6037467487923LL;
	volatile int16_t x231 = INT16_MIN;
	static uint16_t x232 = 11298U;
	int64_t t55 = 188935530544557617LL;

	t55 = ((x229-x230)|(x231<x232));

	if (t55 != 534603193999455245LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 3561944402629LLU;
	uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 334LLU;
	static int16_t x240 = -491;
	uint64_t t56 = 33896094692015LLU;

	t56 = ((x237-x238)|(x239<x240));

	if (t56 != 3561944402375LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 12U;
	volatile uint8_t x242 = 50U;
	static int16_t x244 = INT16_MAX;

	t57 = ((x241-x242)|(x243<x244));

	if (t57 != -37) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 37859U;
	static int8_t x248 = INT8_MAX;
	volatile uint32_t t58 = 0U;

	t58 = ((x245-x246)|(x247<x248));

	if (t58 != 37732U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = -234286717428LL;
	static uint16_t x250 = UINT16_MAX;
	volatile int64_t t59 = 277536007850LL;

	t59 = ((x249-x250)|(x251<x252));

	if (t59 != -234286782963LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x255 = INT32_MAX;
	uint8_t x256 = UINT8_MAX;
	static volatile int64_t t60 = 533LL;

	t60 = ((x253-x254)|(x255<x256));

	if (t60 != -6LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = -1;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t61 = 1278544506486203117LLU;

	t61 = ((x257-x258)|(x259<x260));

	if (t61 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -1;
	static uint32_t x263 = 3U;
	static int16_t x264 = 85;
	static volatile int32_t t62 = -8108490;

	t62 = ((x261-x262)|(x263<x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	int8_t x267 = -1;
	static volatile int16_t x268 = INT16_MIN;

	t63 = ((x265-x266)|(x267<x268));

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x269 = 8U;
	static uint64_t x270 = 6865127749029LLU;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MAX;

	t64 = ((x269-x270)|(x271<x272));

	if (t64 != 18446737208581802595LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x273 = 174;
	volatile uint64_t x275 = 16517467470LLU;
	static uint32_t x276 = 8119625U;
	volatile int32_t t65 = 3793110;

	t65 = ((x273-x274)|(x275<x276));

	if (t65 != -81) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static int16_t x280 = -10326;
	static volatile int32_t t66 = -1059728;

	t66 = ((x277-x278)|(x279<x280));

	if (t66 != 45) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	static int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 8U;
	int32_t t67 = -51512;

	t67 = ((x281-x282)|(x283<x284));

	if (t67 != -32895) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 172606370U;
	uint8_t x286 = 5U;
	volatile int8_t x287 = 1;
	volatile int32_t x288 = -1;

	t68 = ((x285-x286)|(x287<x288));

	if (t68 != 172606365U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x289 = 0;
	int16_t x290 = 49;
	uint32_t x291 = 52U;
	static volatile int64_t x292 = -1LL;
	volatile int32_t t69 = 12498;

	t69 = ((x289-x290)|(x291<x292));

	if (t69 != -49) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = INT8_MIN;
	static volatile int16_t x295 = 0;
	int64_t x296 = INT64_MIN;
	int32_t t70 = -4;

	t70 = ((x293-x294)|(x295<x296));

	if (t70 != 204715) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = -37;
	int16_t x303 = -1;
	int32_t t71 = -6;

	t71 = ((x301-x302)|(x303<x304));

	if (t71 != -32731) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x306 = INT32_MAX;
	int8_t x307 = 39;
	int16_t x308 = -26;
	uint32_t t72 = 24U;

	t72 = ((x305-x306)|(x307<x308));

	if (t72 != 2329173526U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MIN;
	static int16_t x314 = INT16_MIN;
	static volatile int32_t x315 = INT32_MIN;
	int8_t x316 = -6;
	int64_t t73 = -51779420530LL;

	t73 = ((x313-x314)|(x315<x316));

	if (t73 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 8U;
	uint16_t x318 = 861U;
	volatile int8_t x319 = -15;
	volatile int8_t x320 = -51;
	volatile int32_t t74 = -13220;

	t74 = ((x317-x318)|(x319<x320));

	if (t74 != -853) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -1;
	volatile int16_t x322 = -1;
	int32_t x323 = -2114690;
	int64_t x324 = INT64_MAX;
	static int32_t t75 = 132063;

	t75 = ((x321-x322)|(x323<x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	volatile int16_t x326 = -1;
	volatile uint16_t x327 = 156U;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t76 = 1351;

	t76 = ((x325-x326)|(x327<x328));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = 386U;
	uint64_t x330 = 4641890LLU;
	static int32_t x331 = INT32_MAX;
	volatile uint64_t t77 = 7654LLU;

	t77 = ((x329-x330)|(x331<x332));

	if (t77 != 18446744073704910113LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	static uint64_t x335 = 823743934433254071LLU;
	volatile uint64_t t78 = 2918987766323850806LLU;

	t78 = ((x333-x334)|(x335<x336));

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = -1;
	int32_t x338 = 176963;
	volatile int16_t x339 = INT16_MIN;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t79 = -30;

	t79 = ((x337-x338)|(x339<x340));

	if (t79 != -176964) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	int16_t x342 = -1;
	static int32_t t80 = 0;

	t80 = ((x341-x342)|(x343<x344));

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = 106174;
	static int8_t x346 = -1;
	volatile int64_t x347 = 395035026740597719LL;
	int64_t x348 = -1341641798277750LL;
	volatile int32_t t81 = -3127364;

	t81 = ((x345-x346)|(x347<x348));

	if (t81 != 106175) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -634179218;
	int16_t x350 = -1;
	volatile int64_t x351 = INT64_MIN;
	int16_t x352 = -1;
	volatile int32_t t82 = -587;

	t82 = ((x349-x350)|(x351<x352));

	if (t82 != -634179217) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = -1;
	static volatile int16_t x355 = -1;
	uint32_t x356 = 1767527U;
	int64_t t83 = 5324994LL;

	t83 = ((x353-x354)|(x355<x356));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x362 = INT16_MIN;
	volatile int32_t t84 = 349;

	t84 = ((x361-x362)|(x363<x364));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = -1;
	static uint64_t x370 = UINT64_MAX;
	static int64_t x371 = 98998LL;
	uint8_t x372 = 27U;
	volatile uint64_t t85 = 3501670090LLU;

	t85 = ((x369-x370)|(x371<x372));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = INT8_MIN;
	static int32_t x374 = 477;
	volatile uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 52U;
	static int32_t t86 = 0;

	t86 = ((x373-x374)|(x375<x376));

	if (t86 != -605) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x377 = INT16_MAX;
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = 112U;
	int32_t x380 = -61;
	uint64_t t87 = 599LLU;

	t87 = ((x377-x378)|(x379<x380));

	if (t87 != 32769LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x381 = -21;
	int8_t x382 = -4;

	t88 = ((x381-x382)|(x383<x384));

	if (t88 != -17) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x390 = 4375U;
	int64_t x391 = INT64_MIN;
	static uint32_t x392 = 1U;

	t89 = ((x389-x390)|(x391<x392));

	if (t89 != 4294963049U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = 1LL;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x400 = INT16_MIN;
	int64_t t90 = -38537830816LL;

	t90 = ((x397-x398)|(x399<x400));

	if (t90 != -65533LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x401 = -134411089457012LL;
	volatile uint8_t x402 = 20U;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 25LLU;
	volatile int64_t t91 = -789250192435LL;

	t91 = ((x401-x402)|(x403<x404));

	if (t91 != -134411089457032LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x405 = 2U;
	static volatile int16_t x406 = INT16_MIN;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = -1;
	int32_t t92 = 649544014;

	t92 = ((x405-x406)|(x407<x408));

	if (t92 != 32770) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = 123139675LL;
	static int8_t x410 = -31;
	int16_t x411 = 636;
	uint16_t x412 = 4074U;
	volatile int64_t t93 = 196641LL;

	t93 = ((x409-x410)|(x411<x412));

	if (t93 != 123139707LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = 0;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = INT16_MIN;
	uint8_t x416 = UINT8_MAX;
	volatile uint32_t t94 = 5U;

	t94 = ((x413-x414)|(x415<x416));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x417 = UINT16_MAX;
	int16_t x420 = 112;

	t95 = ((x417-x418)|(x419<x420));

	if (t95 != 74179) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = -1LL;
	int64_t x424 = INT64_MIN;
	volatile int64_t t96 = 159091490150378LL;

	t96 = ((x421-x422)|(x423<x424));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = 39U;
	uint32_t x430 = UINT32_MAX;
	volatile uint8_t x431 = 49U;
	int32_t x432 = INT32_MIN;
	uint32_t t97 = 14305043U;

	t97 = ((x429-x430)|(x431<x432));

	if (t97 != 40U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = INT16_MIN;
	static uint16_t x434 = 4U;
	int8_t x435 = INT8_MAX;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t98 = -29387002;

	t98 = ((x433-x434)|(x435<x436));

	if (t98 != -32772) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = 57;
	static uint8_t x438 = 81U;
	uint16_t x440 = 22711U;
	volatile int32_t t99 = -6386;

	t99 = ((x437-x438)|(x439<x440));

	if (t99 != -24) { NG(); } else { ; }
	
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

