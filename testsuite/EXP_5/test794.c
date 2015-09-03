#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x17 = 1U;
static int8_t x18 = INT8_MIN;
int8_t x19 = INT8_MIN;
int16_t x28 = INT16_MIN;
uint64_t x29 = 553382068963305LLU;
int16_t x31 = INT16_MIN;
int64_t x33 = -1LL;
int16_t x34 = 239;
int64_t x47 = -7671LL;
volatile uint64_t x51 = UINT64_MAX;
int8_t x53 = INT8_MIN;
int64_t x58 = -115085212963332LL;
int16_t x62 = 10;
int16_t x66 = INT16_MAX;
volatile int32_t t16 = -469990722;
static volatile int32_t x72 = INT32_MAX;
int64_t x76 = INT64_MIN;
int64_t x77 = -205191LL;
volatile int32_t x83 = -1;
volatile int8_t x99 = -10;
int8_t x105 = 0;
volatile int64_t x106 = -37LL;
int16_t x112 = -24;
static volatile uint64_t t26 = UINT64_MAX;
uint16_t x119 = UINT16_MAX;
uint8_t x121 = UINT8_MAX;
uint16_t x129 = 469U;
int32_t t31 = -31511;
int8_t x133 = INT8_MIN;
int16_t x141 = -1;
static int64_t x148 = INT64_MIN;
volatile uint16_t x149 = 4673U;
uint8_t x151 = 37U;
int16_t x152 = INT16_MAX;
int8_t x155 = -1;
int8_t x167 = INT8_MIN;
uint32_t x174 = 21U;
uint8_t x182 = 1U;
uint64_t x183 = UINT64_MAX;
volatile int32_t t43 = 2464;
static int8_t x185 = INT8_MAX;
static int8_t x188 = INT8_MAX;
uint32_t x189 = UINT32_MAX;
int32_t x191 = INT32_MIN;
uint32_t t45 = UINT32_MAX;
uint32_t x193 = 7U;
int32_t x194 = INT32_MIN;
volatile int64_t x211 = INT64_MIN;
int64_t t49 = -96723172028201807LL;
volatile int32_t x216 = -1;
int8_t x219 = 63;
uint16_t x220 = 7997U;
volatile int32_t t51 = 6;
uint64_t x230 = 611891941430573141LLU;
uint16_t x238 = 8U;
int16_t x247 = -9168;
int32_t t58 = 171138;
uint16_t x251 = 6U;
uint64_t x257 = 1782929822339521LLU;
uint8_t x261 = 6U;
int64_t x262 = -1LL;
volatile int32_t t63 = 47287;
uint32_t x276 = 188416U;
static uint8_t x278 = 63U;
static int32_t t66 = 5;
int32_t x286 = INT32_MAX;
uint8_t x287 = 1U;
int64_t x288 = -2065661830973103LL;
int16_t x289 = -1;
static int8_t x291 = INT8_MAX;
uint8_t x294 = UINT8_MAX;
uint8_t x312 = 9U;
volatile int16_t x314 = INT16_MAX;
uint32_t x315 = 1055980079U;
int32_t x319 = INT32_MAX;
int32_t x329 = INT32_MIN;
volatile int64_t x332 = -1LL;
int32_t t79 = -111348;
volatile uint16_t x346 = UINT16_MAX;
int32_t x356 = INT32_MIN;
int16_t x359 = -1;
int64_t x360 = -24835235LL;
volatile int32_t t85 = -537671843;
static uint64_t t86 = 187682006LLU;
int64_t x371 = INT64_MIN;
volatile int64_t t87 = 4LL;
uint16_t x374 = 21U;
volatile int32_t x381 = INT32_MIN;
uint8_t x383 = 3U;
static uint8_t x384 = 2U;
int64_t x390 = INT64_MIN;
volatile int32_t t92 = 1014;
int16_t x393 = INT16_MIN;
uint16_t x398 = UINT16_MAX;
int32_t x406 = -1;


void f0(void) {
	static uint16_t x1 = 3U;
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = 509380701;

	t0 = (x1+((x2%x3)<=x4));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 5449222LLU;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	uint16_t x8 = 41U;
	uint64_t t1 = 85113570446772127LLU;

	t1 = (x5+((x6%x7)<=x8));

	if (t1 != 5449222LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	uint8_t x10 = 15U;
	int64_t x11 = -424LL;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = -355;

	t2 = (x9+((x10%x11)<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -197327;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = -2348;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -12;

	t3 = (x13+((x14%x15)<=x16));

	if (t3 != -197327) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x20 = INT32_MAX;
	int32_t t4 = 1452;

	t4 = (x17+((x18%x19)<=x20));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 3306U;
	static uint16_t x22 = 210U;
	volatile int16_t x23 = -1;
	static volatile uint32_t x24 = 249452U;
	static int32_t t5 = -45;

	t5 = (x21+((x22%x23)<=x24));

	if (t5 != 3307) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	static int16_t x26 = -2;
	int16_t x27 = 5008;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x25+((x26%x27)<=x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = 296763U;
	int16_t x32 = -1;
	volatile uint64_t t7 = 259081334226LLU;

	t7 = (x29+((x30%x31)<=x32));

	if (t7 != 553382068963306LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x35 = INT16_MAX;
	int16_t x36 = -1;
	volatile int64_t t8 = 2950723823200LL;

	t8 = (x33+((x34%x35)<=x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 8216646028757910LLU;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = 438U;
	static volatile uint8_t x40 = 0U;
	volatile uint64_t t9 = 14207363379895LLU;

	t9 = (x37+((x38%x39)<=x40));

	if (t9 != 8216646028757910LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 9885163543752818LLU;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	volatile int32_t x44 = 6;
	uint64_t t10 = 797948717LLU;

	t10 = (x41+((x42%x43)<=x44));

	if (t10 != 9885163543752819LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int64_t x46 = INT64_MIN;
	uint64_t x48 = 302601127733LLU;
	static volatile int32_t t11 = 464604;

	t11 = (x45+((x46%x47)<=x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	volatile int16_t x50 = -1;
	int8_t x52 = INT8_MIN;
	volatile int64_t t12 = 5LL;

	t12 = (x49+((x50%x51)<=x52));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x54 = UINT16_MAX;
	int64_t x55 = -1LL;
	uint32_t x56 = 9142538U;
	static volatile int32_t t13 = 99;

	t13 = (x53+((x54%x55)<=x56));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int32_t x59 = INT32_MAX;
	int16_t x60 = -1;
	int32_t t14 = 179585937;

	t14 = (x57+((x58%x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	static uint32_t x63 = UINT32_MAX;
	uint8_t x64 = 26U;
	int32_t t15 = 115072088;

	t15 = (x61+((x62%x63)<=x64));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;

	t16 = (x65+((x66%x67)<=x68));

	if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 4022U;
	int8_t x70 = INT8_MAX;
	int32_t x71 = INT32_MAX;
	int32_t t17 = 209952;

	t17 = (x69+((x70%x71)<=x72));

	if (t17 != 4023) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -4510498545935329046LL;
	int32_t x74 = INT32_MAX;
	static int8_t x75 = INT8_MIN;
	int64_t t18 = -11036LL;

	t18 = (x73+((x74%x75)<=x76));

	if (t18 != -4510498545935329046LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int64_t t19 = 228LL;

	t19 = (x77+((x78%x79)<=x80));

	if (t19 != -205191LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	int16_t x82 = -188;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 2802236;

	t20 = (x81+((x82%x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 28112U;
	uint8_t x86 = 2U;
	static int32_t x87 = -1;
	static volatile int8_t x88 = INT8_MIN;
	int32_t t21 = 25;

	t21 = (x85+((x86%x87)<=x88));

	if (t21 != 28112) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MAX;
	int32_t x91 = INT32_MIN;
	int32_t x92 = -853;
	int32_t t22 = INT32_MIN;

	t22 = (x89+((x90%x91)<=x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	int32_t x94 = -1;
	uint32_t x95 = 2963U;
	volatile uint32_t x96 = 6626U;
	int32_t t23 = 11147256;

	t23 = (x93+((x94%x95)<=x96));

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int16_t x98 = 1822;
	int64_t x100 = -1LL;
	int32_t t24 = -675213;

	t24 = (x97+((x98%x99)<=x100));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x107 = UINT32_MAX;
	static uint64_t x108 = 22036LLU;
	volatile int32_t t25 = 1653225;

	t25 = (x105+((x106%x107)<=x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = UINT64_MAX;
	uint8_t x110 = 92U;
	int8_t x111 = 1;

	t26 = (x109+((x110%x111)<=x112));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 15222U;
	uint16_t x114 = 52U;
	int16_t x115 = 9;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t27 = 512509;

	t27 = (x113+((x114%x115)<=x116));

	if (t27 != 15223) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 15LLU;
	volatile uint16_t x118 = UINT16_MAX;
	int64_t x120 = INT64_MIN;
	uint64_t t28 = 24459756843136679LLU;

	t28 = (x117+((x118%x119)<=x120));

	if (t28 != 15LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x122 = 1813385U;
	int32_t x123 = -60;
	volatile uint8_t x124 = 21U;
	int32_t t29 = 10482555;

	t29 = (x121+((x122%x123)<=x124));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	static uint16_t x128 = UINT16_MAX;
	int32_t t30 = 194;

	t30 = (x125+((x126%x127)<=x128));

	if (t30 != 256) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x130 = 54U;
	volatile int8_t x131 = INT8_MIN;
	int32_t x132 = -1;

	t31 = (x129+((x130%x131)<=x132));

	if (t31 != 469) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x134 = -1323;
	volatile int32_t x135 = INT32_MAX;
	uint32_t x136 = UINT32_MAX;
	int32_t t32 = -426;

	t32 = (x133+((x134%x135)<=x136));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	volatile int64_t x138 = -1887437801547LL;
	int32_t x139 = -1421093;
	int32_t x140 = INT32_MAX;
	static volatile int64_t t33 = -53LL;

	t33 = (x137+((x138%x139)<=x140));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x142 = 9;
	int16_t x143 = 537;
	int8_t x144 = INT8_MIN;
	volatile int32_t t34 = -11332968;

	t34 = (x141+((x142%x143)<=x144));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MAX;
	static int8_t x147 = INT8_MIN;
	volatile int32_t t35 = -310562227;

	t35 = (x145+((x146%x147)<=x148));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = INT8_MIN;
	volatile int32_t t36 = 71253;

	t36 = (x149+((x150%x151)<=x152));

	if (t36 != 4674) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = 2498U;
	int32_t x154 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = 506;

	t37 = (x153+((x154%x155)<=x156));

	if (t37 != 2498) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = 8U;
	volatile uint64_t x158 = UINT64_MAX;
	static uint32_t x159 = UINT32_MAX;
	int8_t x160 = 11;
	volatile int32_t t38 = -324;

	t38 = (x157+((x158%x159)<=x160));

	if (t38 != 9) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = 49;
	uint8_t x166 = 10U;
	int64_t x168 = -3256478036896LL;
	int32_t t39 = 494;

	t39 = (x165+((x166%x167)<=x168));

	if (t39 != 49) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = -1;
	int64_t x171 = -1LL;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t40 = -11372130;

	t40 = (x169+((x170%x171)<=x172));

	if (t40 != 65536) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	static int32_t t41 = 1360;

	t41 = (x173+((x174%x175)<=x176));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x177 = UINT16_MAX;
	uint64_t x178 = UINT64_MAX;
	static int32_t x179 = 19;
	int16_t x180 = INT16_MAX;
	volatile int32_t t42 = 123;

	t42 = (x177+((x178%x179)<=x180));

	if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	int32_t x184 = -1;

	t43 = (x181+((x182%x183)<=x184));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x186 = 134U;
	int64_t x187 = 18213384519LL;
	volatile int32_t t44 = -984141073;

	t44 = (x185+((x186%x187)<=x188));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x190 = -3;
	int32_t x192 = INT32_MIN;

	t45 = (x189+((x190%x191)<=x192));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x195 = 14U;
	uint32_t x196 = 5633010U;
	uint32_t t46 = 15416U;

	t46 = (x193+((x194%x195)<=x196));

	if (t46 != 7U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 3U;
	int8_t x198 = -1;
	static int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t47 = -515419;

	t47 = (x197+((x198%x199)<=x200));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	volatile int64_t x202 = -1LL;
	uint64_t x203 = 4328055718124LLU;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t48 = -555;

	t48 = (x201+((x202%x203)<=x204));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	uint16_t x210 = 16U;
	static uint16_t x212 = UINT16_MAX;

	t49 = (x209+((x210%x211)<=x212));

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	volatile int16_t x215 = INT16_MAX;
	volatile int64_t t50 = 185955624964LL;

	t50 = (x213+((x214%x215)<=x216));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = -1;

	t51 = (x217+((x218%x219)<=x220));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t x224 = INT32_MIN;
	int32_t t52 = 31;

	t52 = (x221+((x222%x223)<=x224));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = 113786LLU;
	int8_t x227 = -53;
	volatile int64_t x228 = INT64_MAX;
	static int32_t t53 = -274;

	t53 = (x225+((x226%x227)<=x228));

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -1;
	volatile uint16_t x231 = 4U;
	uint8_t x232 = 61U;
	static int32_t t54 = 59588;

	t54 = (x229+((x230%x231)<=x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	static uint32_t x235 = 55U;
	int32_t x236 = INT32_MAX;
	volatile int32_t t55 = 18321;

	t55 = (x233+((x234%x235)<=x236));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x237 = INT32_MIN;
	volatile int16_t x239 = INT16_MIN;
	static int16_t x240 = INT16_MAX;
	int32_t t56 = -377207927;

	t56 = (x237+((x238%x239)<=x240));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x241 = 1019;
	volatile int8_t x242 = -1;
	static int32_t x243 = 14760837;
	uint8_t x244 = UINT8_MAX;
	int32_t t57 = 149135549;

	t57 = (x241+((x242%x243)<=x244));

	if (t57 != 1020) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x245 = -28;
	int8_t x246 = 14;
	int64_t x248 = INT64_MIN;

	t58 = (x245+((x246%x247)<=x248));

	if (t58 != -28) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x249 = 3149U;
	int32_t x250 = INT32_MIN;
	volatile uint16_t x252 = 3471U;
	uint32_t t59 = 105U;

	t59 = (x249+((x250%x251)<=x252));

	if (t59 != 3150U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x253 = 5U;
	volatile int16_t x254 = -1;
	uint64_t x255 = 279015347981014LLU;
	static uint16_t x256 = 7536U;
	static volatile int32_t t60 = 0;

	t60 = (x253+((x254%x255)<=x256));

	if (t60 != 5) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x258 = INT64_MIN;
	static int16_t x259 = 232;
	int8_t x260 = -41;
	static uint64_t t61 = 98794LLU;

	t61 = (x257+((x258%x259)<=x260));

	if (t61 != 1782929822339522LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x263 = INT8_MIN;
	static volatile int8_t x264 = 0;
	int32_t t62 = -11;

	t62 = (x261+((x262%x263)<=x264));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MIN;
	uint32_t x266 = 360760U;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = 351;

	t63 = (x265+((x266%x267)<=x268));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = 42;
	volatile uint16_t x274 = 45U;
	int32_t x275 = -1284274;
	int32_t t64 = 766;

	t64 = (x273+((x274%x275)<=x276));

	if (t64 != 43) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = INT16_MIN;
	uint64_t x279 = 1442498938LLU;
	int16_t x280 = -1;
	volatile int32_t t65 = -104634809;

	t65 = (x277+((x278%x279)<=x280));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	volatile uint16_t x282 = 60U;
	int64_t x283 = INT64_MIN;
	int32_t x284 = -1;

	t66 = (x281+((x282%x283)<=x284));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x285+((x286%x287)<=x288));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x290 = INT64_MAX;
	static int16_t x292 = -6;
	static volatile int32_t t68 = -1;

	t68 = (x289+((x290%x291)<=x292));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x293 = -14;
	int32_t x295 = -91143;
	volatile int16_t x296 = 5;
	int32_t t69 = -96138;

	t69 = (x293+((x294%x295)<=x296));

	if (t69 != -14) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x297 = 1372589U;
	static int32_t x298 = INT32_MIN;
	static int8_t x299 = 59;
	uint8_t x300 = UINT8_MAX;
	volatile uint32_t t70 = 934260283U;

	t70 = (x297+((x298%x299)<=x300));

	if (t70 != 1372590U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -1;
	uint16_t x302 = 48U;
	uint8_t x303 = 66U;
	uint8_t x304 = UINT8_MAX;
	static volatile int32_t t71 = -743;

	t71 = (x301+((x302%x303)<=x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MAX;
	int32_t x308 = -13107704;
	int32_t t72 = -105;

	t72 = (x305+((x306%x307)<=x308));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x309 = INT64_MIN;
	uint64_t x310 = 8577421LLU;
	static int16_t x311 = -1;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x309+((x310%x311)<=x312));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -10;
	int8_t x316 = INT8_MIN;
	volatile int32_t t74 = -3387;

	t74 = (x313+((x314%x315)<=x316));

	if (t74 != -9) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x317 = -1;
	volatile int16_t x318 = -437;
	uint64_t x320 = 2236LLU;
	int32_t t75 = 142056;

	t75 = (x317+((x318%x319)<=x320));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -112723LL;
	static int8_t x322 = -1;
	int64_t x323 = 292858270LL;
	int16_t x324 = -636;
	int64_t t76 = 129009909340896LL;

	t76 = (x321+((x322%x323)<=x324));

	if (t76 != -112723LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MAX;
	uint64_t x327 = 1430169733226542844LLU;
	int64_t x328 = INT64_MIN;
	int32_t t77 = -56;

	t77 = (x325+((x326%x327)<=x328));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x330 = UINT32_MAX;
	int32_t x331 = -1;
	static volatile int32_t t78 = INT32_MIN;

	t78 = (x329+((x330%x331)<=x332));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x333 = -5;
	uint16_t x334 = 15333U;
	int64_t x335 = INT64_MIN;
	static int32_t x336 = INT32_MIN;

	t79 = (x333+((x334%x335)<=x336));

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = -1;
	static volatile uint64_t x343 = 2063223982565LLU;
	volatile int16_t x344 = INT16_MIN;
	volatile uint32_t t80 = 1342739U;

	t80 = (x341+((x342%x343)<=x344));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x347 = -1;
	int16_t x348 = 10;
	volatile int32_t t81 = -8860297;

	t81 = (x345+((x346%x347)<=x348));

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = -1123928701313LL;
	int8_t x350 = 10;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MIN;
	int64_t t82 = 5621LL;

	t82 = (x349+((x350%x351)<=x352));

	if (t82 != -1123928701312LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MIN;
	volatile uint16_t x354 = 188U;
	volatile int32_t x355 = -107;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x353+((x354%x355)<=x356));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = -1;
	int32_t t84 = 10760;

	t84 = (x357+((x358%x359)<=x360));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MIN;
	volatile int8_t x362 = INT8_MAX;
	int16_t x363 = -4;
	int64_t x364 = 194213864409379LL;

	t85 = (x361+((x362%x363)<=x364));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x365 = 1800LLU;
	int32_t x366 = -1;
	volatile uint64_t x367 = 182074450LLU;
	int8_t x368 = -1;

	t86 = (x365+((x366%x367)<=x368));

	if (t86 != 1801LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = -1;
	uint8_t x372 = UINT8_MAX;

	t87 = (x369+((x370%x371)<=x372));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = INT8_MIN;
	uint32_t x375 = 1895U;
	volatile uint64_t x376 = 5531392799LLU;
	volatile int32_t t88 = 2708663;

	t88 = (x373+((x374%x375)<=x376));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = -10;
	int16_t x378 = INT16_MIN;
	volatile int16_t x379 = 622;
	int64_t x380 = INT64_MIN;
	volatile int32_t t89 = -44;

	t89 = (x377+((x378%x379)<=x380));

	if (t89 != -10) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x382 = 202745848U;
	int32_t t90 = -990987777;

	t90 = (x381+((x382%x383)<=x384));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x385 = -1LL;
	uint32_t x386 = 1406341U;
	static uint64_t x387 = UINT64_MAX;
	uint32_t x388 = 1902917952U;
	static volatile int64_t t91 = 64929997426103LL;

	t91 = (x385+((x386%x387)<=x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x389 = 24U;
	int16_t x391 = -1;
	int32_t x392 = 57;

	t92 = (x389+((x390%x391)<=x392));

	if (t92 != 25) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x394 = -1LL;
	int8_t x395 = INT8_MAX;
	static int32_t x396 = 23181190;
	int32_t t93 = -35604;

	t93 = (x393+((x394%x395)<=x396));

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = 10U;
	int64_t x399 = -1LL;
	int32_t x400 = INT32_MIN;
	volatile int32_t t94 = -43484174;

	t94 = (x397+((x398%x399)<=x400));

	if (t94 != 10) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = -39;
	volatile int16_t x403 = INT16_MIN;
	uint16_t x404 = 68U;
	static int32_t t95 = -65072;

	t95 = (x401+((x402%x403)<=x404));

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 21;
	int64_t x407 = INT64_MIN;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t96 = -970862012;

	t96 = (x405+((x406%x407)<=x408));

	if (t96 != 22) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = -6990469462026LL;
	int8_t x410 = 0;
	static uint64_t x411 = UINT64_MAX;
	volatile int16_t x412 = -7755;
	volatile int64_t t97 = 1899157427929LL;

	t97 = (x409+((x410%x411)<=x412));

	if (t97 != -6990469462025LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MAX;
	static int16_t x415 = -1;
	uint16_t x416 = 746U;
	static volatile int64_t t98 = 285385451730LL;

	t98 = (x413+((x414%x415)<=x416));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -3494;
	uint8_t x422 = 114U;
	int32_t x423 = -1;
	static int64_t x424 = 992046086534328445LL;
	static int32_t t99 = -2048414;

	t99 = (x421+((x422%x423)<=x424));

	if (t99 != -3493) { NG(); } else { ; }
	
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

