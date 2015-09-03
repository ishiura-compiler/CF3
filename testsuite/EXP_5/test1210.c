#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 418594699LL;
static uint16_t x12 = UINT16_MAX;
int32_t x13 = 549018;
volatile uint8_t x22 = 3U;
int8_t x23 = 0;
static int32_t x32 = INT32_MIN;
int8_t x44 = INT8_MIN;
int64_t x47 = -1LL;
volatile uint64_t t11 = 48163015835LLU;
volatile int8_t x66 = 10;
uint32_t x68 = 4U;
uint64_t x74 = 3596LLU;
int16_t x75 = INT16_MIN;
int32_t x80 = -1;
volatile uint8_t x84 = 28U;
uint32_t t21 = 5990048U;
int16_t x94 = -3107;
int32_t x99 = 53969759;
int32_t x108 = -81;
volatile uint16_t x111 = 3U;
int8_t x115 = -1;
int64_t t29 = -10532776625191LL;
int32_t x121 = -1;
int16_t x122 = INT16_MAX;
static int64_t x124 = -1LL;
static volatile uint16_t x127 = 3751U;
static volatile uint32_t t32 = 333949127U;
int8_t x140 = INT8_MAX;
int32_t x141 = INT32_MIN;
int16_t x144 = 10;
static volatile int64_t x145 = INT64_MAX;
uint32_t x147 = UINT32_MAX;
int64_t x149 = INT64_MIN;
volatile int64_t t37 = INT64_MIN;
volatile int32_t x155 = -38;
int8_t x156 = -1;
int64_t t39 = INT64_MAX;
static volatile uint8_t x166 = UINT8_MAX;
int64_t x167 = -1LL;
volatile int64_t t41 = 2100855908427792495LL;
int32_t x176 = INT32_MIN;
int64_t x178 = INT64_MIN;
int32_t x180 = -263540;
int64_t x193 = 37834694247978615LL;
uint64_t x195 = UINT64_MAX;
uint64_t t48 = 942LLU;
int32_t t49 = 1;
int16_t x205 = INT16_MIN;
int8_t x207 = INT8_MIN;
int32_t x211 = -1;
uint16_t x215 = 210U;
static volatile int32_t t53 = -6;
int32_t x218 = INT32_MAX;
int16_t x233 = 35;
uint32_t x235 = 3U;
uint16_t x236 = 189U;
int64_t x246 = -634LL;
static int8_t x253 = INT8_MIN;
volatile int64_t t63 = -7357607723LL;
uint16_t x257 = 10067U;
int64_t x258 = -471LL;
int32_t t64 = 315;
int16_t x272 = -477;
int32_t t67 = -68229;
int64_t x285 = 2988483LL;
int16_t x289 = INT16_MIN;
int16_t x293 = INT16_MAX;
int8_t x294 = -1;
volatile uint64_t x296 = UINT64_MAX;
int32_t t75 = 569;
int8_t x307 = INT8_MAX;
static volatile int32_t t76 = 21;
static volatile int32_t x313 = INT32_MAX;
static int8_t x315 = -1;
volatile uint32_t t78 = 1418286062U;
int64_t x319 = INT64_MIN;
int32_t t79 = -308508569;
static int32_t x329 = 184966977;
static int64_t x337 = INT64_MAX;
int16_t x341 = 82;
uint32_t t85 = 2798383U;
int16_t x346 = INT16_MIN;
int32_t x347 = INT32_MIN;
volatile int64_t t86 = 5LL;
static int16_t x351 = INT16_MAX;
static int32_t x352 = -1;
volatile int32_t t88 = -3204911;
uint64_t x357 = 2573166724074LLU;
static int16_t x364 = -1;
volatile uint64_t x372 = UINT64_MAX;
int16_t x376 = INT16_MIN;
volatile int32_t t93 = -3834;
volatile int32_t t94 = 786;
uint8_t x382 = 74U;
int64_t x390 = INT64_MIN;
int32_t x391 = -999425;
static volatile int16_t x394 = -9655;
static volatile uint64_t x399 = 2469326970064408051LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MIN;
	volatile int16_t x3 = INT16_MAX;
	static int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -373442492;

	t0 = (x1+((x2==x3)*x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	static uint32_t x6 = 6647U;
	static int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;

	t1 = (x5+((x6==x7)*x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int32_t x10 = INT32_MAX;
	uint32_t x11 = UINT32_MAX;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x9+((x10==x11)*x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -44;

	t3 = (x13+((x14==x15)*x16));

	if (t3 != 549018) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = 30U;
	volatile int16_t x19 = INT16_MAX;
	int8_t x20 = 1;
	static int32_t t4 = 81762074;

	t4 = (x17+((x18==x19)*x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int32_t x24 = INT32_MAX;
	int32_t t5 = 1343534;

	t5 = (x21+((x22==x23)*x24));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 109205375U;
	static int16_t x26 = INT16_MAX;
	uint16_t x27 = 931U;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 129570840LLU;

	t6 = (x25+((x26==x27)*x28));

	if (t6 != 109205375LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x29+((x30==x31)*x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 257534562LLU;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 0U;
	uint64_t t8 = 1182737217355LLU;

	t8 = (x33+((x34==x35)*x36));

	if (t8 != 257534562LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int32_t x38 = INT32_MIN;
	int32_t x39 = 20708;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -341454;

	t9 = (x37+((x38==x39)*x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	int8_t x43 = 1;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x41+((x42==x43)*x44));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 12931088976096LLU;
	uint16_t x46 = UINT16_MAX;
	int64_t x48 = INT64_MIN;

	t11 = (x45+((x46==x47)*x48));

	if (t11 != 12931088976096LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile uint64_t x50 = 4142345903858LLU;
	int32_t x51 = -1;
	int16_t x52 = INT16_MAX;
	static volatile int32_t t12 = 1811;

	t12 = (x49+((x50==x51)*x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	volatile uint32_t x54 = 2U;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = 1946;
	int32_t t13 = -318767342;

	t13 = (x53+((x54==x55)*x56));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = -1;
	int32_t x59 = 1;
	int16_t x60 = INT16_MIN;
	static int64_t t14 = INT64_MIN;

	t14 = (x57+((x58==x59)*x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile int8_t x62 = -3;
	int32_t x63 = -521;
	static volatile int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 725658241;

	t15 = (x61+((x62==x63)*x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static volatile int8_t x67 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x65+((x66==x67)*x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = 0;
	int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MIN;
	int64_t t17 = INT64_MIN;

	t17 = (x69+((x70==x71)*x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int32_t x76 = -1035617161;
	int32_t t18 = 0;

	t18 = (x73+((x74==x75)*x76));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	uint16_t x78 = 7228U;
	int16_t x79 = -1;
	int32_t t19 = INT32_MAX;

	t19 = (x77+((x78==x79)*x80));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -24;
	volatile int16_t x82 = INT16_MIN;
	int32_t x83 = 36;
	volatile int32_t t20 = -13;

	t20 = (x81+((x82==x83)*x84));

	if (t20 != -24) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	uint32_t x87 = UINT32_MAX;
	uint32_t x88 = 7167U;

	t21 = (x85+((x86==x87)*x88));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 5551LLU;
	static uint64_t x90 = 1LLU;
	uint16_t x91 = 65U;
	volatile int64_t x92 = INT64_MIN;
	volatile uint64_t t22 = 3489053640LLU;

	t22 = (x89+((x90==x91)*x92));

	if (t22 != 5551LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 53;
	static volatile int32_t x95 = -1;
	uint8_t x96 = 1U;
	int32_t t23 = -88273693;

	t23 = (x93+((x94==x95)*x96));

	if (t23 != 53) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = 954187;
	int32_t x98 = -1;
	uint64_t x100 = UINT64_MAX;
	static uint64_t t24 = 1526278627513LLU;

	t24 = (x97+((x98==x99)*x100));

	if (t24 != 954187LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	int8_t x102 = 0;
	static int64_t x103 = -1LL;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t25 = -219170791;

	t25 = (x101+((x102==x103)*x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	uint32_t x106 = UINT32_MAX;
	static volatile int16_t x107 = -1;
	static int64_t t26 = -17824085626111769LL;

	t26 = (x105+((x106==x107)*x108));

	if (t26 != -82LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 2U;
	static int64_t x110 = -144537LL;
	volatile uint16_t x112 = 5210U;
	int32_t t27 = 6588950;

	t27 = (x109+((x110==x111)*x112));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static uint16_t x114 = 22857U;
	volatile int8_t x116 = INT8_MIN;
	static int64_t t28 = INT64_MIN;

	t28 = (x113+((x114==x115)*x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile int8_t x118 = -2;
	static volatile int32_t x119 = INT32_MIN;
	static int64_t x120 = -1LL;

	t29 = (x117+((x118==x119)*x120));

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x123 = 510U;
	int64_t t30 = 86098496347880LL;

	t30 = (x121+((x122==x123)*x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = 7;
	uint32_t x126 = 506757U;
	static uint32_t x128 = UINT32_MAX;
	uint32_t t31 = 1304024U;

	t31 = (x125+((x126==x127)*x128));

	if (t31 != 7U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 1585182041U;
	uint32_t x130 = 1117761640U;
	volatile int8_t x131 = INT8_MIN;
	volatile int16_t x132 = INT16_MAX;

	t32 = (x129+((x130==x131)*x132));

	if (t32 != 1585182041U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	volatile int64_t x135 = INT64_MAX;
	int64_t x136 = 360498484192658615LL;
	int64_t t33 = INT64_MIN;

	t33 = (x133+((x134==x135)*x136));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	uint16_t x138 = 14U;
	static int16_t x139 = -1;
	volatile int64_t t34 = 30739404017865124LL;

	t34 = (x137+((x138==x139)*x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = -1;
	int16_t x143 = 42;
	int32_t t35 = INT32_MIN;

	t35 = (x141+((x142==x143)*x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = UINT16_MAX;
	uint32_t x148 = 69001U;
	int64_t t36 = INT64_MAX;

	t36 = (x145+((x146==x147)*x148));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = 11;
	int64_t x151 = INT64_MIN;
	int64_t x152 = -1LL;

	t37 = (x149+((x150==x151)*x152));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x154 = INT32_MIN;
	volatile int32_t t38 = 635932;

	t38 = (x153+((x154==x155)*x156));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MAX;
	volatile uint32_t x158 = 213054U;
	int16_t x159 = -1;
	int32_t x160 = -560;

	t39 = (x157+((x158==x159)*x160));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int16_t x162 = 5735;
	static uint64_t x163 = 738374663274569LLU;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 95009167;

	t40 = (x161+((x162==x163)*x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -18;
	int64_t x168 = -1LL;

	t41 = (x165+((x166==x167)*x168));

	if (t41 != -18LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 0LLU;
	int32_t x170 = INT32_MIN;
	int8_t x171 = 10;
	uint16_t x172 = UINT16_MAX;
	volatile uint64_t t42 = 680855173455001LLU;

	t42 = (x169+((x170==x171)*x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 21;
	int8_t x174 = INT8_MAX;
	int8_t x175 = -1;
	int32_t t43 = -99562;

	t43 = (x173+((x174==x175)*x176));

	if (t43 != 21) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x179 = UINT16_MAX;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x177+((x178==x179)*x180));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = 0;
	uint16_t x182 = 5098U;
	int32_t x183 = INT32_MAX;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = -6;

	t45 = (x181+((x182==x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 1;
	volatile uint8_t x186 = UINT8_MAX;
	static uint16_t x187 = 23U;
	volatile uint64_t x188 = 51204LLU;
	uint64_t t46 = 15947187812777LLU;

	t46 = (x185+((x186==x187)*x188));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x189 = 10469;
	int16_t x190 = INT16_MIN;
	volatile int8_t x191 = INT8_MIN;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 376570049;

	t47 = (x189+((x190==x191)*x192));

	if (t47 != 10469) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x194 = 57U;
	uint64_t x196 = UINT64_MAX;

	t48 = (x193+((x194==x195)*x196));

	if (t48 != 37834694247978615LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	static int32_t x199 = 412;
	static int16_t x200 = 4;

	t49 = (x197+((x198==x199)*x200));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 485353U;
	volatile int16_t x202 = INT16_MIN;
	static int16_t x203 = -1;
	volatile int64_t x204 = -6842852761454574LL;
	static int64_t t50 = -166589455522LL;

	t50 = (x201+((x202==x203)*x204));

	if (t50 != 485353LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -26;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t51 = 1320534;

	t51 = (x205+((x206==x207)*x208));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	static int32_t x210 = INT32_MIN;
	uint64_t x212 = 69937334LLU;
	volatile uint64_t t52 = 879534010LLU;

	t52 = (x209+((x210==x211)*x212));

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int16_t x216 = 186;

	t53 = (x213+((x214==x215)*x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = -737;
	int64_t x220 = INT64_MIN;
	static int64_t t54 = 1LL;

	t54 = (x217+((x218==x219)*x220));

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	int64_t x222 = -1LL;
	int64_t x223 = -915330951342LL;
	int64_t x224 = 733311024639171755LL;
	volatile int64_t t55 = 10LL;

	t55 = (x221+((x222==x223)*x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static int64_t x226 = 11787772511LL;
	uint64_t x227 = 76942748268948667LLU;
	int64_t x228 = 1926406347969LL;
	volatile int64_t t56 = 1637876317LL;

	t56 = (x225+((x226==x227)*x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 3834U;
	volatile uint32_t x230 = 1931741729U;
	int8_t x231 = 4;
	int64_t x232 = -293LL;
	static int64_t t57 = 537512166585323LL;

	t57 = (x229+((x230==x231)*x232));

	if (t57 != 3834LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = INT8_MAX;
	volatile int32_t t58 = -412557;

	t58 = (x233+((x234==x235)*x236));

	if (t58 != 35) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -5905;
	volatile int64_t x238 = -378953LL;
	int64_t x239 = -1LL;
	int64_t x240 = 3LL;
	int64_t t59 = 11LL;

	t59 = (x237+((x238==x239)*x240));

	if (t59 != -5905LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 27U;
	volatile uint64_t x242 = 85588368984063295LLU;
	static volatile uint8_t x243 = UINT8_MAX;
	uint32_t x244 = 18131U;
	volatile uint32_t t60 = 87U;

	t60 = (x241+((x242==x243)*x244));

	if (t60 != 27U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	volatile int16_t x247 = INT16_MIN;
	int32_t x248 = -1;
	int32_t t61 = 1;

	t61 = (x245+((x246==x247)*x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -2293;
	static int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MAX;
	static int16_t x252 = -1;
	int32_t t62 = -358665493;

	t62 = (x249+((x250==x251)*x252));

	if (t62 != -2293) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x254 = INT16_MIN;
	volatile int32_t x255 = -109;
	int64_t x256 = INT64_MAX;

	t63 = (x253+((x254==x255)*x256));

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x259 = 3U;
	uint16_t x260 = UINT16_MAX;

	t64 = (x257+((x258==x259)*x260));

	if (t64 != 10067) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	int16_t x262 = -14;
	uint16_t x263 = UINT16_MAX;
	uint8_t x264 = 42U;
	volatile int32_t t65 = -1716;

	t65 = (x261+((x262==x263)*x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int32_t x266 = 2;
	static int64_t x267 = -1LL;
	int16_t x268 = -608;
	volatile int64_t t66 = -21033518198919LL;

	t66 = (x265+((x266==x267)*x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MAX;
	static uint32_t x271 = 117380U;

	t67 = (x269+((x270==x271)*x272));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 207U;
	volatile uint8_t x274 = 4U;
	int64_t x275 = -130740811020472125LL;
	int32_t x276 = -81985393;
	volatile uint32_t t68 = 3U;

	t68 = (x273+((x274==x275)*x276));

	if (t68 != 207U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -2;
	static uint16_t x278 = UINT16_MAX;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = -1;
	volatile int32_t t69 = -2370;

	t69 = (x277+((x278==x279)*x280));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 555784487815359742LLU;
	volatile int64_t x282 = -356711LL;
	uint8_t x283 = 1U;
	uint32_t x284 = UINT32_MAX;
	uint64_t t70 = 8847610670LLU;

	t70 = (x281+((x282==x283)*x284));

	if (t70 != 555784487815359742LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x286 = INT16_MIN;
	static uint16_t x287 = 19U;
	int32_t x288 = -1;
	volatile int64_t t71 = -114717LL;

	t71 = (x285+((x286==x287)*x288));

	if (t71 != 2988483LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x290 = UINT64_MAX;
	static int8_t x291 = INT8_MIN;
	uint64_t x292 = 12247361224472LLU;
	static uint64_t t72 = 287LLU;

	t72 = (x289+((x290==x291)*x292));

	if (t72 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = INT32_MIN;
	uint64_t t73 = 1454255657342648541LLU;

	t73 = (x293+((x294==x295)*x296));

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static int16_t x298 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	static int64_t x300 = 230847LL;
	volatile int64_t t74 = -20LL;

	t74 = (x297+((x298==x299)*x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MIN;
	int8_t x304 = -1;

	t75 = (x301+((x302==x303)*x304));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint16_t x306 = 3U;
	int16_t x308 = INT16_MAX;

	t76 = (x305+((x306==x307)*x308));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = 3U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t77 = 2003036;

	t77 = (x309+((x310==x311)*x312));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x314 = 66U;
	static uint32_t x316 = 92U;

	t78 = (x313+((x314==x315)*x316));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 52U;
	int32_t x318 = 399;
	int8_t x320 = -1;

	t79 = (x317+((x318==x319)*x320));

	if (t79 != 52) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	uint32_t x322 = UINT32_MAX;
	static int16_t x323 = INT16_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x321+((x322==x323)*x324));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = 15680U;
	uint8_t x328 = UINT8_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = (x325+((x326==x327)*x328));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 58U;
	volatile int32_t x331 = INT32_MIN;
	int16_t x332 = 1537;
	static volatile int32_t t82 = 44816;

	t82 = (x329+((x330==x331)*x332));

	if (t82 != 184966977) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static volatile int8_t x334 = 12;
	static uint8_t x335 = 31U;
	uint16_t x336 = 33U;
	int32_t t83 = INT32_MIN;

	t83 = (x333+((x334==x335)*x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	static int8_t x339 = INT8_MIN;
	int64_t x340 = -1LL;
	int64_t t84 = INT64_MAX;

	t84 = (x337+((x338==x339)*x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = 0;
	int32_t x343 = -41409;
	uint32_t x344 = 1588354U;

	t85 = (x341+((x342==x343)*x344));

	if (t85 != 82U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	int64_t x348 = -1768563830561707809LL;

	t86 = (x345+((x346==x347)*x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MAX;
	uint8_t x350 = 11U;
	volatile int32_t t87 = -13348;

	t87 = (x349+((x350==x351)*x352));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint8_t x354 = 10U;
	int32_t x355 = -20762650;
	uint8_t x356 = 33U;

	t88 = (x353+((x354==x355)*x356));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = 2;
	uint64_t x359 = UINT64_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t89 = 3950803508515543LLU;

	t89 = (x357+((x358==x359)*x360));

	if (t89 != 2573166724074LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 1852U;
	static int32_t x362 = INT32_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t t90 = 302203;

	t90 = (x361+((x362==x363)*x364));

	if (t90 != 1852) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int8_t x366 = -1;
	uint64_t x367 = 4344005355628738LLU;
	static int8_t x368 = 1;
	int64_t t91 = -281817928LL;

	t91 = (x365+((x366==x367)*x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 558396247142453LLU;
	static uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MIN;
	volatile uint64_t t92 = 1457473LLU;

	t92 = (x369+((x370==x371)*x372));

	if (t92 != 558396247142453LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int8_t x374 = -1;
	static volatile int32_t x375 = -1;

	t93 = (x373+((x374==x375)*x376));

	if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 0;
	int16_t x378 = INT16_MIN;
	static int8_t x379 = INT8_MIN;
	int16_t x380 = 0;

	t94 = (x377+((x378==x379)*x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x383 = 15U;
	uint32_t x384 = UINT32_MAX;
	uint32_t t95 = 0U;

	t95 = (x381+((x382==x383)*x384));

	if (t95 != 4294967168U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 224LLU;
	int16_t x386 = -1;
	volatile int64_t x387 = INT64_MIN;
	volatile int64_t x388 = INT64_MIN;
	uint64_t t96 = 410915524816242LLU;

	t96 = (x385+((x386==x387)*x388));

	if (t96 != 224LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	static uint64_t x392 = 139393LLU;
	volatile uint64_t t97 = 326021322LLU;

	t97 = (x389+((x390==x391)*x392));

	if (t97 != 65535LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int32_t x395 = INT32_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t98 = 2636832;

	t98 = (x393+((x394==x395)*x396));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	static int32_t x398 = -173982;
	uint64_t x400 = 46LLU;
	uint64_t t99 = 259783625955599LLU;

	t99 = (x397+((x398==x399)*x400));

	if (t99 != 127LLU) { NG(); } else { ; }
	
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

