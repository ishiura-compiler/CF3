#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 421992372;
int8_t x5 = INT8_MIN;
volatile uint8_t x8 = 3U;
int16_t x9 = INT16_MIN;
volatile uint64_t t2 = 0LLU;
int64_t x13 = INT64_MIN;
int8_t x16 = 1;
uint64_t t3 = 388733121565445581LLU;
uint16_t x20 = 18399U;
uint8_t x21 = 0U;
int16_t x22 = -1;
static uint32_t t5 = 12510296U;
static int8_t x28 = INT8_MIN;
int8_t x40 = INT8_MIN;
int64_t x44 = INT64_MAX;
volatile uint8_t x49 = 10U;
int32_t t12 = 444966798;
volatile int16_t x59 = -4;
uint32_t x69 = 4791U;
uint16_t x93 = UINT16_MAX;
int32_t x95 = -11;
volatile int64_t t23 = -91LL;
static uint8_t x97 = UINT8_MAX;
uint16_t x110 = 147U;
static volatile int8_t x111 = -46;
uint8_t x112 = 1U;
static uint64_t x113 = 14734264654968LLU;
static volatile int32_t x115 = 3780003;
volatile uint64_t t28 = 4128125219186LLU;
volatile int64_t t29 = 382LL;
volatile uint64_t x123 = 89000901LLU;
int64_t x127 = 2086891070621636LL;
uint16_t x128 = UINT16_MAX;
uint16_t x135 = 11U;
volatile uint8_t x141 = 44U;
int8_t x143 = INT8_MAX;
int64_t x146 = INT64_MIN;
int64_t t36 = 55869LL;
static int64_t x150 = INT64_MIN;
int64_t x153 = -175LL;
int8_t x155 = INT8_MAX;
int8_t x157 = INT8_MIN;
int8_t x160 = INT8_MIN;
static volatile int64_t t41 = 4043LL;
volatile int32_t x178 = -17716897;
uint32_t x191 = 1029465839U;
uint8_t x203 = 22U;
static volatile int8_t x209 = INT8_MIN;
int8_t x210 = INT8_MIN;
int16_t x211 = INT16_MIN;
uint64_t x215 = UINT64_MAX;
int64_t x217 = -1LL;
uint64_t x218 = 1016139176085922328LLU;
uint16_t x219 = UINT16_MAX;
volatile uint64_t t53 = UINT64_MAX;
int64_t x229 = 3426884203514266LL;
int64_t t58 = 0LL;
int8_t x244 = INT8_MAX;
volatile int64_t t59 = -733LL;
volatile int32_t x252 = -1;
uint64_t x254 = 57LLU;
uint16_t x255 = 0U;
int16_t x256 = 1708;
int64_t x260 = INT64_MAX;
static int32_t t64 = 2524;
static int16_t x266 = -1;
int64_t t65 = 4339115299115LL;
uint64_t x275 = 21873907631055LLU;
volatile uint32_t x284 = UINT32_MAX;
volatile uint64_t x287 = 186LLU;
volatile int64_t x299 = 12LL;
volatile int64_t t73 = -65936657732LL;
uint16_t x308 = 20U;
int64_t x309 = INT64_MAX;
volatile int8_t x313 = -7;
int32_t x316 = -1;
int32_t x317 = INT32_MAX;
uint64_t t78 = 4LLU;
int64_t x323 = 97423630234LL;
uint16_t x333 = UINT16_MAX;
static int8_t x337 = 1;
static int64_t x341 = INT64_MIN;
uint32_t x344 = 1010073U;
uint64_t x352 = 67058292386LLU;
static uint32_t t89 = 136635U;
static uint8_t x370 = 33U;
int32_t t91 = 5891;
int32_t x384 = INT32_MAX;
int16_t x388 = 44;
int64_t x401 = -1LL;


void f0(void) {
	volatile int16_t x2 = -1;
	uint8_t x3 = 1U;
	int32_t x4 = 102657;
	static volatile int32_t t0 = -5209;

	t0 = (x1|((x2|x3)%x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 546699437U;
	int8_t x7 = -12;
	static volatile uint32_t t1 = 590365U;

	t1 = (x5|((x6|x7)%x8));

	if (t1 != 4294967169U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = -1;
	uint64_t x12 = UINT64_MAX;

	t2 = (x9|((x10|x11)%x12));

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 1U;
	volatile uint64_t x15 = 965495802LLU;

	t3 = (x13|((x14|x15)%x16));

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 9908;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 9U;
	volatile int32_t t4 = 579;

	t4 = (x17|((x18|x19)%x20));

	if (t4 != -6148) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x23 = 17U;
	int8_t x24 = INT8_MAX;

	t5 = (x21|((x22|x23)%x24));

	if (t5 != 15U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -210LL;
	static volatile uint8_t x26 = UINT8_MAX;
	static uint64_t x27 = 1234LLU;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25|((x26|x27)%x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	static int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 2U;
	int64_t t7 = 105LL;

	t7 = (x29|((x30|x31)%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MIN;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int64_t t8 = -279298986410673LL;

	t8 = (x33|((x34|x35)%x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 808U;
	volatile int32_t x38 = INT32_MAX;
	int16_t x39 = -1;
	volatile int32_t t9 = -19;

	t9 = (x37|((x38|x39)%x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 519385285U;
	uint32_t x42 = 1079U;
	static uint32_t x43 = UINT32_MAX;
	volatile int64_t t10 = 96287LL;

	t10 = (x41|((x42|x43)%x44));

	if (t10 != 4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 37009U;
	int8_t x46 = -1;
	int64_t x47 = -4079LL;
	volatile uint16_t x48 = UINT16_MAX;
	int64_t t11 = -341757532931143868LL;

	t11 = (x45|((x46|x47)%x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -738;
	int32_t x51 = INT32_MAX;
	int16_t x52 = -1;

	t12 = (x49|((x50|x51)%x52));

	if (t12 != 10) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1;
	int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x53|((x54|x55)%x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int16_t x58 = INT16_MAX;
	static int32_t x60 = -385;
	int32_t t14 = -822;

	t14 = (x57|((x58|x59)%x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = 1272555LLU;
	uint32_t x63 = 1U;
	int16_t x64 = INT16_MAX;
	static uint64_t t15 = 17603502012397603LLU;

	t15 = (x61|((x62|x63)%x64));

	if (t15 != 18446744071562095377LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 7374;
	int8_t x66 = INT8_MAX;
	int8_t x67 = -1;
	static uint8_t x68 = 15U;
	static volatile int32_t t16 = 127594718;

	t16 = (x65|((x66|x67)%x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = 6U;
	static volatile int64_t t17 = -1065092638318970977LL;

	t17 = (x69|((x70|x71)%x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	volatile uint32_t x74 = 4503540U;
	int8_t x75 = -23;
	static volatile uint16_t x76 = 19097U;
	volatile uint32_t t18 = 11906U;

	t18 = (x73|((x74|x75)%x76));

	if (t18 != 4294948327U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	static int64_t x78 = -174LL;
	int8_t x79 = -1;
	int16_t x80 = -2;
	volatile int64_t t19 = -530954952LL;

	t19 = (x77|((x78|x79)%x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	int64_t x83 = -88610522LL;
	int32_t x84 = -1;
	volatile int64_t t20 = 198LL;

	t20 = (x81|((x82|x83)%x84));

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int16_t x86 = INT16_MAX;
	static uint32_t x87 = 86U;
	int16_t x88 = INT16_MIN;
	static uint32_t t21 = UINT32_MAX;

	t21 = (x85|((x86|x87)%x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = -1;
	int8_t x91 = INT8_MAX;
	int16_t x92 = -1;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89|((x90|x91)%x92));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x94 = 73U;
	static int64_t x96 = -1LL;

	t23 = (x93|((x94|x95)%x96));

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	int16_t x99 = -1;
	volatile uint64_t x100 = 6832935006LLU;
	uint64_t t24 = 4LLU;

	t24 = (x97|((x98|x99)%x100));

	if (t24 != 1733446399LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -36584LL;
	volatile int16_t x102 = INT16_MIN;
	uint64_t x103 = UINT64_MAX;
	volatile uint32_t x104 = 1274543U;
	volatile uint64_t t25 = 33802724005772053LLU;

	t25 = (x101|((x102|x103)%x104));

	if (t25 != 18446744073709516729LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	int16_t x106 = -36;
	static int32_t x107 = INT32_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int64_t t26 = -2132579894089038003LL;

	t26 = (x105|((x106|x107)%x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int32_t t27 = -639457;

	t27 = (x109|((x110|x111)%x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = 649727U;
	int16_t x116 = 15;

	t28 = (x113|((x114|x115)%x116));

	if (t28 != 14734264654969LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MAX;
	static uint8_t x120 = UINT8_MAX;

	t29 = (x117|((x118|x119)%x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 25U;
	static volatile uint64_t x122 = 19LLU;
	static uint32_t x124 = UINT32_MAX;
	volatile uint64_t t30 = 4623556448832745712LLU;

	t30 = (x121|((x122|x123)%x124));

	if (t30 != 89000927LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MAX;
	volatile int64_t t31 = 51007579LL;

	t31 = (x125|((x126|x127)%x128));

	if (t31 != -5622LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = -4043;
	uint16_t x131 = 15U;
	uint16_t x132 = 4U;
	int32_t t32 = 22;

	t32 = (x129|((x130|x131)%x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	volatile int64_t x134 = 56901587LL;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int64_t t33 = -5410586LL;

	t33 = (x133|((x134|x135)%x136));

	if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 3660;
	int8_t x138 = -1;
	int64_t x139 = 14LL;
	static volatile int64_t x140 = -18LL;
	volatile int64_t t34 = 66698074420LL;

	t34 = (x137|((x138|x139)%x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = -23;
	uint16_t x144 = 551U;
	static volatile int32_t t35 = -4977;

	t35 = (x141|((x142|x143)%x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 5;
	int8_t x147 = -14;
	int32_t x148 = INT32_MIN;

	t36 = (x145|((x146|x147)%x148));

	if (t36 != -9LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = -1LL;
	uint8_t x152 = UINT8_MAX;
	int64_t t37 = -1135143829720132934LL;

	t37 = (x149|((x150|x151)%x152));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = 80;
	int32_t x156 = INT32_MIN;
	int64_t t38 = 222335287LL;

	t38 = (x153|((x154|x155)%x156));

	if (t38 != -129LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	static int64_t x159 = INT64_MIN;
	volatile int64_t t39 = 58LL;

	t39 = (x157|((x158|x159)%x160));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 31202LLU;
	volatile int64_t x166 = INT64_MIN;
	int16_t x167 = 10077;
	int8_t x168 = INT8_MIN;
	uint64_t t40 = UINT64_MAX;

	t40 = (x165|((x166|x167)%x168));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = -1LL;
	volatile int64_t x171 = -26574944267172LL;
	volatile uint16_t x172 = 1U;

	t41 = (x169|((x170|x171)%x172));

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	int8_t x174 = INT8_MIN;
	int32_t x175 = -391;
	int32_t x176 = INT32_MAX;
	volatile int32_t t42 = 11543544;

	t42 = (x173|((x174|x175)%x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	volatile uint16_t x179 = UINT16_MAX;
	int8_t x180 = INT8_MAX;
	static int32_t t43 = 544;

	t43 = (x177|((x178|x179)%x180));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = 2;
	static volatile int32_t t44 = -460121;

	t44 = (x181|((x182|x183)%x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = -1LL;
	volatile int64_t t45 = 897506094LL;

	t45 = (x185|((x186|x187)%x188));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = 451;
	int16_t x190 = INT16_MIN;
	uint64_t x192 = UINT64_MAX;
	uint64_t t46 = 119818674LLU;

	t46 = (x189|((x190|x191)%x192));

	if (t46 != 4294961135LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = INT64_MIN;
	int32_t x194 = -1;
	volatile uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MIN;
	volatile int64_t t47 = 963489371428LL;

	t47 = (x193|((x194|x195)%x196));

	if (t47 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -49443621498018713LL;
	static volatile int8_t x198 = INT8_MIN;
	static uint32_t x199 = UINT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int64_t t48 = 256733590LL;

	t48 = (x197|((x198|x199)%x200));

	if (t48 != -49443621498018713LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MAX;
	int8_t x202 = -1;
	uint8_t x204 = 102U;
	static int32_t t49 = -1638;

	t49 = (x201|((x202|x203)%x204));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = -8269;
	volatile uint32_t x208 = 276677U;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x205|((x206|x207)%x208));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x212 = 108U;
	int32_t t51 = -2169270;

	t51 = (x209|((x210|x211)%x212));

	if (t51 != -20) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	int8_t x214 = -4;
	int64_t x216 = 110280927354605022LL;
	uint64_t t52 = 1293456LLU;

	t52 = (x213|((x214|x215)%x216));

	if (t52 != 9253201242345288749LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x220 = INT32_MAX;

	t53 = (x217|((x218|x219)%x220));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	static int32_t x222 = INT32_MAX;
	int16_t x223 = -11;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t54 = -953893;

	t54 = (x221|((x222|x223)%x224));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	volatile int64_t x226 = 371LL;
	int16_t x227 = INT16_MIN;
	volatile uint8_t x228 = 61U;
	volatile int64_t t55 = 19LL;

	t55 = (x225|((x226|x227)%x228));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x230 = -937884919975329508LL;
	uint8_t x231 = 5U;
	int16_t x232 = -3246;
	static volatile int64_t t56 = -18787902LL;

	t56 = (x229|((x230|x231)%x232));

	if (t56 != -1025LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x233 = INT64_MAX;
	static int16_t x234 = INT16_MIN;
	int64_t x235 = -127010081595974659LL;
	static int32_t x236 = -1;
	volatile int64_t t57 = INT64_MAX;

	t57 = (x233|((x234|x235)%x236));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x237 = 129U;
	int64_t x238 = -95477041867527000LL;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = INT8_MIN;

	t58 = (x237|((x238|x239)%x240));

	if (t58 != -87LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	volatile int16_t x242 = INT16_MAX;
	int32_t x243 = INT32_MAX;

	t59 = (x241|((x242|x243)%x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	volatile int8_t x248 = INT8_MIN;
	int32_t t60 = 238;

	t60 = (x245|((x246|x247)%x248));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = 67U;
	int32_t x250 = -1833863;
	int32_t x251 = 15761648;
	int32_t t61 = 3115941;

	t61 = (x249|((x250|x251)%x252));

	if (t61 != 67) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 14U;
	volatile uint64_t t62 = 2509LLU;

	t62 = (x253|((x254|x255)%x256));

	if (t62 != 63LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	int16_t x258 = -65;
	uint64_t x259 = 11141769LLU;
	volatile uint64_t t63 = 1810963231151LLU;

	t63 = (x257|((x258|x259)%x260));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	volatile int8_t x263 = -1;
	static int16_t x264 = 1729;

	t64 = (x261|((x262|x263)%x264));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = 0;
	static int64_t x267 = INT64_MIN;
	int8_t x268 = -1;

	t65 = (x265|((x266|x267)%x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x269 = 67U;
	volatile int64_t x270 = -1LL;
	int8_t x271 = 25;
	int32_t x272 = 41482720;
	volatile int64_t t66 = 557854932LL;

	t66 = (x269|((x270|x271)%x272));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -898LL;
	uint8_t x274 = UINT8_MAX;
	int8_t x276 = -33;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x273|((x274|x275)%x276));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x277 = 8679794U;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = -1;
	volatile int64_t x280 = INT64_MAX;
	static int64_t t68 = 1096327952569934448LL;

	t68 = (x277|((x278|x279)%x280));

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x281 = -1;
	int32_t x282 = INT32_MAX;
	static uint16_t x283 = 891U;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x281|((x282|x283)%x284));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x285 = 9;
	int32_t x286 = -552202;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t70 = 4393LLU;

	t70 = (x285|((x286|x287)%x288));

	if (t70 != 18446744073708999423LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = 1;
	int32_t x291 = 110;
	uint64_t x292 = 1280286LLU;
	uint64_t t71 = 131609598726177LLU;

	t71 = (x289|((x290|x291)%x292));

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = 1U;
	int32_t x295 = INT32_MAX;
	static volatile uint8_t x296 = UINT8_MAX;
	int64_t t72 = -11LL;

	t72 = (x293|((x294|x295)%x296));

	if (t72 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	uint32_t x298 = 25719U;
	volatile int16_t x300 = INT16_MIN;

	t73 = (x297|((x298|x299)%x300));

	if (t73 != -2147457921LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = INT64_MIN;
	uint8_t x302 = 0U;
	int32_t x303 = 765251133;
	int32_t x304 = INT32_MAX;
	volatile int64_t t74 = -82571571LL;

	t74 = (x301|((x302|x303)%x304));

	if (t74 != -9223372036089524675LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	volatile uint32_t t75 = 422U;

	t75 = (x305|((x306|x307)%x308));

	if (t75 != 4294967183U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x310 = UINT64_MAX;
	uint64_t x311 = 0LLU;
	uint32_t x312 = 589U;
	uint64_t t76 = 4LLU;

	t76 = (x309|((x310|x311)%x312));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	static int32_t t77 = 0;

	t77 = (x313|((x314|x315)%x316));

	if (t77 != -7) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 2356016364187816491LLU;

	t78 = (x317|((x318|x319)%x320));

	if (t78 != 1954629525383938047LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -63;
	int16_t x322 = -4;
	int32_t x324 = 1517;
	static volatile int64_t t79 = 120952874603LL;

	t79 = (x321|((x322|x323)%x324));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -1LL;
	static int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	int64_t t80 = 275029739336578LL;

	t80 = (x325|((x326|x327)%x328));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = 2710U;
	volatile int8_t x330 = INT8_MAX;
	uint32_t x331 = 29420U;
	volatile int64_t x332 = 180770016595121LL;
	int64_t t81 = -539784322LL;

	t81 = (x329|((x330|x331)%x332));

	if (t81 != 31487LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x334 = INT32_MIN;
	int8_t x335 = 1;
	uint16_t x336 = 14640U;
	static volatile int32_t t82 = -2;

	t82 = (x333|((x334|x335)%x336));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x338 = -1LL;
	uint16_t x339 = 118U;
	volatile int64_t x340 = -1LL;
	static volatile int64_t t83 = 251136647LL;

	t83 = (x337|((x338|x339)%x340));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	static volatile int64_t t84 = 6085043298672LL;

	t84 = (x341|((x342|x343)%x344));

	if (t84 != -9223372036854638909LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MAX;
	uint8_t x347 = UINT8_MAX;
	static volatile int8_t x348 = 2;
	int32_t t85 = -152296;

	t85 = (x345|((x346|x347)%x348));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -15;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -1;
	volatile uint64_t t86 = 3109768219685771LLU;

	t86 = (x349|((x350|x351)%x352));

	if (t86 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x354 = -1;
	int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MAX;
	volatile int64_t t87 = -864592613135944LL;

	t87 = (x353|((x354|x355)%x356));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	int16_t x359 = 11;
	static uint8_t x360 = UINT8_MAX;
	volatile int64_t t88 = 96432LL;

	t88 = (x357|((x358|x359)%x360));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x361 = 21862U;
	uint32_t x362 = 229437026U;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;

	t89 = (x361|((x362|x363)%x364));

	if (t89 != 32615U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x365 = -3;
	int8_t x366 = -1;
	int8_t x367 = INT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t90 = -281557180428033572LL;

	t90 = (x365|((x366|x367)%x368));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MIN;

	t91 = (x369|((x370|x371)%x372));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	static int64_t x374 = 243LL;
	int32_t x375 = -49894031;
	volatile uint8_t x376 = 4U;
	volatile int64_t t92 = -146797369050548LL;

	t92 = (x373|((x374|x375)%x376));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x377 = 13U;
	int64_t x378 = INT64_MAX;
	volatile int64_t x379 = INT64_MIN;
	static volatile int16_t x380 = INT16_MIN;
	volatile int64_t t93 = 118243700LL;

	t93 = (x377|((x378|x379)%x380));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x381 = 593344553333068LLU;
	int32_t x382 = INT32_MIN;
	uint16_t x383 = UINT16_MAX;
	static uint64_t t94 = 1251176349869300084LLU;

	t94 = (x381|((x382|x383)%x384));

	if (t94 != 18446744072825929727LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = UINT8_MAX;
	uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 1U;
	volatile int32_t t95 = -2614460;

	t95 = (x385|((x386|x387)%x388));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x389 = 1764175736012LLU;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	int32_t x392 = -1;
	volatile uint64_t t96 = 3612LLU;

	t96 = (x389|((x390|x391)%x392));

	if (t96 != 1764175736012LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x393 = 319716089U;
	uint32_t x394 = 190894921U;
	int64_t x395 = INT64_MAX;
	uint16_t x396 = 742U;
	volatile int64_t t97 = 646771405426LL;

	t97 = (x393|((x394|x395)%x396));

	if (t97 != 319716093LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MAX;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = 17106;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x397|((x398|x399)%x400));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	static int64_t x404 = -22809521LL;
	static volatile int64_t t99 = -1989431022606391LL;

	t99 = (x401|((x402|x403)%x404));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

