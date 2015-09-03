#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MIN;
static int16_t x3 = INT16_MIN;
int64_t x8 = -2711439515LL;
int64_t x12 = INT64_MAX;
int16_t x13 = INT16_MAX;
int16_t x14 = -1;
int32_t x16 = INT32_MAX;
int32_t t3 = INT32_MAX;
int32_t t4 = -21423;
int32_t x26 = INT32_MAX;
uint64_t x28 = 61665389652LLU;
uint64_t t6 = 11LLU;
int16_t x37 = -1;
static uint8_t x47 = 11U;
static int16_t x50 = -1;
int64_t t13 = 798298173528LL;
int64_t x82 = -804843056LL;
uint8_t x94 = 14U;
uint8_t x107 = UINT8_MAX;
int64_t x108 = INT64_MAX;
volatile uint64_t t26 = 4258825837057816LLU;
uint64_t t28 = UINT64_MAX;
int64_t x125 = -1LL;
uint32_t t31 = 0U;
int64_t x135 = -21061LL;
static uint32_t x137 = 42996U;
int32_t x139 = -65864981;
int64_t x145 = INT64_MIN;
int16_t x155 = INT16_MIN;
uint16_t x160 = 1798U;
int32_t t39 = -76133197;
int32_t x167 = -1;
int32_t x168 = -55921;
volatile uint16_t x172 = 3U;
int32_t x184 = -115547;
uint32_t x186 = 6U;
volatile int8_t x192 = INT8_MAX;
volatile uint16_t x194 = 4U;
volatile int32_t t47 = -1;
uint16_t x197 = UINT16_MAX;
int64_t x206 = -1LL;
int64_t t50 = -342049108164205102LL;
volatile int8_t x214 = INT8_MAX;
static volatile uint16_t x215 = 9763U;
volatile int64_t t51 = 2744080LL;
volatile uint64_t x228 = 26679935055LLU;
int32_t x233 = -1;
volatile uint64_t x237 = 417059871844313634LLU;
static uint32_t x243 = 1677584U;
int8_t x244 = 60;
volatile uint32_t t55 = 29U;
uint64_t x246 = 186LLU;
uint32_t x253 = 122906082U;
int8_t x257 = 1;
static volatile int64_t x260 = INT64_MIN;
uint8_t x261 = 6U;
volatile int16_t x263 = 48;
uint64_t x266 = 370120LLU;
int32_t x271 = 12;
uint8_t x272 = 6U;
volatile uint64_t t63 = 25378210160LLU;
volatile uint8_t x285 = 0U;
int64_t x296 = INT64_MIN;
int64_t x305 = -1LL;
int8_t x309 = -1;
static uint16_t x312 = 3U;
int64_t t71 = 98LL;
int8_t x319 = INT8_MIN;
uint32_t x320 = 111U;
uint32_t t73 = 997U;
int32_t x331 = -7263932;
int8_t x332 = INT8_MAX;
static int64_t x337 = -1LL;
volatile int32_t x342 = 14602;
int8_t x343 = INT8_MIN;
volatile uint32_t x345 = 15829U;
volatile int32_t x346 = INT32_MIN;
int16_t x348 = -5;
int32_t x361 = -1;
uint8_t x362 = 1U;
int16_t x375 = -1;
volatile int8_t x385 = INT8_MAX;
uint16_t x386 = 1492U;
uint8_t x387 = UINT8_MAX;
int64_t t89 = -484899854281334LL;
static volatile int64_t t90 = -800606181838LL;
static int8_t x408 = INT8_MIN;
uint64_t t93 = 9103606236LLU;
int32_t x414 = -1;
volatile int64_t x415 = -23920104LL;
uint64_t x416 = UINT64_MAX;
volatile uint32_t x427 = 3U;
int16_t x428 = -1;
uint32_t t97 = 7123U;


void f0(void) {
	static int32_t x1 = -1;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -22708;

	t0 = (((x1%x2)*x3)+x4);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 243002U;
	volatile uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MAX;
	int64_t t1 = -47303235364316254LL;

	t1 = (((x5%x6)*x7)+x8);

	if (t1 != -2705547096LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 495578LL;
	static volatile int8_t x10 = -1;
	int32_t x11 = 11;
	int64_t t2 = INT64_MAX;

	t2 = (((x9%x10)*x11)+x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x15 = INT16_MIN;

	t3 = (((x13%x14)*x15)+x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	uint8_t x18 = 7U;
	uint16_t x19 = 10178U;
	int32_t x20 = -94;

	t4 = (((x17%x18)*x19)+x20);

	if (t4 != 10084) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int64_t x22 = -21684669LL;
	int64_t x23 = -221760613383141LL;
	static uint16_t x24 = 368U;
	volatile int64_t t5 = 5194446729LL;

	t5 = (((x21%x22)*x23)+x24);

	if (t5 != 28385358513042416LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int64_t x27 = -7021LL;

	t6 = (((x25%x26)*x27)+x28);

	if (t6 != 61435332545LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MAX;
	static uint32_t x34 = UINT32_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	int64_t x36 = -1LL;
	static volatile uint64_t t7 = 1223LLU;

	t7 = (((x33%x34)*x35)+x36);

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x38 = UINT16_MAX;
	int16_t x39 = 40;
	uint16_t x40 = 0U;
	volatile int32_t t8 = 943088956;

	t8 = (((x37%x38)*x39)+x40);

	if (t8 != -40) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = -1;
	static int32_t x42 = INT32_MAX;
	volatile int16_t x43 = -2;
	uint16_t x44 = 85U;
	volatile int32_t t9 = 219597630;

	t9 = (((x41%x42)*x43)+x44);

	if (t9 != 87) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -43;
	static uint32_t x46 = UINT32_MAX;
	uint64_t x48 = 12218510LLU;
	volatile uint64_t t10 = 988146628053943469LLU;

	t10 = (((x45%x46)*x47)+x48);

	if (t10 != 4307185333LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 33048189LL;
	int8_t x51 = INT8_MIN;
	int64_t x52 = 79966635144LL;
	int64_t t11 = -236LL;

	t11 = (((x49%x50)*x51)+x52);

	if (t11 != 79966635144LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 2;
	uint32_t x54 = UINT32_MAX;
	volatile uint32_t x55 = UINT32_MAX;
	int32_t x56 = 26133;
	volatile uint32_t t12 = 20553432U;

	t12 = (((x53%x54)*x55)+x56);

	if (t12 != 26131U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = UINT8_MAX;
	int8_t x58 = 1;
	int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MIN;

	t13 = (((x57%x58)*x59)+x60);

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	static uint8_t x62 = 2U;
	volatile uint32_t x63 = 0U;
	int16_t x64 = -3248;
	volatile int64_t t14 = -2698LL;

	t14 = (((x61%x62)*x63)+x64);

	if (t14 != -3248LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	static uint32_t x66 = 2903U;
	uint32_t x67 = 1129U;
	volatile int32_t x68 = INT32_MIN;
	volatile int64_t t15 = 54374232812047033LL;

	t15 = (((x65%x66)*x67)+x68);

	if (t15 != -2150073574LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint64_t x70 = 436LLU;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	static uint64_t t16 = 821LLU;

	t16 = (((x69%x70)*x71)+x72);

	if (t16 != 18446744073704439935LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -1;
	uint32_t x74 = 15U;
	uint32_t x75 = 8173535U;
	uint8_t x76 = UINT8_MAX;
	uint32_t t17 = 51146152U;

	t17 = (((x73%x74)*x75)+x76);

	if (t17 != 255U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 77863308LLU;
	volatile int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 512U;
	volatile uint64_t t18 = 6114666214LLU;

	t18 = (((x77%x78)*x79)+x80);

	if (t18 != 18446741522284675584LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = -31676945;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -1LL;
	int64_t t19 = -5786LL;

	t19 = (((x81%x82)*x83)+x84);

	if (t19 != 1037990133759LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MAX;
	static uint16_t x86 = UINT16_MAX;
	volatile int16_t x87 = -3370;
	int16_t x88 = -2928;
	int32_t t20 = -14;

	t20 = (((x85%x86)*x87)+x88);

	if (t20 != -110427718) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MIN;
	static volatile int64_t x90 = INT64_MIN;
	uint16_t x91 = 57U;
	volatile int16_t x92 = INT16_MIN;
	int64_t t21 = -31470540421953716LL;

	t21 = (((x89%x90)*x91)+x92);

	if (t21 != -1900544LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 4563896074641444LL;
	uint8_t x95 = 1U;
	int16_t x96 = INT16_MAX;
	volatile int64_t t22 = 7855461991159LL;

	t22 = (((x93%x94)*x95)+x96);

	if (t22 != 32769LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 3174815LLU;
	uint64_t x98 = 2601965LLU;
	uint16_t x99 = 12689U;
	int64_t x100 = INT64_MIN;
	uint64_t t23 = 680909LLU;

	t23 = (((x97%x98)*x99)+x100);

	if (t23 != 9223372044123669458LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	static uint32_t x102 = 15300469U;
	volatile uint64_t x103 = 17238753353286818LLU;
	volatile int32_t x104 = INT32_MIN;
	static uint64_t t24 = 26287412LLU;

	t24 = (((x101%x102)*x103)+x104);

	if (t24 != 472098870375565230LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MAX;
	int64_t t25 = -29705725LL;

	t25 = (((x105%x106)*x107)+x108);

	if (t25 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = UINT64_MAX;
	static uint16_t x110 = 1538U;
	volatile int32_t x111 = INT32_MIN;
	volatile int32_t x112 = INT32_MAX;

	t26 = (((x109%x110)*x111)+x112);

	if (t26 != 18446741651347996671LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	volatile uint8_t x114 = 11U;
	int32_t x115 = -1;
	int32_t x116 = -4080;
	volatile int32_t t27 = -1384;

	t27 = (((x113%x114)*x115)+x116);

	if (t27 != -4079) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	uint16_t x118 = 2U;
	int16_t x119 = INT16_MIN;
	volatile int16_t x120 = INT16_MAX;

	t28 = (((x117%x118)*x119)+x120);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x121 = 3U;
	int16_t x122 = -1229;
	int64_t x123 = -34517441724386437LL;
	int16_t x124 = 935;
	int64_t t29 = 112213845085416LL;

	t29 = (((x121%x122)*x123)+x124);

	if (t29 != -103552325173158376LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x126 = -3389;
	static uint16_t x127 = UINT16_MAX;
	static int16_t x128 = INT16_MIN;
	volatile int64_t t30 = 13LL;

	t30 = (((x125%x126)*x127)+x128);

	if (t30 != -98303LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 53191U;
	int32_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	static int8_t x132 = INT8_MIN;

	t31 = (((x129%x130)*x131)+x132);

	if (t31 != 3485872057U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	static int16_t x134 = INT16_MAX;
	uint32_t x136 = 26U;
	volatile int64_t t32 = -415334768799LL;

	t32 = (((x133%x134)*x135)+x136);

	if (t32 != -147401LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x138 = INT16_MIN;
	int16_t x140 = -1;
	uint32_t t33 = 62940077U;

	t33 = (((x137%x138)*x139)+x140);

	if (t33 != 2747692283U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = 23755U;
	volatile int16_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t34 = -3035720;

	t34 = (((x141%x142)*x143)+x144);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = -14944;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MIN;
	int64_t t35 = 53840756332LL;

	t35 = (((x145%x146)*x147)+x148);

	if (t35 != -2147478560LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1;
	volatile uint32_t x150 = 20456196U;
	uint8_t x151 = 3U;
	int8_t x152 = -1;
	uint32_t t36 = 5354383U;

	t36 = (((x149%x150)*x151)+x152);

	if (t36 != 58866992U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = 7;
	int64_t x154 = -1LL;
	int32_t x156 = INT32_MIN;
	volatile int64_t t37 = 409328191LL;

	t37 = (((x153%x154)*x155)+x156);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = 205;
	int16_t x158 = 19;
	volatile uint16_t x159 = 16U;
	volatile int32_t t38 = -2546;

	t38 = (((x157%x158)*x159)+x160);

	if (t38 != 2038) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MAX;
	volatile int16_t x163 = -1;
	uint16_t x164 = 0U;

	t39 = (((x161%x162)*x163)+x164);

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1LL;
	int64_t x166 = INT64_MIN;
	static int64_t t40 = -546603646037999886LL;

	t40 = (((x165%x166)*x167)+x168);

	if (t40 != -55920LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x169 = 7LLU;
	volatile uint16_t x170 = UINT16_MAX;
	static int8_t x171 = 1;
	uint64_t t41 = 44792541879323655LLU;

	t41 = (((x169%x170)*x171)+x172);

	if (t41 != 10LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -8024497982563LL;
	uint32_t x174 = 36040118U;
	static volatile int32_t x175 = INT32_MAX;
	static int32_t x176 = -1;
	int64_t t42 = 1519374968319LL;

	t42 = (((x173%x174)*x175)+x176);

	if (t42 != -46276964775308978LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = 837;
	volatile int8_t x178 = -1;
	uint16_t x179 = 3165U;
	int64_t x180 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

	t43 = (((x177%x178)*x179)+x180);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int64_t x182 = INT64_MAX;
	int64_t x183 = -1LL;
	volatile int64_t t44 = -78951103821033LL;

	t44 = (((x181%x182)*x183)+x184);

	if (t44 != -115546LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 254725845U;
	static int8_t x187 = 1;
	uint8_t x188 = 9U;
	uint32_t t45 = 15915838U;

	t45 = (((x185%x186)*x187)+x188);

	if (t45 != 12U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 1980U;
	int64_t x190 = INT64_MIN;
	volatile int16_t x191 = INT16_MIN;
	int64_t t46 = 1976092098833057LL;

	t46 = (((x189%x190)*x191)+x192);

	if (t46 != -64880513LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = 134547;
	int8_t x195 = -1;
	static uint16_t x196 = 7680U;

	t47 = (((x193%x194)*x195)+x196);

	if (t47 != 7677) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x198 = INT32_MIN;
	int16_t x199 = -1;
	static int64_t x200 = -1LL;
	static volatile int64_t t48 = 228189LL;

	t48 = (((x197%x198)*x199)+x200);

	if (t48 != -65536LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = INT32_MIN;
	uint16_t x202 = 2762U;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t49 = 6506992;

	t49 = (((x201%x202)*x203)+x204);

	if (t49 != 33652736) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 51U;
	int32_t x207 = -1;
	static int8_t x208 = INT8_MAX;

	t50 = (((x205%x206)*x207)+x208);

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = 1700;
	int64_t x216 = INT64_MIN;

	t51 = (((x213%x214)*x215)+x216);

	if (t51 != -9223372036854297421LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	volatile uint32_t x226 = 194U;
	int8_t x227 = INT8_MIN;
	volatile uint64_t t52 = 981044016290LLU;

	t52 = (((x225%x226)*x227)+x228);

	if (t52 != 30974901839LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t53 = UINT64_MAX;

	t53 = (((x233%x234)*x235)+x236);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x238 = -1;
	static int16_t x239 = 6;
	int64_t x240 = INT64_MAX;
	uint64_t t54 = 49938617172LLU;

	t54 = (((x237%x238)*x239)+x240);

	if (t54 != 11725731267920657611LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x241 = 266537884;
	uint8_t x242 = UINT8_MAX;

	t55 = (((x241%x242)*x243)+x244);

	if (t55 != 258347996U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MAX;
	int32_t x247 = 4943;
	int32_t x248 = INT32_MIN;
	uint64_t t56 = 383601052175850667LLU;

	t56 = (((x245%x246)*x247)+x248);

	if (t56 != 18446744071562221201LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x249 = UINT32_MAX;
	static int64_t x250 = 43438LL;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int64_t t57 = -20LL;

	t57 = (((x249%x250)*x251)+x252);

	if (t57 != 4516250LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x254 = 1U;
	int8_t x255 = 0;
	int64_t x256 = -120654363735139233LL;
	int64_t t58 = -52LL;

	t58 = (((x253%x254)*x255)+x256);

	if (t58 != -120654363735139233LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x258 = INT64_MIN;
	static int32_t x259 = INT32_MAX;
	int64_t t59 = 6LL;

	t59 = (((x257%x258)*x259)+x260);

	if (t59 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x262 = 16757888457LLU;
	volatile int16_t x264 = INT16_MIN;
	volatile uint64_t t60 = 14050LLU;

	t60 = (((x261%x262)*x263)+x264);

	if (t60 != 18446744073709519136LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x265 = 767;
	volatile int64_t x267 = INT64_MIN;
	uint8_t x268 = 10U;
	uint64_t t61 = 30513012LLU;

	t61 = (((x265%x266)*x267)+x268);

	if (t61 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 1814622;
	int32_t t62 = -87292;

	t62 = (((x269%x270)*x271)+x272);

	if (t62 != -1530) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = 50402729;
	uint32_t x274 = 1371568U;
	int8_t x275 = -1;
	uint64_t x276 = UINT64_MAX;

	t63 = (((x273%x274)*x275)+x276);

	if (t63 != 4293941014LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x279 = 86707LL;
	int8_t x280 = -1;
	int64_t t64 = 486060886220387795LL;

	t64 = (((x277%x278)*x279)+x280);

	if (t64 != 11011788LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x286 = -152LL;
	static int64_t x287 = -431625771314459304LL;
	uint32_t x288 = 4691U;
	int64_t t65 = 1LL;

	t65 = (((x285%x286)*x287)+x288);

	if (t65 != 4691LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = -1;
	static int8_t x291 = -1;
	static int8_t x292 = -3;
	volatile uint32_t t66 = 22U;

	t66 = (((x289%x290)*x291)+x292);

	if (t66 != 4294967293U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x293 = INT64_MAX;
	uint64_t x294 = 445005876620LLU;
	uint32_t x295 = 2063U;
	volatile uint64_t t67 = 105409LLU;

	t67 = (((x293%x294)*x295)+x296);

	if (t67 != 9223394004967546349LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x297 = 79638052LLU;
	static volatile uint16_t x298 = UINT16_MAX;
	int16_t x299 = -82;
	int64_t x300 = -1LL;
	static uint64_t t68 = 1816921929404274LLU;

	t68 = (((x297%x298)*x299)+x300);

	if (t68 != 18446744073708483401LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x301 = 35U;
	int64_t x302 = INT64_MAX;
	static int8_t x303 = 4;
	uint32_t x304 = UINT32_MAX;
	int64_t t69 = -892124LL;

	t69 = (((x301%x302)*x303)+x304);

	if (t69 != 4294967435LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x306 = 37842;
	static volatile uint8_t x307 = 13U;
	volatile uint64_t x308 = 61542922743835637LLU;
	volatile uint64_t t70 = 671475089310588LLU;

	t70 = (((x305%x306)*x307)+x308);

	if (t70 != 61542922743835624LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = 54532452483LL;
	int32_t x311 = INT32_MAX;

	t71 = (((x309%x310)*x311)+x312);

	if (t71 != -2147483644LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x313 = INT16_MIN;
	int32_t x314 = 81000;
	volatile uint64_t x315 = 13545483805LLU;
	uint8_t x316 = UINT8_MAX;
	uint64_t t72 = 6584583919LLU;

	t72 = (((x313%x314)*x315)+x316);

	if (t72 != 18446300215296229631LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = -1;

	t73 = (((x317%x318)*x319)+x320);

	if (t73 != 111U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = -651LL;
	int16_t x323 = -1;
	volatile int64_t x324 = 2833174370217551LL;
	int64_t t74 = -12065581110718260LL;

	t74 = (((x321%x322)*x323)+x324);

	if (t74 != 2833174370217553LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -1;
	static int16_t x330 = INT16_MAX;
	volatile int32_t t75 = 21;

	t75 = (((x329%x330)*x331)+x332);

	if (t75 != 7264059) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = 2114;
	static volatile int64_t x340 = 6354037LL;
	uint64_t t76 = 6200133729931LLU;

	t76 = (((x337%x338)*x339)+x340);

	if (t76 != 6354037LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = INT32_MAX;
	volatile int32_t x344 = -5;
	volatile int32_t t77 = -842;

	t77 = (((x341%x342)*x343)+x344);

	if (t77 != -1448069) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x347 = UINT64_MAX;
	uint64_t t78 = 246311637902118429LLU;

	t78 = (((x345%x346)*x347)+x348);

	if (t78 != 18446744073709535782LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = -1LL;
	uint64_t x350 = 8787042204365675LLU;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MAX;
	static uint64_t t79 = 338LLU;

	t79 = (((x349%x350)*x351)+x352);

	if (t79 != 17600678017442780753LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MAX;
	static uint16_t x355 = 3U;
	static int32_t x356 = -5943;
	volatile int32_t t80 = -297445;

	t80 = (((x353%x354)*x355)+x356);

	if (t80 != -104247) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = 5381962LLU;
	int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MIN;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t81 = 154434545LLU;

	t81 = (((x357%x358)*x359)+x360);

	if (t81 != 18435186398320394239LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x363 = -46;
	int64_t x364 = -1LL;
	static volatile int64_t t82 = -7753438592LL;

	t82 = (((x361%x362)*x363)+x364);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MAX;
	int64_t x366 = -1LL;
	static int8_t x367 = INT8_MIN;
	static int8_t x368 = INT8_MIN;
	volatile int64_t t83 = -661773704812742LL;

	t83 = (((x365%x366)*x367)+x368);

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 11796716LLU;
	int8_t x374 = INT8_MAX;
	volatile int8_t x376 = -1;
	uint64_t t84 = 20LLU;

	t84 = (((x373%x374)*x375)+x376);

	if (t84 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = INT32_MAX;
	static uint64_t x378 = 89980715797LLU;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	static uint64_t t85 = 8430743724183431177LLU;

	t85 = (((x377%x378)*x379)+x380);

	if (t85 != 9223442403451437057LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x381 = 168908053900823LL;
	static int32_t x382 = -68161153;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	volatile int64_t t86 = -1LL;

	t86 = (((x381%x382)*x383)+x384);

	if (t86 != -1746850176LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x388 = -552582574LL;
	int64_t t87 = 144138642993373540LL;

	t87 = (((x385%x386)*x387)+x388);

	if (t87 != -552550189LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	volatile int32_t x391 = -1;
	volatile int8_t x392 = INT8_MIN;
	int32_t t88 = -50;

	t88 = (((x389%x390)*x391)+x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = -874;
	int64_t x395 = -1LL;
	int32_t x396 = -1;

	t89 = (((x393%x394)*x395)+x396);

	if (t89 != 429LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MAX;
	int8_t x399 = 27;
	int64_t x400 = -1LL;

	t90 = (((x397%x398)*x399)+x400);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -1;
	int64_t x402 = INT64_MAX;
	int32_t x403 = -89820;
	uint64_t x404 = 196879139713042LLU;
	volatile uint64_t t91 = 51363632242786LLU;

	t91 = (((x401%x402)*x403)+x404);

	if (t91 != 196879139802862LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = 8795129LL;
	static int32_t x406 = -1;
	volatile uint64_t x407 = UINT64_MAX;
	uint64_t t92 = 1774718971LLU;

	t92 = (((x405%x406)*x407)+x408);

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x409 = -20471;
	static uint8_t x410 = 23U;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;

	t93 = (((x409%x410)*x411)+x412);

	if (t93 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x413 = -1LL;
	static volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x413%x414)*x415)+x416);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x417 = INT16_MIN;
	uint64_t x418 = 2LLU;
	int16_t x419 = INT16_MAX;
	volatile uint8_t x420 = UINT8_MAX;
	uint64_t t95 = 1637LLU;

	t95 = (((x417%x418)*x419)+x420);

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x421 = 113364548345705LLU;
	int8_t x422 = INT8_MAX;
	volatile int16_t x423 = 1;
	uint8_t x424 = 16U;
	uint64_t t96 = 56098855LLU;

	t96 = (((x421%x422)*x423)+x424);

	if (t96 != 87LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x425 = -1;
	int8_t x426 = INT8_MAX;

	t97 = (((x425%x426)*x427)+x428);

	if (t97 != 4294967292U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = 1U;
	int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MAX;
	int64_t x432 = -1LL;
	volatile int64_t t98 = -8LL;

	t98 = (((x429%x430)*x431)+x432);

	if (t98 != 126LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = 1604;
	int32_t x438 = INT32_MAX;
	int16_t x439 = INT16_MAX;
	int32_t x440 = 5;
	volatile int32_t t99 = 150;

	t99 = (((x437%x438)*x439)+x440);

	if (t99 != 52558273) { NG(); } else { ; }
	
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

