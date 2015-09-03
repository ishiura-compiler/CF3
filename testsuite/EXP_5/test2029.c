#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 1;
volatile uint64_t t2 = 2783890053626500LLU;
uint64_t x16 = UINT64_MAX;
volatile uint64_t t3 = 72342077441110LLU;
int16_t x20 = INT16_MIN;
int16_t x25 = -1;
static int16_t x31 = INT16_MIN;
uint32_t x37 = 380375550U;
volatile int16_t x44 = -1;
int32_t x46 = INT32_MIN;
uint32_t x52 = UINT32_MAX;
volatile uint32_t t11 = 13173809U;
uint64_t x63 = 1457922929066497595LLU;
static int32_t x64 = 78977;
int16_t x66 = INT16_MIN;
int16_t x67 = INT16_MIN;
int16_t x69 = 0;
static volatile int64_t t14 = -1264685897LL;
int16_t x73 = -1789;
int16_t x78 = INT16_MIN;
static uint16_t x83 = UINT16_MAX;
int8_t x85 = INT8_MAX;
int8_t x86 = -31;
volatile uint64_t t19 = 177968031264LLU;
volatile uint64_t x97 = UINT64_MAX;
int16_t x98 = 2;
int32_t x101 = -1;
uint64_t t24 = 31LLU;
int16_t x140 = 1;
static int8_t x146 = 3;
static int16_t x147 = INT16_MIN;
volatile int16_t x149 = -4183;
int32_t x150 = -844020;
volatile int16_t x160 = INT16_MIN;
volatile int32_t t35 = 220933;
volatile uint32_t t36 = 393U;
int16_t x173 = INT16_MAX;
volatile int64_t x175 = INT64_MIN;
int16_t x178 = INT16_MIN;
volatile uint64_t x179 = 25790898036879LLU;
volatile int32_t x189 = INT32_MIN;
int16_t x191 = INT16_MIN;
int16_t x192 = 337;
int64_t t41 = -226097936384LL;
uint32_t x194 = 6879U;
uint16_t x196 = 213U;
int8_t x200 = INT8_MIN;
volatile uint64_t t43 = 1046067006000100LLU;
int8_t x203 = 0;
int64_t x205 = -1LL;
uint64_t t45 = 14011LLU;
int64_t t46 = -28120252748522955LL;
int16_t x213 = INT16_MAX;
int16_t x215 = -1;
int8_t x234 = INT8_MAX;
uint8_t x238 = 1U;
int32_t x239 = -1;
volatile int64_t x243 = INT64_MIN;
volatile uint64_t t52 = 0LLU;
static volatile uint32_t x249 = 2023216U;
volatile int16_t x259 = 3;
static int64_t x267 = -34876743296LL;
uint64_t t58 = 8543161LLU;
int64_t x270 = -1LL;
int16_t x271 = INT16_MIN;
uint16_t x276 = UINT16_MAX;
static int32_t x278 = INT32_MIN;
int32_t x279 = -3201694;
static volatile uint64_t t61 = 22365LLU;
uint64_t x289 = UINT64_MAX;
volatile int16_t x293 = INT16_MIN;
uint64_t x299 = 382388LLU;
uint64_t t66 = 24LLU;
int16_t x304 = INT16_MIN;
int16_t x318 = INT16_MIN;
int16_t x324 = 2287;
int16_t x325 = INT16_MIN;
uint64_t t72 = 2083023810855324LLU;
int64_t t74 = 136LL;
static volatile int64_t t75 = -40016207LL;
volatile uint8_t x360 = UINT8_MAX;
int64_t x363 = 330206LL;
volatile int16_t x364 = -2811;
int64_t t78 = -93LL;
static int32_t x366 = -40302;
static int32_t x369 = 40958;
uint16_t x376 = 478U;
uint32_t t81 = 4170069U;
int32_t x385 = -1;
uint64_t x397 = 13LLU;
uint16_t x409 = 15793U;
volatile uint16_t x411 = UINT16_MAX;
uint64_t x412 = UINT64_MAX;
static volatile uint32_t x418 = UINT32_MAX;
static int32_t x421 = INT32_MIN;
int64_t x422 = INT64_MAX;
int8_t x424 = -1;
int32_t x431 = INT32_MIN;
int16_t x439 = 0;
volatile uint64_t x448 = 8271LLU;
int32_t x457 = 247;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int16_t x2 = -1;
	uint32_t x3 = 1485733U;
	volatile uint64_t t0 = 2LLU;

	t0 = (x1+((x2^x3)+x4));

	if (t0 != 4293481562LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 33576966141LL;
	int8_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = 6020496811LL;

	t1 = (x5+((x6^x7)+x8));

	if (t1 != 33577031676LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int64_t x10 = 70021884685390242LL;
	int64_t x11 = -678622789023LL;
	uint32_t x12 = 687812U;

	t2 = (x9+((x10^x11)+x12));

	if (t2 != 18376722678666859142LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	static volatile int16_t x14 = INT16_MAX;
	static int64_t x15 = -1LL;

	t3 = (x13+((x14^x15)+x16));

	if (t3 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -938;
	volatile uint16_t x18 = 2U;
	static volatile int32_t x19 = -1;
	int32_t t4 = -28103;

	t4 = (x17+((x18^x19)+x20));

	if (t4 != -33709) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 7U;
	uint8_t x27 = 127U;
	int16_t x28 = 4854;
	int32_t t5 = 608737;

	t5 = (x25+((x26^x27)+x28));

	if (t5 != 4973) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 2211LL;
	uint8_t x30 = 49U;
	uint8_t x32 = UINT8_MAX;
	int64_t t6 = -12938LL;

	t6 = (x29+((x30^x31)+x32));

	if (t6 != -30253LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -479128LL;
	static int16_t x34 = INT16_MIN;
	int64_t x35 = -1LL;
	int32_t x36 = -1;
	int64_t t7 = 1273258LL;

	t7 = (x33+((x34^x35)+x36));

	if (t7 != -446362LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x38 = INT8_MIN;
	uint8_t x39 = 8U;
	int32_t x40 = 129101124;
	volatile uint32_t t8 = 37U;

	t8 = (x37+((x38^x39)+x40));

	if (t8 != 509476554U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x41 = 17320U;
	static uint32_t x42 = 4U;
	int32_t x43 = -1;
	static volatile uint32_t t9 = 3U;

	t9 = (x41+((x42^x43)+x44));

	if (t9 != 17314U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	static int8_t x47 = INT8_MIN;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t10 = -223384786052674LL;

	t10 = (x45+((x46^x47)+x48));

	if (t10 != -9223372034707292416LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	static int32_t x50 = INT32_MIN;
	volatile int16_t x51 = INT16_MAX;

	t11 = (x49+((x50^x51)+x52));

	if (t11 != 2147516413U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 8U;
	int8_t x62 = -1;
	uint64_t t12 = 15182286LLU;

	t12 = (x61+((x62^x63)+x64));

	if (t12 != 16988821144643133005LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	int16_t x68 = 3;
	volatile int32_t t13 = -443746687;

	t13 = (x65+((x66^x67)+x68));

	if (t13 != -32765) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x70 = 5U;
	static int64_t x71 = -1LL;
	int8_t x72 = 28;

	t14 = (x69+((x70^x71)+x72));

	if (t14 != 22LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = 164466;
	int16_t x75 = INT16_MAX;
	uint16_t x76 = 4667U;
	static volatile int32_t t15 = -1287290;

	t15 = (x73+((x74^x75)+x76));

	if (t15 != 198859) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 1251U;
	int8_t x79 = INT8_MAX;
	static uint64_t x80 = 1262267718544377LLU;
	volatile uint64_t t16 = 159282352LLU;

	t16 = (x77+((x78^x79)+x80));

	if (t16 != 1262267718512987LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 1U;
	static uint16_t x82 = UINT16_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t17 = 102;

	t17 = (x81+((x82^x83)+x84));

	if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x87 = 1U;
	static uint16_t x88 = 1339U;
	int32_t t18 = 385;

	t18 = (x85+((x86^x87)+x88));

	if (t18 != 1434) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	static int16_t x90 = INT16_MIN;
	int64_t x91 = 3510569679958LL;
	volatile uint64_t x92 = UINT64_MAX;

	t19 = (x89+((x90^x91)+x92));

	if (t19 != 18446740563139869780LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x93 = 20U;
	int32_t x94 = INT32_MIN;
	int64_t x95 = 206479975LL;
	uint32_t x96 = UINT32_MAX;
	int64_t t20 = -926451761LL;

	t20 = (x93+((x94^x95)+x96));

	if (t20 != 2353963642LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = -131;
	volatile uint64_t t21 = 65850LLU;

	t21 = (x97+((x98^x99)+x100));

	if (t21 != 121LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = INT32_MAX;
	static int32_t x104 = INT32_MIN;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x101+((x102^x103)+x104));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 3167LLU;
	int16_t x106 = INT16_MAX;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = INT32_MIN;
	uint64_t t23 = 196354LLU;

	t23 = (x105+((x106^x107)+x108));

	if (t23 != 18446744071562103903LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = 578975;
	uint64_t x114 = 19020LLU;
	int8_t x115 = INT8_MIN;
	int16_t x116 = 771;

	t24 = (x113+((x114^x115)+x116));

	if (t24 != 560750LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 7U;
	int8_t x123 = 15;
	int16_t x124 = INT16_MIN;
	int32_t t25 = -124894;

	t25 = (x121+((x122^x123)+x124));

	if (t25 != -32505) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -1;
	uint8_t x126 = 3U;
	volatile int64_t x127 = INT64_MIN;
	static int16_t x128 = INT16_MAX;
	int64_t t26 = -354545803LL;

	t26 = (x125+((x126^x127)+x128));

	if (t26 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = 24698;
	int64_t x130 = INT64_MIN;
	int8_t x131 = 1;
	int8_t x132 = 0;
	int64_t t27 = 773452989260917LL;

	t27 = (x129+((x130^x131)+x132));

	if (t27 != -9223372036854751109LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = INT32_MAX;
	uint64_t x134 = 3999638028LLU;
	uint16_t x135 = 3U;
	volatile int16_t x136 = INT16_MAX;
	volatile uint64_t t28 = 1021930590088LLU;

	t28 = (x133+((x134^x135)+x136));

	if (t28 != 6147154445LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = -1;
	int64_t x138 = INT64_MIN;
	static uint16_t x139 = UINT16_MAX;
	volatile int64_t t29 = 2896327384204277LL;

	t29 = (x137+((x138^x139)+x140));

	if (t29 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = 4034;
	int16_t x142 = -1;
	int64_t x143 = INT64_MIN;
	int32_t x144 = -4153;
	int64_t t30 = -3186942271763180382LL;

	t30 = (x141+((x142^x143)+x144));

	if (t30 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = -14929085442772LL;
	int32_t x148 = -1;
	volatile int64_t t31 = 453709046421966LL;

	t31 = (x145+((x146^x147)+x148));

	if (t31 != -14929085475538LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t32 = 263629U;

	t32 = (x149+((x150^x151)+x152));

	if (t32 != 839835U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x153 = 55U;
	static uint32_t x154 = 14U;
	uint8_t x155 = 7U;
	static int32_t x156 = INT32_MIN;
	uint32_t t33 = 496254U;

	t33 = (x153+((x154^x155)+x156));

	if (t33 != 2147483712U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x157 = 7440U;
	int8_t x158 = INT8_MIN;
	volatile uint16_t x159 = 359U;
	volatile uint32_t t34 = 812559085U;

	t34 = (x157+((x158^x159)+x160));

	if (t34 != 4294941687U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 66U;
	static uint16_t x162 = 343U;
	volatile uint16_t x163 = UINT16_MAX;
	int8_t x164 = 1;

	t35 = (x161+((x162^x163)+x164));

	if (t35 != 65259) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x165 = INT16_MIN;
	uint32_t x166 = 32901176U;
	static volatile uint8_t x167 = 52U;
	static int8_t x168 = INT8_MIN;

	t36 = (x165+((x166^x167)+x168));

	if (t36 != 32868236U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x169 = -1;
	int16_t x170 = INT16_MAX;
	uint16_t x171 = UINT16_MAX;
	volatile int16_t x172 = -4750;
	volatile int32_t t37 = -437182;

	t37 = (x169+((x170^x171)+x172));

	if (t37 != 28017) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = -1;
	static int64_t x176 = -48977285145962LL;
	int64_t t38 = 77742LL;

	t38 = (x173+((x174^x175)+x176));

	if (t38 != 9223323059569662612LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = -508;
	int16_t x180 = INT16_MIN;
	uint64_t t39 = 374330970LLU;

	t39 = (x177+((x178^x179)+x180));

	if (t39 != 18446718282811498131LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x185 = 462218888270LL;
	volatile int64_t x186 = INT64_MAX;
	int64_t x187 = -1LL;
	static int64_t x188 = INT64_MAX;
	int64_t t40 = 5LL;

	t40 = (x185+((x186^x187)+x188));

	if (t40 != 462218888269LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x190 = -1LL;

	t41 = (x189+((x190^x191)+x192));

	if (t41 != -2147450544LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	int16_t x195 = -3844;
	static uint32_t t42 = 579349433U;

	t42 = (x193+((x194^x195)+x196));

	if (t42 != 4294962039U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 69628973156605693LLU;

	t43 = (x197+((x198^x199)+x200));

	if (t43 != 69628974127145090LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -8784;
	int32_t x202 = -579972;
	int16_t x204 = 1053;
	static int32_t t44 = -100958;

	t44 = (x201+((x202^x203)+x204));

	if (t44 != -587703) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x206 = -1LL;
	static uint8_t x207 = UINT8_MAX;
	static uint64_t x208 = 33392314122219LLU;

	t45 = (x205+((x206^x207)+x208));

	if (t45 != 33392314121962LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	static uint32_t x210 = 163329U;
	static int64_t x211 = INT64_MIN;
	int16_t x212 = -1;

	t46 = (x209+((x210^x211)+x212));

	if (t46 != -9223372034707128833LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = INT8_MAX;
	int8_t x216 = -2;
	int32_t t47 = 2878151;

	t47 = (x213+((x214^x215)+x216));

	if (t47 != 32637) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	static uint16_t x222 = 11U;
	int32_t x223 = -30444938;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t48 = 937760U;

	t48 = (x221+((x222^x223)+x224));

	if (t48 != 4264522236U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = INT8_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t49 = 127807862LLU;

	t49 = (x225+((x226^x227)+x228));

	if (t49 != 65534LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MAX;
	volatile uint64_t x235 = 30033LLU;
	volatile int64_t x236 = 34038382693502LL;
	volatile uint64_t t50 = 1394LLU;

	t50 = (x233+((x234^x235)+x236));

	if (t50 != 34038382723627LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = INT16_MIN;
	int16_t x240 = 172;
	volatile int32_t t51 = 0;

	t51 = (x237+((x238^x239)+x240));

	if (t51 != -32598) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x241 = INT32_MIN;
	uint8_t x242 = 10U;
	uint64_t x244 = 273949959002794275LLU;

	t52 = (x241+((x242^x243)+x244));

	if (t52 != 9497321993710086445LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = -1;
	volatile int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t53 = 496LLU;

	t53 = (x245+((x246^x247)+x248));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x250 = 8U;
	static int32_t x251 = INT32_MAX;
	volatile int16_t x252 = INT16_MIN;
	uint32_t t54 = 110U;

	t54 = (x249+((x250^x251)+x252));

	if (t54 != 2149474087U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = 6588534264752833LL;
	static int32_t x254 = INT32_MIN;
	int16_t x255 = -1;
	int16_t x256 = INT16_MIN;
	int64_t t55 = 15281735909131LL;

	t55 = (x253+((x254^x255)+x256));

	if (t55 != 6588536412203712LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MIN;
	volatile int64_t x258 = INT64_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t56 = -2LL;

	t56 = (x257+((x258^x259)+x260));

	if (t56 != -126LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 3427401U;
	uint8_t x262 = 75U;
	int8_t x263 = -1;
	int8_t x264 = -1;
	uint32_t t57 = 1173U;

	t57 = (x261+((x262^x263)+x264));

	if (t57 != 3427324U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x265 = UINT64_MAX;
	volatile int8_t x266 = INT8_MIN;
	int64_t x268 = -92632811LL;

	t58 = (x265+((x266^x267)+x268));

	if (t58 != 34784110356LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 43023LLU;
	uint16_t x272 = 1107U;
	volatile uint64_t t59 = 1908319669587474LLU;

	t59 = (x269+((x270^x271)+x272));

	if (t59 != 76897LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x273 = 1809769LLU;
	static uint16_t x274 = UINT16_MAX;
	volatile int8_t x275 = 42;
	uint64_t t60 = 816493612120917LLU;

	t60 = (x273+((x274^x275)+x276));

	if (t60 != 1940797LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x277 = 2131117557LLU;
	int8_t x280 = INT8_MIN;

	t61 = (x277+((x278^x279)+x280));

	if (t61 != 4275399383LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = 159;
	volatile int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;
	uint64_t t62 = 6616737456531276951LLU;

	t62 = (x281+((x282^x283)+x284));

	if (t62 != 18446744073709518687LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x285 = -193445309569238LL;
	static int64_t x286 = -1LL;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	int64_t t63 = 2047357350169434473LL;

	t63 = (x285+((x286^x287)+x288));

	if (t63 != 9223178589397722921LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = -346LL;
	uint64_t t64 = 21543505942042LLU;

	t64 = (x289+((x290^x291)+x292));

	if (t64 != 18446744073709551269LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x294 = -13387809;
	uint64_t x295 = 539909LLU;
	uint8_t x296 = 123U;
	uint64_t t65 = 5631378LLU;

	t65 = (x293+((x294^x295)+x296));

	if (t65 != 18446744073696643925LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = 20;
	volatile int32_t x298 = -85;
	static uint32_t x300 = 64490U;

	t66 = (x297+((x298^x299)+x300));

	if (t66 != 18446744073709233693LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	static uint32_t x303 = 2981775U;
	volatile uint64_t t67 = 11339514LLU;

	t67 = (x301+((x302^x303)+x304));

	if (t67 != 9223372036851761264LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x309 = -54028187578923736LL;
	volatile int16_t x310 = INT16_MIN;
	uint8_t x311 = 0U;
	uint16_t x312 = 9U;
	int64_t t68 = -380210561309LL;

	t68 = (x309+((x310^x311)+x312));

	if (t68 != -54028187578956495LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = -1605;
	int8_t x319 = -1;
	int64_t x320 = INT64_MIN;
	volatile int64_t t69 = -1794575482370421340LL;

	t69 = (x317+((x318^x319)+x320));

	if (t69 != -9223372036854744646LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x321 = -7LL;
	uint16_t x322 = 7760U;
	volatile int8_t x323 = INT8_MIN;
	int64_t t70 = 96056470944LL;

	t70 = (x321+((x322^x323)+x324));

	if (t70 != -5448LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x326 = 6833082733640LL;
	int32_t x327 = -1;
	int64_t x328 = -3843315060LL;
	static volatile int64_t t71 = -7470077LL;

	t71 = (x325+((x326^x327)+x328));

	if (t71 != -6836926081469LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -838533303;
	static uint8_t x330 = 33U;
	volatile uint8_t x331 = 1U;
	uint64_t x332 = 913464072324930LLU;

	t72 = (x329+((x330^x331)+x332));

	if (t72 != 913463233791659LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	int8_t x335 = 1;
	int64_t x336 = 23866427221958LL;
	int64_t t73 = -3967440159699713LL;

	t73 = (x333+((x334^x335)+x336));

	if (t73 != -9223348170427553977LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x341 = -113698262;
	static int32_t x342 = -1;
	int16_t x343 = INT16_MIN;
	static int64_t x344 = -529504198562000LL;

	t74 = (x341+((x342^x343)+x344));

	if (t74 != -529504312227495LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = -7LL;
	int16_t x346 = INT16_MIN;
	int32_t x347 = -1;
	static uint16_t x348 = 8U;

	t75 = (x345+((x346^x347)+x348));

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x353 = 30U;
	int32_t x354 = INT32_MAX;
	static volatile uint32_t x355 = 3U;
	int32_t x356 = INT32_MIN;
	uint32_t t76 = 6U;

	t76 = (x353+((x354^x355)+x356));

	if (t76 != 26U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x357 = 29U;
	uint8_t x358 = 25U;
	int32_t x359 = 51399549;
	volatile int32_t t77 = 3;

	t77 = (x357+((x358^x359)+x360));

	if (t77 != 51399808) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;

	t78 = (x361+((x362^x363)+x364));

	if (t78 != 2147150690LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = 78U;
	int64_t x367 = 28759LL;
	uint32_t x368 = UINT32_MAX;
	int64_t t79 = -1LL;

	t79 = (x365+((x366^x367)+x368));

	if (t79 != 4294906642LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x370 = -3024;
	uint8_t x371 = 2U;
	int32_t x372 = 16;
	volatile int32_t t80 = 0;

	t80 = (x369+((x370^x371)+x372));

	if (t80 != 37952) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MAX;
	static int32_t x374 = INT32_MIN;
	static volatile uint32_t x375 = UINT32_MAX;

	t81 = (x373+((x374^x375)+x376));

	if (t81 != 476U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int8_t x378 = 0;
	uint64_t x379 = 4674168249880700LLU;
	static volatile int16_t x380 = INT16_MIN;
	uint64_t t82 = 31087157LLU;

	t82 = (x377+((x378^x379)+x380));

	if (t82 != 4674168249847931LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x381 = 32010U;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = -1LL;
	int8_t x384 = INT8_MIN;
	static volatile int64_t t83 = 7LL;

	t83 = (x381+((x382^x383)+x384));

	if (t83 != -4294935414LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x386 = UINT16_MAX;
	static int16_t x387 = INT16_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t84 = -1;

	t84 = (x385+((x386^x387)+x388));

	if (t84 != -65538) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = -1;
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 1966U;
	uint32_t x392 = 1U;
	int64_t t85 = 23277186841281LL;

	t85 = (x389+((x390^x391)+x392));

	if (t85 != -9223372036854773842LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x398 = 14519U;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = 414;
	volatile uint64_t t86 = 1352LLU;

	t86 = (x397+((x398^x399)+x400));

	if (t86 != 14835LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x401 = 1656U;
	int16_t x402 = 20;
	static int16_t x403 = INT16_MIN;
	uint8_t x404 = 7U;
	volatile uint32_t t87 = 83073133U;

	t87 = (x401+((x402^x403)+x404));

	if (t87 != 4294936211U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x405 = -7;
	int8_t x406 = INT8_MAX;
	uint64_t x407 = 47925540100914860LLU;
	static int16_t x408 = INT16_MIN;
	uint64_t t88 = 738560217394LLU;

	t88 = (x405+((x406^x407)+x408));

	if (t88 != 47925540100882124LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x410 = INT16_MIN;
	uint64_t t89 = 696297576LLU;

	t89 = (x409+((x410^x411)+x412));

	if (t89 != 18446744073709534639LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x413 = 7304832734832LLU;
	int16_t x414 = INT16_MIN;
	int8_t x415 = 36;
	int16_t x416 = 844;
	static uint64_t t90 = 7543230814LLU;

	t90 = (x413+((x414^x415)+x416));

	if (t90 != 7304832702944LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x417 = 40776458U;
	static volatile uint64_t x419 = UINT64_MAX;
	static int32_t x420 = -1;
	uint64_t t91 = 1200LLU;

	t91 = (x417+((x418^x419)+x420));

	if (t91 != 18446744069455360777LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x423 = 70U;
	volatile int64_t t92 = 683995326174976398LL;

	t92 = (x421+((x422^x423)+x424));

	if (t92 != 9223372034707292088LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = -8870;
	static int32_t x427 = INT32_MIN;
	uint32_t x428 = 291853U;
	volatile uint32_t t93 = 0U;

	t93 = (x425+((x426^x427)+x428));

	if (t93 != 2147766503U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -1;
	static int16_t x430 = 0;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t94 = 56965785;

	t94 = (x429+((x430^x431)+x432));

	if (t94 != -2147418114) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = 121267188U;
	volatile int64_t x438 = -1LL;
	int8_t x440 = INT8_MIN;
	volatile int64_t t95 = -241189676502464LL;

	t95 = (x437+((x438^x439)+x440));

	if (t95 != 121267059LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x441 = 15519U;
	int8_t x442 = -1;
	int32_t x443 = 20175957;
	int16_t x444 = INT16_MIN;
	volatile int32_t t96 = -9721;

	t96 = (x441+((x442^x443)+x444));

	if (t96 != -20193207) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x445 = INT64_MIN;
	uint32_t x446 = UINT32_MAX;
	int8_t x447 = -1;
	uint64_t t97 = 1529968367LLU;

	t97 = (x445+((x446^x447)+x448));

	if (t97 != 9223372036854784079LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = 83;
	int32_t x450 = -51875221;
	int32_t x451 = -232821890;
	int32_t x452 = INT32_MIN;
	volatile int32_t t98 = -393276;

	t98 = (x449+((x450^x451)+x452));

	if (t98 != -1896408728) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x458 = INT32_MIN;
	static int16_t x459 = -594;
	static int8_t x460 = 30;
	int32_t t99 = 824;

	t99 = (x457+((x458^x459)+x460));

	if (t99 != 2147483331) { NG(); } else { ; }
	
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

