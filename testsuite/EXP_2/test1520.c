#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static int32_t x7 = -1;
volatile int32_t t1 = 5638;
volatile uint16_t x12 = UINT16_MAX;
int16_t x13 = -1;
int16_t x19 = -12;
int64_t x20 = 42678LL;
int64_t x22 = -1LL;
uint8_t x30 = 77U;
static uint16_t x31 = 29617U;
uint64_t x34 = 124856687934258924LLU;
volatile uint32_t x39 = 2580U;
volatile int64_t t10 = -660777345LL;
int64_t x46 = INT64_MAX;
uint32_t t11 = UINT32_MAX;
volatile int32_t x52 = INT32_MAX;
int16_t x56 = 14959;
int8_t x58 = INT8_MIN;
static uint16_t x63 = 680U;
int16_t x66 = -1;
uint16_t x68 = UINT16_MAX;
volatile int64_t t17 = 4LL;
int16_t x74 = INT16_MIN;
int8_t x77 = INT8_MAX;
int64_t x80 = INT64_MAX;
int64_t x81 = INT64_MIN;
int8_t x91 = INT8_MIN;
int16_t x96 = 749;
volatile int64_t t24 = -1065818LL;
int16_t x107 = INT16_MIN;
volatile uint16_t x110 = 44U;
static int16_t x114 = 25;
volatile uint8_t x122 = 93U;
volatile uint8_t x131 = UINT8_MAX;
int64_t x135 = 0LL;
int16_t x137 = 610;
uint8_t x151 = 0U;
volatile int64_t x162 = -7731368934654633LL;
uint32_t x167 = 2595199U;
volatile int32_t t41 = 0;
int32_t x174 = -1;
int16_t x183 = -1;
static uint16_t x184 = UINT16_MAX;
int64_t x191 = INT64_MIN;
int8_t x192 = -1;
uint8_t x196 = UINT8_MAX;
uint32_t x199 = UINT32_MAX;
uint32_t x212 = UINT32_MAX;
uint32_t t52 = UINT32_MAX;
int64_t x214 = -1LL;
uint8_t x217 = 122U;
uint64_t x218 = 275LLU;
int32_t t54 = 79643;
volatile int16_t x222 = -2;
static volatile int32_t x226 = -1;
volatile int32_t t56 = -127235;
volatile int8_t x234 = -1;
uint64_t x240 = 586834956354740113LLU;
int32_t x247 = 191260898;
static volatile int64_t t61 = -4613954517245LL;
static volatile int32_t t66 = 121924;
static uint8_t x269 = UINT8_MAX;
static int32_t x275 = INT32_MIN;
int64_t x281 = 4796265166532882LL;
int32_t x294 = INT32_MIN;
static int8_t x302 = INT8_MIN;
int32_t x304 = -12539235;
static int16_t x308 = -1;
int32_t x310 = -1;
int64_t t78 = INT64_MAX;
static int64_t x331 = INT64_MIN;
int64_t x336 = INT64_MAX;
int8_t x348 = -1;
static int64_t x350 = 6LL;
uint64_t t88 = UINT64_MAX;
int16_t x361 = -141;
volatile uint32_t x363 = 80282716U;
volatile int64_t t90 = -7LL;
volatile uint64_t t93 = UINT64_MAX;
static volatile uint64_t x382 = UINT64_MAX;
volatile uint64_t x384 = 4LLU;
int64_t x387 = INT64_MAX;
static volatile int16_t x390 = 1;
uint16_t x393 = 85U;


void f0(void) {
	int8_t x1 = -27;
	uint32_t x2 = UINT32_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 10125;

	t0 = ((x1^(x2<x3))|x4);

	if (t0 != -27) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 0;
	int64_t x6 = INT64_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5^(x6<x7))|x8);

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 5;
	volatile int16_t x10 = INT16_MIN;
	static uint16_t x11 = UINT16_MAX;
	int32_t t2 = 42;

	t2 = ((x9^(x10<x11))|x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -1;
	volatile int32_t t3 = 8072803;

	t3 = ((x13^(x14<x15))|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static uint32_t x18 = 525036567U;
	int64_t t4 = 59963615838100LL;

	t4 = ((x17^(x18<x19))|x20);

	if (t4 != 2147483646LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	int64_t x23 = INT64_MIN;
	uint8_t x24 = 40U;
	int32_t t5 = 320106;

	t5 = ((x21^(x22<x23))|x24);

	if (t5 != 40) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile uint16_t x26 = 7854U;
	static int16_t x27 = -12397;
	int8_t x28 = 0;
	int32_t t6 = -62;

	t6 = ((x25^(x26<x27))|x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 8110LL;

	t7 = ((x29^(x30<x31))|x32);

	if (t7 != -2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = -1;
	uint16_t x35 = 0U;
	volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -3262464;

	t8 = ((x33^(x34<x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	uint16_t x40 = 3U;
	volatile int64_t t9 = -80492LL;

	t9 = ((x37^(x38<x39))|x40);

	if (t9 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -5;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = -1;
	int64_t x44 = INT64_MIN;

	t10 = ((x41^(x42<x43))|x44);

	if (t10 != -5LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -7636708;
	volatile int64_t x47 = -45278LL;
	uint32_t x48 = UINT32_MAX;

	t11 = ((x45^(x46<x47))|x48);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 255285391U;
	uint8_t x51 = 54U;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x49^(x50<x51))|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	static int32_t x55 = INT32_MIN;
	volatile int32_t t13 = 25137;

	t13 = ((x53^(x54<x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 381U;
	int8_t x59 = -1;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 33805;

	t14 = ((x57^(x58<x59))|x60);

	if (t14 != -32388) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 692284697766950471LLU;
	volatile int16_t x62 = -570;
	int64_t x64 = -9090LL;
	volatile uint64_t t15 = 1309885LLU;

	t15 = ((x61^(x62<x63))|x64);

	if (t15 != 18446744073709551230LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -239;
	static uint16_t x67 = 198U;
	volatile int32_t t16 = -1033302915;

	t16 = ((x65^(x66<x67))|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	static uint32_t x70 = 57U;
	volatile uint8_t x71 = 7U;
	int16_t x72 = INT16_MIN;

	t17 = ((x69^(x70<x71))|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -9245;
	volatile uint8_t x75 = UINT8_MAX;
	uint8_t x76 = 1U;
	int32_t t18 = -97849;

	t18 = ((x73^(x74<x75))|x76);

	if (t18 != -9245) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = -1;
	int8_t x79 = 2;
	volatile int64_t t19 = INT64_MAX;

	t19 = ((x77^(x78<x79))|x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = UINT32_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	int16_t x84 = -1;
	static int64_t t20 = -2090774438124839819LL;

	t20 = ((x81^(x82<x83))|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 204;
	static uint64_t x86 = UINT64_MAX;
	volatile int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 130;

	t21 = ((x85^(x86<x87))|x88);

	if (t21 != -52) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = 58U;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -629;

	t22 = ((x89^(x90<x91))|x92);

	if (t22 != -2147450881) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	static volatile int8_t x94 = -1;
	int64_t x95 = INT64_MAX;
	volatile int64_t t23 = 95501373285LL;

	t23 = ((x93^(x94<x95))|x96);

	if (t23 != -9223372036854775059LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 7LL;
	int16_t x98 = 1;
	int16_t x99 = -1389;
	static uint16_t x100 = 7U;

	t24 = ((x97^(x98<x99))|x100);

	if (t24 != 7LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -23316753066143LL;
	static int16_t x102 = -16104;
	uint32_t x103 = 1978862U;
	int32_t x104 = 14770;
	int64_t t25 = 660698646287584LL;

	t25 = ((x101^(x102<x103))|x104);

	if (t25 != -23316753055757LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 596908258;
	int16_t x106 = 6;
	static volatile int32_t x108 = -7757142;
	volatile int32_t t26 = -25093;

	t26 = ((x105^(x106<x107))|x108);

	if (t26 != -6440214) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 16U;
	volatile uint32_t x111 = 507U;
	volatile uint8_t x112 = UINT8_MAX;
	int32_t t27 = -39;

	t27 = ((x109^(x110<x111))|x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -32373474;
	uint8_t x115 = 1U;
	uint64_t x116 = 1LLU;
	static volatile uint64_t t28 = 8454976277LLU;

	t28 = ((x113^(x114<x115))|x116);

	if (t28 != 18446744073677178143LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 45420606LLU;
	volatile int64_t x118 = -760888887LL;
	static uint64_t x119 = UINT64_MAX;
	volatile uint64_t x120 = 5LLU;
	volatile uint64_t t29 = 111201515610LLU;

	t29 = ((x117^(x118<x119))|x120);

	if (t29 != 45420607LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -47;
	uint32_t x123 = 28U;
	uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x121^(x122<x123))|x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1253477;
	uint16_t x126 = UINT16_MAX;
	static int8_t x127 = -7;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x125^(x126<x127))|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	int16_t x132 = 6944;
	volatile int32_t t32 = 61;

	t32 = ((x129^(x130<x131))|x132);

	if (t32 != -95) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -787199;
	int64_t x134 = 214907878LL;
	int32_t x136 = INT32_MAX;
	int32_t t33 = 184482;

	t33 = ((x133^(x134<x135))|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MAX;
	uint64_t x139 = 41469732608LLU;
	static int16_t x140 = INT16_MAX;
	volatile int32_t t34 = -2848;

	t34 = ((x137^(x138<x139))|x140);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -1LL;
	int16_t x143 = -2517;
	int32_t x144 = 4904084;
	int64_t t35 = -15178745LL;

	t35 = ((x141^(x142<x143))|x144);

	if (t35 != -9223372036849871724LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static int64_t x146 = INT64_MIN;
	static int64_t x147 = 1LL;
	uint16_t x148 = 883U;
	static volatile int32_t t36 = -23;

	t36 = ((x145^(x146<x147))|x148);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 147LLU;
	int8_t x150 = 16;
	uint32_t x152 = 34U;
	volatile uint64_t t37 = 107941LLU;

	t37 = ((x149^(x150<x151))|x152);

	if (t37 != 179LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 7LLU;
	int8_t x154 = 31;
	uint32_t x155 = 93212989U;
	int8_t x156 = -1;
	uint64_t t38 = UINT64_MAX;

	t38 = ((x153^(x154<x155))|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 20U;
	uint8_t x158 = 47U;
	volatile int16_t x159 = 233;
	int64_t x160 = -1LL;
	volatile int64_t t39 = -1LL;

	t39 = ((x157^(x158<x159))|x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x163 = INT8_MAX;
	volatile int16_t x164 = -11737;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x161^(x162<x163))|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = -204;
	static int32_t x168 = INT32_MIN;

	t41 = ((x165^(x166<x167))|x168);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 45U;
	int16_t x170 = INT16_MIN;
	static int64_t x171 = INT64_MIN;
	uint64_t x172 = 12LLU;
	volatile uint64_t t42 = 133296966919199965LLU;

	t42 = ((x169^(x170<x171))|x172);

	if (t42 != 45LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	volatile int16_t x175 = INT16_MIN;
	volatile int8_t x176 = INT8_MIN;
	int32_t t43 = 6214;

	t43 = ((x173^(x174<x175))|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -73209970121LL;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = 20U;
	static int8_t x180 = INT8_MAX;
	volatile int64_t t44 = 42516218714738LL;

	t44 = ((x177^(x178<x179))|x180);

	if (t44 != -73209970049LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -346LL;
	volatile uint16_t x182 = UINT16_MAX;
	volatile int64_t t45 = 41878410LL;

	t45 = ((x181^(x182<x183))|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MIN;
	static int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 5104868;

	t46 = ((x185^(x186<x187))|x188);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	int8_t x190 = INT8_MIN;
	volatile int32_t t47 = -1;

	t47 = ((x189^(x190<x191))|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 256;
	uint16_t x194 = 931U;
	static int16_t x195 = -1949;
	static volatile int32_t t48 = -5795929;

	t48 = ((x193^(x194<x195))|x196);

	if (t48 != 511) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 5922632629517169592LLU;
	volatile int64_t x198 = INT64_MIN;
	static int8_t x200 = INT8_MIN;
	static volatile uint64_t t49 = 3202084828LLU;

	t49 = ((x197^(x198<x199))|x200);

	if (t49 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint8_t x202 = 11U;
	int64_t x203 = INT64_MIN;
	static int8_t x204 = INT8_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = ((x201^(x202<x203))|x204);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -7;
	volatile int8_t x206 = INT8_MIN;
	uint16_t x207 = 2247U;
	uint64_t x208 = 220LLU;
	volatile uint64_t t51 = 118471877810LLU;

	t51 = ((x205^(x206<x207))|x208);

	if (t51 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 3;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -1;

	t52 = ((x209^(x210<x211))|x212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -199;
	volatile uint64_t x215 = UINT64_MAX;
	volatile int8_t x216 = -1;
	int32_t t53 = 4395331;

	t53 = ((x213^(x214<x215))|x216);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x219 = 5U;
	volatile int16_t x220 = INT16_MIN;

	t54 = ((x217^(x218<x219))|x220);

	if (t54 != -32646) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = 71401LL;
	uint64_t x223 = 1687609433LLU;
	int16_t x224 = -1;
	volatile int64_t t55 = -52361LL;

	t55 = ((x221^(x222<x223))|x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static volatile uint64_t x227 = 1790472480038LLU;
	uint8_t x228 = UINT8_MAX;

	t56 = ((x225^(x226<x227))|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 493712U;
	volatile uint32_t x230 = UINT32_MAX;
	static int64_t x231 = INT64_MIN;
	uint16_t x232 = 3U;
	uint32_t t57 = 649144U;

	t57 = ((x229^(x230<x231))|x232);

	if (t57 != 493715U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	uint32_t x235 = 70151U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 117107;

	t58 = ((x233^(x234<x235))|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -1;
	uint32_t x238 = 9U;
	uint16_t x239 = 13621U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x237^(x238<x239))|x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 1U;
	volatile uint8_t x242 = 0U;
	int32_t x243 = INT32_MAX;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 1548;

	t60 = ((x241^(x242<x243))|x244);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -29905101036778LL;
	static volatile uint16_t x246 = 7U;
	int8_t x248 = -1;

	t61 = ((x245^(x246<x247))|x248);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = 0;
	volatile int32_t x251 = -50;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = -2571706;

	t62 = ((x249^(x250<x251))|x252);

	if (t62 != -2147450881) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	static volatile uint16_t x254 = 25U;
	volatile int64_t x255 = -12127620LL;
	int32_t x256 = 587352695;
	volatile int32_t t63 = INT32_MAX;

	t63 = ((x253^(x254<x255))|x256);

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 10960;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = 1524;

	t64 = ((x257^(x258<x259))|x260);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -1;
	static uint64_t x262 = 117168647LLU;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t65 = -64697;

	t65 = ((x261^(x262<x263))|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MIN;
	static int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;

	t66 = ((x265^(x266<x267))|x268);

	if (t66 != -2147418113) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = -1;
	volatile int64_t x271 = INT64_MIN;
	uint16_t x272 = UINT16_MAX;
	int32_t t67 = 1;

	t67 = ((x269^(x270<x271))|x272);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 55;
	static int8_t x274 = -1;
	uint8_t x276 = 8U;
	int32_t t68 = -121151;

	t68 = ((x273^(x274<x275))|x276);

	if (t68 != 63) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 2649747LLU;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -84;
	static int8_t x280 = INT8_MIN;
	uint64_t t69 = 635560966LLU;

	t69 = ((x277^(x278<x279))|x280);

	if (t69 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = INT16_MIN;
	static uint64_t x283 = UINT64_MAX;
	static volatile int64_t x284 = -1LL;
	int64_t t70 = -13609166LL;

	t70 = ((x281^(x282<x283))|x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -5266LL;
	static uint32_t x286 = UINT32_MAX;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 2723U;
	volatile int64_t t71 = -253633LL;

	t71 = ((x285^(x286<x287))|x288);

	if (t71 != -5137LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static int32_t x290 = -1630;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 2608U;
	static int32_t t72 = 108;

	t72 = ((x289^(x290<x291))|x292);

	if (t72 != -2147481039) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	volatile uint16_t x295 = UINT16_MAX;
	static int64_t x296 = -17876367220363LL;
	int64_t t73 = 1117898308326926710LL;

	t73 = ((x293^(x294<x295))|x296);

	if (t73 != -17876367212545LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	volatile int16_t x298 = 1;
	int16_t x299 = 1;
	int32_t x300 = -6981481;
	volatile int64_t t74 = -3890453199LL;

	t74 = ((x297^(x298<x299))|x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	static int16_t x303 = -42;
	int32_t t75 = -556;

	t75 = ((x301^(x302<x303))|x304);

	if (t75 != -12517377) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 1LLU;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 66102426U;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x305^(x306<x307))|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x311 = 1204105U;
	volatile uint64_t x312 = 3608049408524509929LLU;
	volatile uint64_t t77 = 44815276353LLU;

	t77 = ((x309^(x310<x311))|x312);

	if (t77 != 12831421445379285737LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = -7708;
	volatile int32_t x315 = INT32_MIN;
	uint8_t x316 = UINT8_MAX;

	t78 = ((x313^(x314<x315))|x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = 237;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	int16_t x320 = 5520;
	int32_t t79 = -6;

	t79 = ((x317^(x318<x319))|x320);

	if (t79 != 5629) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1423850U;
	volatile int8_t x322 = 1;
	int16_t x323 = -318;
	int16_t x324 = INT16_MIN;
	volatile uint32_t t80 = 192943132U;

	t80 = ((x321^(x322<x323))|x324);

	if (t80 != 4294949354U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	uint8_t x326 = 14U;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t81 = 3745404451255590LL;

	t81 = ((x325^(x326<x327))|x328);

	if (t81 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 10U;
	int64_t x330 = -2377967289LL;
	uint64_t x332 = UINT64_MAX;
	static uint64_t t82 = UINT64_MAX;

	t82 = ((x329^(x330<x331))|x332);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int64_t t83 = INT64_MAX;

	t83 = ((x333^(x334<x335))|x336);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	static volatile uint8_t x338 = 21U;
	volatile int8_t x339 = 18;
	static int16_t x340 = INT16_MIN;
	static int32_t t84 = -9708;

	t84 = ((x337^(x338<x339))|x340);

	if (t84 != -32641) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -7133LL;
	int8_t x342 = INT8_MAX;
	static volatile int64_t x343 = INT64_MIN;
	uint16_t x344 = 26404U;
	int64_t t85 = -949996069LL;

	t85 = ((x341^(x342<x343))|x344);

	if (t85 != -6361LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int8_t x346 = INT8_MAX;
	int64_t x347 = -1LL;
	int32_t t86 = 10418379;

	t86 = ((x345^(x346<x347))|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile int32_t x351 = 5236;
	int8_t x352 = -10;
	int64_t t87 = 79158930297879228LL;

	t87 = ((x349^(x350<x351))|x352);

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 287575LLU;
	uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MAX;
	static int16_t x356 = -1;

	t88 = ((x353^(x354<x355))|x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 1;
	int64_t x358 = INT64_MIN;
	static int32_t x359 = INT32_MIN;
	int16_t x360 = -1;
	int32_t t89 = 98513;

	t89 = ((x357^(x358<x359))|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = 0;
	int64_t x364 = INT64_MIN;

	t90 = ((x361^(x362<x363))|x364);

	if (t90 != -142LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 22U;
	uint8_t x366 = 27U;
	int8_t x367 = INT8_MIN;
	int16_t x368 = 938;
	volatile int32_t t91 = 323754143;

	t91 = ((x365^(x366<x367))|x368);

	if (t91 != 958) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 374561153U;
	int16_t x370 = INT16_MAX;
	int64_t x371 = 2992561085033669560LL;
	uint8_t x372 = 1U;
	volatile uint32_t t92 = 0U;

	t92 = ((x369^(x370<x371))|x372);

	if (t92 != 374561153U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 4095197540301LLU;
	uint32_t x374 = UINT32_MAX;
	volatile int8_t x375 = 3;
	uint64_t x376 = UINT64_MAX;

	t93 = ((x373^(x374<x375))|x376);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = 3U;
	static int8_t x379 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -386812;

	t94 = ((x377^(x378<x379))|x380);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = 26942774750LLU;
	volatile int16_t x383 = INT16_MIN;
	static volatile uint64_t t95 = 119969771932LLU;

	t95 = ((x381^(x382<x383))|x384);

	if (t95 != 26942774750LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -280262;
	volatile int32_t x386 = -56774;
	int8_t x388 = -1;
	volatile int32_t t96 = 4939270;

	t96 = ((x385^(x386<x387))|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = UINT64_MAX;
	uint32_t x391 = 1521366U;
	int32_t x392 = INT32_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = ((x389^(x390<x391))|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = 17U;
	volatile int32_t x395 = -755078;
	volatile int32_t x396 = 167109784;
	volatile int32_t t98 = 2193625;

	t98 = ((x393^(x394<x395))|x396);

	if (t98 != 167109853) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 15U;
	int32_t x398 = -4;
	static uint64_t x399 = 158369116932026LLU;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t99 = UINT64_MAX;

	t99 = ((x397^(x398<x399))|x400);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

