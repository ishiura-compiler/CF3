#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
int32_t x7 = INT32_MIN;
static uint64_t x12 = 48201268LLU;
volatile uint64_t t2 = 59781LLU;
volatile int32_t x21 = INT32_MAX;
int32_t t5 = -2186480;
static int8_t x31 = INT8_MIN;
volatile int32_t t8 = 0;
int32_t x37 = -1;
static volatile int64_t x39 = -605221226LL;
volatile uint16_t x42 = 270U;
volatile int32_t t10 = -5438169;
volatile uint64_t x45 = UINT64_MAX;
uint32_t x46 = 13811899U;
int32_t x47 = INT32_MAX;
static int8_t x48 = -1;
int64_t x50 = INT64_MAX;
volatile int32_t x54 = -168;
static int32_t x55 = INT32_MAX;
uint16_t x77 = UINT16_MAX;
int32_t x78 = INT32_MIN;
volatile int32_t x80 = INT32_MIN;
int64_t x81 = 110665789025LL;
volatile int16_t x82 = -1;
int16_t x84 = INT16_MIN;
int8_t x89 = 1;
uint64_t x90 = UINT64_MAX;
uint8_t x93 = 55U;
int64_t t23 = 63477772641021812LL;
uint64_t x103 = 60133397434106LLU;
int64_t x105 = -7LL;
uint64_t x106 = UINT64_MAX;
uint16_t x111 = 2137U;
int16_t x123 = -678;
volatile int32_t t30 = 50268;
int64_t x125 = INT64_MIN;
volatile int64_t x138 = -117675132LL;
int64_t x140 = -142759LL;
uint32_t t35 = 9325526U;
static int64_t x148 = -107803020148398LL;
int32_t x149 = -1;
int32_t t37 = 501509;
uint32_t x155 = UINT32_MAX;
uint8_t x159 = 27U;
int64_t x161 = INT64_MAX;
uint16_t x162 = 31U;
int16_t x166 = -1;
volatile uint64_t x167 = 128476772385359LLU;
static volatile int64_t t41 = INT64_MIN;
int8_t x179 = INT8_MIN;
int16_t x182 = INT16_MIN;
int32_t x192 = INT32_MAX;
static int16_t x195 = -1;
int64_t t49 = INT64_MIN;
static int32_t x202 = INT32_MAX;
volatile uint32_t x205 = 94785U;
volatile int16_t x207 = INT16_MIN;
volatile uint32_t x209 = 172902788U;
int16_t x211 = -1;
static volatile int8_t x222 = INT8_MIN;
int32_t t58 = 0;
uint32_t x241 = UINT32_MAX;
int64_t x243 = INT64_MIN;
static int8_t x246 = -15;
static int8_t x247 = INT8_MIN;
int8_t x250 = -21;
volatile int32_t x251 = INT32_MIN;
uint64_t x259 = UINT64_MAX;
int8_t x263 = 8;
uint16_t x266 = 218U;
uint32_t x267 = UINT32_MAX;
int32_t x269 = INT32_MAX;
int32_t x276 = INT32_MAX;
int64_t x277 = -1LL;
volatile uint64_t x280 = UINT64_MAX;
volatile uint64_t t69 = UINT64_MAX;
int32_t x291 = INT32_MIN;
volatile int8_t x293 = INT8_MIN;
int32_t x303 = 0;
int8_t x310 = 1;
int32_t x323 = INT32_MIN;
static int8_t x331 = INT8_MIN;
int8_t x350 = -21;
static int64_t t87 = 185984LL;
volatile int16_t x358 = INT16_MAX;
static volatile int64_t t89 = 9792513714496203LL;
int32_t x362 = INT32_MIN;
volatile uint32_t t90 = 13150U;
volatile int16_t x365 = 14;
volatile int64_t x372 = -3716338760LL;
int32_t t93 = -333;
static int32_t t94 = -572;
int16_t x384 = 15923;
int32_t x392 = INT32_MIN;
int8_t x393 = INT8_MIN;
int16_t x395 = -53;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int64_t x2 = -1LL;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -1;

	t0 = (x1&((x2==x3)^x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 5151;

	t1 = (x5&((x6==x7)^x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile int64_t x10 = 593920LL;
	uint16_t x11 = UINT16_MAX;

	t2 = (x9&((x10==x11)^x12));

	if (t2 != 48201216LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13&((x14==x15)^x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint8_t x18 = 6U;
	volatile uint8_t x19 = UINT8_MAX;
	int32_t x20 = -1;
	static volatile int32_t t4 = -183205427;

	t4 = (x17&((x18==x19)^x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 1U;
	uint16_t x23 = 74U;
	int8_t x24 = 1;

	t5 = (x21&((x22==x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 1U;
	static volatile int32_t x26 = INT32_MIN;
	static volatile int64_t x27 = -1LL;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -71900220;

	t6 = (x25&((x26==x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x30 = -1;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 1948LL;

	t7 = (x29&((x30==x31)^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int8_t x34 = -1;
	static volatile int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;

	t8 = (x33&((x34==x35)^x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	int32_t x40 = -26;
	int32_t t9 = 1;

	t9 = (x37&((x38==x39)^x40));

	if (t9 != -26) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint16_t x43 = 35U;
	int32_t x44 = 1;

	t10 = (x41&((x42==x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t t11 = UINT64_MAX;

	t11 = (x45&((x46==x47)^x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	static uint16_t x51 = UINT16_MAX;
	int64_t x52 = -6LL;
	int64_t t12 = 12773358920870148LL;

	t12 = (x49&((x50==x51)^x52));

	if (t12 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 21U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -18589;

	t13 = (x53&((x54==x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int16_t x58 = 6;
	volatile uint64_t x59 = 7700647958LLU;
	int64_t x60 = 2477684051LL;
	volatile int64_t t14 = -15717544317LL;

	t14 = (x57&((x58==x59)^x60));

	if (t14 != 2477684051LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 1700817LLU;
	int8_t x62 = INT8_MIN;
	int32_t x63 = -31314;
	volatile uint16_t x64 = 1U;
	volatile uint64_t t15 = 1721LLU;

	t15 = (x61&((x62==x63)^x64));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 8501;
	static int32_t x66 = INT32_MIN;
	static int16_t x67 = 31;
	int32_t x68 = INT32_MAX;
	static int32_t t16 = -801;

	t16 = (x65&((x66==x67)^x68));

	if (t16 != 8501) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 87209439;
	int64_t x70 = INT64_MAX;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t17 = 3;

	t17 = (x69&((x70==x71)^x72));

	if (t17 != 13791) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	static volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 103U;

	t18 = (x73&((x74==x75)^x76));

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x79 = 6U;
	volatile int32_t t19 = 71097;

	t19 = (x77&((x78==x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = INT8_MIN;
	volatile int64_t t20 = 4385315LL;

	t20 = (x81&((x82==x83)^x84));

	if (t20 != 110665760768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	int8_t x86 = 1;
	volatile int32_t x87 = INT32_MIN;
	static int8_t x88 = 1;
	static volatile int64_t t21 = -54305197871369LL;

	t21 = (x85&((x86==x87)^x88));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x91 = 7505794306160712751LLU;
	static int32_t x92 = 502050631;
	volatile int32_t t22 = 482342567;

	t22 = (x89&((x90==x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	int64_t x95 = INT64_MAX;
	volatile int64_t x96 = INT64_MIN;

	t23 = (x93&((x94==x95)^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = 29;
	int16_t x98 = 1353;
	int32_t x99 = INT32_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t24 = 3152449LL;

	t24 = (x97&((x98==x99)^x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 2U;
	volatile int8_t x102 = -1;
	int32_t x104 = -1;
	static int32_t t25 = -395495;

	t25 = (x101&((x102==x103)^x104));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x107 = 51139LL;
	volatile int16_t x108 = INT16_MIN;
	volatile int64_t t26 = 129142995932189LL;

	t26 = (x105&((x106==x107)^x108));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -63415082131730362LL;
	volatile uint64_t x110 = 0LLU;
	uint16_t x112 = 120U;
	int64_t t27 = 190898970676337890LL;

	t27 = (x109&((x110==x111)^x112));

	if (t27 != 64LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 6U;
	int32_t x114 = -1483;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = 16492;
	static int32_t t28 = -119762;

	t28 = (x113&((x114==x115)^x116));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = INT8_MAX;
	uint64_t x118 = 1187903443049LLU;
	static int8_t x119 = -59;
	int16_t x120 = -14848;
	int32_t t29 = -6;

	t29 = (x117&((x118==x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile int32_t x122 = -1;
	uint16_t x124 = 21U;

	t30 = (x121&((x122==x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 9U;
	static int64_t x127 = -1LL;
	uint16_t x128 = UINT16_MAX;
	volatile int64_t t31 = -75586396267892LL;

	t31 = (x125&((x126==x127)^x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	static int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -71628551;

	t32 = (x129&((x130==x131)^x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	static int32_t x134 = -1;
	int16_t x135 = INT16_MAX;
	int8_t x136 = -1;
	int32_t t33 = 451;

	t33 = (x133&((x134==x135)^x136));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x139 = -7;
	static volatile int64_t t34 = 25421LL;

	t34 = (x137&((x138==x139)^x140));

	if (t34 != 9223372036854633049LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int16_t x142 = -1;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = 43448U;

	t35 = (x141&((x142==x143)^x144));

	if (t35 != 43448U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 95U;
	int8_t x146 = 0;
	int16_t x147 = INT16_MAX;
	volatile int64_t t36 = -636405470LL;

	t36 = (x145&((x146==x147)^x148));

	if (t36 != 82LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	int8_t x151 = -1;
	uint16_t x152 = 2677U;

	t37 = (x149&((x150==x151)^x152));

	if (t37 != 2677) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 79U;
	int32_t x154 = -1;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t38 = 117840728839929LL;

	t38 = (x153&((x154==x155)^x156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	int32_t x158 = 31936074;
	int8_t x160 = -2;
	static int64_t t39 = INT64_MIN;

	t39 = (x157&((x158==x159)^x160));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x163 = 34064450118977578LLU;
	static uint64_t x164 = 3009165LLU;
	volatile uint64_t t40 = 350980402389958LLU;

	t40 = (x161&((x162==x163)^x164));

	if (t40 != 3009165LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int32_t x168 = INT32_MIN;

	t41 = (x165&((x166==x167)^x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	uint32_t x170 = 5124U;
	uint64_t x171 = 21LLU;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t42 = -2084390798791LL;

	t42 = (x169&((x170==x171)^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 0U;
	volatile uint32_t x174 = 13452421U;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 3U;
	static int32_t t43 = -67036434;

	t43 = (x173&((x174==x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 25;
	static int16_t x178 = 1;
	int16_t x180 = -1;
	volatile int32_t t44 = -1;

	t44 = (x177&((x178==x179)^x180));

	if (t44 != 25) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	static uint8_t x183 = UINT8_MAX;
	volatile int64_t x184 = INT64_MIN;
	static int64_t t45 = 522916637LL;

	t45 = (x181&((x182==x183)^x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 6U;
	static int16_t x186 = INT16_MIN;
	int8_t x187 = 1;
	int8_t x188 = INT8_MAX;
	int32_t t46 = -1;

	t46 = (x185&((x186==x187)^x188));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	static int32_t x190 = -521;
	static uint8_t x191 = 1U;
	volatile int32_t t47 = 151031;

	t47 = (x189&((x190==x191)^x192));

	if (t47 != 2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	static int8_t x194 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t48 = 55;

	t48 = (x193&((x194==x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile uint8_t x198 = 3U;
	uint32_t x199 = 5922927U;
	int8_t x200 = -1;

	t49 = (x197&((x198==x199)^x200));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 3U;
	volatile int16_t x203 = INT16_MIN;
	volatile int32_t x204 = INT32_MIN;
	int32_t t50 = -869;

	t50 = (x201&((x202==x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = 280U;
	uint8_t x208 = 17U;
	static volatile uint32_t t51 = 7943U;

	t51 = (x205&((x206==x207)^x208));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = UINT32_MAX;
	volatile int16_t x212 = 2192;
	uint32_t t52 = 2891U;

	t52 = (x209&((x210==x211)^x212));

	if (t52 != 2176U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 32U;
	int16_t x214 = 3;
	uint16_t x215 = 228U;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t53 = 675LL;

	t53 = (x213&((x214==x215)^x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 28U;
	static uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 29118538U;
	int8_t x220 = 11;
	volatile int32_t t54 = 16488;

	t54 = (x217&((x218==x219)^x220));

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	int64_t x223 = -11013387816716678LL;
	int16_t x224 = 3392;
	volatile int32_t t55 = -29557545;

	t55 = (x221&((x222==x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	int16_t x226 = -6;
	uint8_t x227 = 13U;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 2536;

	t56 = (x225&((x226==x227)^x228));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	static int8_t x230 = -1;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = -1LL;
	int64_t t57 = -114886448528LL;

	t57 = (x229&((x230==x231)^x232));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MAX;
	volatile uint64_t x234 = 39853142249LLU;
	static int32_t x235 = 68;
	int16_t x236 = -1;

	t58 = (x233&((x234==x235)^x236));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 2;
	int32_t x238 = -36;
	int16_t x239 = -22;
	uint64_t x240 = 79770LLU;
	static volatile uint64_t t59 = 25766575170511LLU;

	t59 = (x237&((x238==x239)^x240));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x242 = -52441LL;
	uint64_t x244 = 633120170298506LLU;
	volatile uint64_t t60 = 1653122323LLU;

	t60 = (x241&((x242==x243)^x244));

	if (t60 != 3336162442LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 1278U;
	int16_t x248 = -4;
	uint32_t t61 = 179444U;

	t61 = (x245&((x246==x247)^x248));

	if (t61 != 1276U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	static int32_t x252 = INT32_MAX;
	static volatile uint64_t t62 = 23412597363465LLU;

	t62 = (x249&((x250==x251)^x252));

	if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MIN;
	static volatile int64_t x255 = INT64_MAX;
	static int32_t x256 = INT32_MAX;
	volatile int32_t t63 = 952895;

	t63 = (x253&((x254==x255)^x256));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 8235;
	volatile int32_t x258 = -1;
	static int32_t x260 = 227;
	static volatile int32_t t64 = 693871213;

	t64 = (x257&((x258==x259)^x260));

	if (t64 != 34) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -1LL;
	int8_t x262 = INT8_MAX;
	uint8_t x264 = 14U;
	volatile int64_t t65 = -397515553425LL;

	t65 = (x261&((x262==x263)^x264));

	if (t65 != 14LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	int16_t x268 = INT16_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x265&((x266==x267)^x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = -3;
	volatile int64_t x271 = INT64_MIN;
	volatile int16_t x272 = INT16_MIN;
	int32_t t67 = 40445178;

	t67 = (x269&((x270==x271)^x272));

	if (t67 != 2147450880) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int8_t x274 = 10;
	uint64_t x275 = UINT64_MAX;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x273&((x274==x275)^x276));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	static int16_t x279 = INT16_MIN;

	t69 = (x277&((x278==x279)^x280));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x281 = INT16_MIN;
	int32_t x282 = 16189;
	static uint32_t x283 = 21U;
	int64_t x284 = -371017LL;
	volatile int64_t t70 = -119000769068138LL;

	t70 = (x281&((x282==x283)^x284));

	if (t70 != -393216LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	volatile uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MAX;
	uint32_t t71 = 12141563U;

	t71 = (x285&((x286==x287)^x288));

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 3748436U;
	int16_t x290 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile uint32_t t72 = 1237U;

	t72 = (x289&((x290==x291)^x292));

	if (t72 != 12884U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 1U;
	static volatile int8_t x295 = INT8_MAX;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = -681250;

	t73 = (x293&((x294==x295)^x296));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 1;
	int64_t x298 = INT64_MIN;
	int32_t x299 = -241;
	static volatile int64_t x300 = INT64_MAX;
	int64_t t74 = -258935017LL;

	t74 = (x297&((x298==x299)^x300));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	static uint8_t x302 = 31U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x301&((x302==x303)^x304));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int16_t x306 = -31;
	int64_t x307 = -2076045320156646LL;
	static volatile int16_t x308 = 1;
	volatile int64_t t76 = 20LL;

	t76 = (x305&((x306==x307)^x308));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x309 = 0U;
	static int8_t x311 = 6;
	volatile int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = -141491419;

	t77 = (x309&((x310==x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MAX;
	volatile int8_t x316 = -1;
	static volatile int32_t t78 = INT32_MIN;

	t78 = (x313&((x314==x315)^x316));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 11U;
	int8_t x318 = 0;
	int8_t x319 = -1;
	static int8_t x320 = 9;
	int32_t t79 = -3594027;

	t79 = (x317&((x318==x319)^x320));

	if (t79 != 9) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1488812U;
	int64_t x322 = -1LL;
	static volatile int16_t x324 = INT16_MIN;
	volatile uint32_t t80 = 3179U;

	t80 = (x321&((x322==x323)^x324));

	if (t80 != 1474560U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 11U;
	int8_t x326 = 8;
	int8_t x327 = INT8_MAX;
	int64_t x328 = 142928698LL;
	volatile int64_t t81 = -7565038474LL;

	t81 = (x325&((x326==x327)^x328));

	if (t81 != 10LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static int16_t x330 = INT16_MAX;
	int64_t x332 = -34LL;
	static int64_t t82 = -15149LL;

	t82 = (x329&((x330==x331)^x332));

	if (t82 != 65502LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	volatile int32_t x335 = INT32_MAX;
	uint64_t x336 = 26496506524579470LLU;
	uint64_t t83 = 29894071LLU;

	t83 = (x333&((x334==x335)^x336));

	if (t83 != 26496506524565504LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	static int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	int16_t x340 = INT16_MAX;
	int32_t t84 = -6;

	t84 = (x337&((x338==x339)^x340));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x342 = 0U;
	volatile int32_t x343 = -25592;
	int8_t x344 = INT8_MAX;
	volatile int64_t t85 = -1963105191924LL;

	t85 = (x341&((x342==x343)^x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	int8_t x347 = -2;
	uint16_t x348 = 13223U;
	volatile uint32_t t86 = 158962U;

	t86 = (x345&((x346==x347)^x348));

	if (t86 != 13223U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	volatile uint8_t x351 = 3U;
	int64_t x352 = INT64_MIN;

	t87 = (x349&((x350==x351)^x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 337U;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	int32_t t88 = 0;

	t88 = (x353&((x354==x355)^x356));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -4462195316361503LL;
	int8_t x359 = INT8_MAX;
	volatile int32_t x360 = INT32_MIN;

	t89 = (x357&((x358==x359)^x360));

	if (t89 != -4462196142637056LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	uint16_t x363 = 58U;
	uint32_t x364 = 56U;

	t90 = (x361&((x362==x363)^x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x366 = 13437008766337065LLU;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = 9827;
	int32_t t91 = -95542723;

	t91 = (x365&((x366==x367)^x368));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -8310902986LL;
	volatile int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	volatile int64_t t92 = 2483145371348127420LL;

	t92 = (x369&((x370==x371)^x372));

	if (t92 != -8587760848LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MIN;
	uint64_t x375 = 3216156160330440LLU;
	volatile int16_t x376 = 230;

	t93 = (x373&((x374==x375)^x376));

	if (t93 != 230) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -2135;
	static int16_t x378 = -3;
	int32_t x379 = -1;
	int16_t x380 = -1;

	t94 = (x377&((x378==x379)^x380));

	if (t94 != -2135) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x381 = INT16_MAX;
	static int64_t x382 = 8313919230LL;
	uint32_t x383 = UINT32_MAX;
	int32_t t95 = 1;

	t95 = (x381&((x382==x383)^x384));

	if (t95 != 15923) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 527395;
	int16_t x386 = 6;
	volatile int8_t x387 = -17;
	volatile int16_t x388 = -1;
	volatile int32_t t96 = 898324;

	t96 = (x385&((x386==x387)^x388));

	if (t96 != 527395) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = 59;
	int8_t x390 = -1;
	volatile int64_t x391 = -1LL;
	volatile int32_t t97 = 40381;

	t97 = (x389&((x390==x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = -1LL;
	int16_t x396 = -1;
	volatile int32_t t98 = 14946257;

	t98 = (x393&((x394==x395)^x396));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -78082814;
	int16_t x398 = -1;
	volatile uint32_t x399 = 20U;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 326;

	t99 = (x397&((x398==x399)^x400));

	if (t99 != 3330) { NG(); } else { ; }
	
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

