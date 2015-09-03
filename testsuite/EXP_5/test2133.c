#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 58555364196LLU;
int32_t t0 = -538353525;
int32_t x5 = -1;
static volatile int32_t t1 = 5568;
volatile uint64_t x12 = 948991151705879LLU;
int32_t x15 = INT32_MIN;
volatile int32_t t3 = 112;
uint16_t x23 = 1U;
int32_t x24 = -1;
uint32_t x26 = UINT32_MAX;
volatile int16_t x32 = 3;
uint8_t x34 = 26U;
uint32_t x37 = 178196U;
uint32_t t9 = 182894U;
uint64_t x42 = 29440557461907211LLU;
static int32_t t11 = -365965003;
static int32_t x50 = -1;
int32_t t15 = 54;
static int64_t x76 = INT64_MIN;
volatile uint8_t x81 = UINT8_MAX;
int8_t x87 = INT8_MIN;
volatile uint32_t t20 = 11151474U;
volatile int64_t t21 = -29357889146358838LL;
uint16_t x102 = UINT16_MAX;
volatile int32_t t26 = -201;
static int16_t x118 = INT16_MAX;
uint64_t x122 = 98LLU;
uint64_t x137 = UINT64_MAX;
uint32_t x141 = 722065U;
int64_t x142 = INT64_MAX;
volatile int16_t x149 = INT16_MIN;
volatile int32_t t36 = 911;
static int16_t x156 = INT16_MAX;
int8_t x163 = INT8_MIN;
uint8_t x167 = UINT8_MAX;
volatile int32_t x172 = INT32_MAX;
int32_t x174 = INT32_MIN;
int16_t x187 = 51;
volatile int32_t t46 = INT32_MIN;
volatile uint64_t x207 = 146991227537030245LLU;
int32_t x210 = INT32_MIN;
int64_t x216 = INT64_MAX;
volatile int8_t x223 = INT8_MAX;
volatile int32_t x224 = 32;
int16_t x227 = 122;
static int16_t x233 = INT16_MAX;
uint16_t x243 = 57U;
int32_t t59 = -1046125;
uint16_t x249 = 32764U;
int64_t t62 = 2191803516034531LL;
volatile int64_t x262 = INT64_MAX;
uint8_t x263 = 3U;
uint8_t x267 = 0U;
uint32_t x268 = 12918592U;
int8_t x269 = INT8_MIN;
volatile int16_t x272 = -27;
static volatile int8_t x273 = INT8_MIN;
volatile int32_t x276 = INT32_MIN;
volatile uint64_t x279 = 16071163779216LLU;
uint8_t x286 = UINT8_MAX;
int8_t x295 = -8;
int32_t t71 = 211496792;
static uint64_t x300 = UINT64_MAX;
uint16_t x308 = 5U;
volatile uint32_t x309 = UINT32_MAX;
int64_t x310 = INT64_MAX;
int8_t x325 = -1;
volatile int32_t t79 = -83042719;
int32_t x332 = INT32_MAX;
volatile int8_t x334 = 15;
volatile int32_t t81 = -1;
int8_t x341 = -1;
int16_t x344 = INT16_MIN;
volatile int32_t t83 = -957;
int8_t x345 = 0;
volatile uint64_t t85 = 517656531445792108LLU;
uint32_t x356 = 106247U;
static volatile int32_t t87 = -20043217;
int16_t x370 = INT16_MIN;
volatile int8_t x376 = -1;
int8_t x382 = -1;
uint8_t x383 = 0U;
volatile int64_t x390 = 98569LL;
int8_t x391 = INT8_MAX;
int16_t x392 = INT16_MIN;
uint64_t x401 = 263LLU;
uint32_t x406 = UINT32_MAX;
uint64_t x407 = 0LLU;


void f0(void) {
	int8_t x1 = -1;
	static volatile int8_t x3 = -1;
	uint8_t x4 = 2U;

	t0 = (x1+((x2^x3)<x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = 0;
	static volatile int16_t x7 = -1;
	volatile int64_t x8 = -1LL;

	t1 = (x5+((x6^x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint32_t x10 = 97006030U;
	static volatile int16_t x11 = INT16_MIN;
	int32_t t2 = -443024777;

	t2 = (x9+((x10^x11)<x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -181;
	int8_t x14 = INT8_MIN;
	static int64_t x16 = INT64_MAX;

	t3 = (x13+((x14^x15)<x16));

	if (t3 != -180) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 40U;
	int64_t x18 = -1LL;
	uint32_t x19 = 9007710U;
	int16_t x20 = 1;
	int32_t t4 = 1092933;

	t4 = (x17+((x18^x19)<x20));

	if (t4 != 41) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	volatile int32_t t5 = -140;

	t5 = (x21+((x22^x23)<x24));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 21U;
	volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 3137U;

	t6 = (x25+((x26^x27)<x28));

	if (t6 != 22U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -19;
	uint32_t x30 = 0U;
	uint16_t x31 = 136U;
	static int32_t t7 = -45758;

	t7 = (x29+((x30^x31)<x32));

	if (t7 != -19) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint16_t x35 = UINT16_MAX;
	uint16_t x36 = 4570U;
	volatile int32_t t8 = -1;

	t8 = (x33+((x34^x35)<x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = UINT16_MAX;

	t9 = (x37+((x38^x39)<x40));

	if (t9 != 178196U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -5680;

	t10 = (x41+((x42^x43)<x44));

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = INT32_MAX;
	int32_t x47 = -1;
	uint32_t x48 = 8U;

	t11 = (x45+((x46^x47)<x48));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 25U;
	int64_t x51 = -11676469230LL;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -64;

	t12 = (x49+((x50^x51)<x52));

	if (t12 != 25) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	uint16_t x54 = UINT16_MAX;
	volatile int16_t x55 = 11;
	int64_t x56 = -1LL;
	int32_t t13 = 3;

	t13 = (x53+((x54^x55)<x56));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = 493800LLU;
	int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (x57+((x58^x59)<x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 12U;
	int64_t x62 = -849737967568641163LL;
	int64_t x63 = INT64_MAX;
	int32_t x64 = 388092;

	t15 = (x61+((x62^x63)<x64));

	if (t15 != 13) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 5U;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 249690540691284452LLU;
	int32_t t16 = -18971;

	t16 = (x65+((x66^x67)<x68));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = UINT16_MAX;
	uint64_t x74 = 136021535512002LLU;
	static uint16_t x75 = 16529U;
	volatile int32_t t17 = -266;

	t17 = (x73+((x74^x75)<x76));

	if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x77 = INT8_MAX;
	static uint32_t x78 = UINT32_MAX;
	volatile int64_t x79 = INT64_MIN;
	volatile uint64_t x80 = 4428454532303317660LLU;
	int32_t t18 = -17;

	t18 = (x77+((x78^x79)<x80));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = -59719;
	volatile int64_t x83 = -1LL;
	int16_t x84 = 0;
	volatile int32_t t19 = 119;

	t19 = (x81+((x82^x83)<x84));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 500U;
	volatile int16_t x86 = INT16_MAX;
	volatile uint64_t x88 = 0LLU;

	t20 = (x85+((x86^x87)<x88));

	if (t20 != 500U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 31877917754199LL;
	uint16_t x90 = 1U;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = -1;

	t21 = (x89+((x90^x91)<x92));

	if (t21 != 31877917754200LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	volatile uint16_t x94 = 113U;
	uint16_t x95 = UINT16_MAX;
	int64_t x96 = -452555866706861613LL;
	static volatile int32_t t22 = 2367465;

	t22 = (x93+((x94^x95)<x96));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 12U;
	uint8_t x99 = UINT8_MAX;
	uint8_t x100 = 29U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x97+((x98^x99)<x100));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int32_t x103 = -1;
	static int8_t x104 = INT8_MIN;
	uint64_t t24 = 118070794401058LLU;

	t24 = (x101+((x102^x103)<x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 63U;
	int64_t x106 = 583790740213557LL;
	static uint8_t x107 = 0U;
	uint64_t x108 = 9277LLU;
	uint32_t t25 = 621953U;

	t25 = (x105+((x106^x107)<x108));

	if (t25 != 63U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int64_t x110 = 1292816982454LL;
	static int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;

	t26 = (x109+((x110^x111)<x112));

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = 20LL;
	int64_t x115 = -2712397362377831048LL;
	uint16_t x116 = 224U;
	int32_t t27 = -1;

	t27 = (x113+((x114^x115)<x116));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = INT64_MIN;
	volatile uint8_t x119 = 31U;
	int64_t x120 = -1LL;
	static int64_t t28 = INT64_MIN;

	t28 = (x117+((x118^x119)<x120));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t29 = 1;

	t29 = (x121+((x122^x123)<x124));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MIN;
	volatile int16_t x127 = -1343;
	static volatile int32_t x128 = INT32_MAX;
	static volatile int32_t t30 = 418668;

	t30 = (x125+((x126^x127)<x128));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	static volatile int64_t x130 = INT64_MIN;
	static int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t31 = -7537220;

	t31 = (x129+((x130^x131)<x132));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 56U;
	int8_t x134 = INT8_MAX;
	int32_t x135 = 104870;
	int16_t x136 = INT16_MIN;
	volatile int32_t t32 = -107030597;

	t32 = (x133+((x134^x135)<x136));

	if (t32 != 56) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x138 = INT64_MIN;
	uint16_t x139 = 423U;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t33 = 17456662617141LLU;

	t33 = (x137+((x138^x139)<x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x143 = INT16_MIN;
	volatile uint16_t x144 = 471U;
	uint32_t t34 = 1U;

	t34 = (x141+((x142^x143)<x144));

	if (t34 != 722066U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = 12;
	int16_t x146 = INT16_MAX;
	uint32_t x147 = 265869036U;
	int64_t x148 = INT64_MIN;
	int32_t t35 = -1031291070;

	t35 = (x145+((x146^x147)<x148));

	if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = -1;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = 2U;

	t36 = (x149+((x150^x151)<x152));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MAX;
	static uint64_t x154 = 2543302LLU;
	int8_t x155 = -1;
	volatile int32_t t37 = -239;

	t37 = (x153+((x154^x155)<x156));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 7U;
	volatile uint32_t x158 = UINT32_MAX;
	uint16_t x159 = 1349U;
	int32_t x160 = 17513417;
	uint32_t t38 = 5893499U;

	t38 = (x157+((x158^x159)<x160));

	if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = -4201904367597211752LL;
	static uint32_t x162 = 110009U;
	int8_t x164 = -1;
	int64_t t39 = -38LL;

	t39 = (x161+((x162^x163)<x164));

	if (t39 != -4201904367597211751LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x165 = 464853U;
	int8_t x166 = INT8_MIN;
	static int8_t x168 = 21;
	volatile uint32_t t40 = 449248U;

	t40 = (x165+((x166^x167)<x168));

	if (t40 != 464854U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MAX;
	uint64_t x171 = 0LLU;
	volatile int32_t t41 = 14;

	t41 = (x169+((x170^x171)<x172));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = INT64_MIN;
	volatile uint16_t x175 = 10279U;
	volatile uint8_t x176 = 1U;
	static int64_t t42 = 3282629889626705820LL;

	t42 = (x173+((x174^x175)<x176));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 1627954LLU;
	int16_t x178 = -13334;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = -33075359;
	uint64_t t43 = 21518651556296133LLU;

	t43 = (x177+((x178^x179)<x180));

	if (t43 != 1627954LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x181 = 0U;
	int8_t x182 = 0;
	static int32_t x183 = INT32_MIN;
	int32_t x184 = -1;
	volatile int32_t t44 = -227;

	t44 = (x181+((x182^x183)<x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = INT64_MIN;
	volatile int8_t x186 = INT8_MIN;
	volatile uint32_t x188 = 29167081U;
	int64_t t45 = INT64_MIN;

	t45 = (x185+((x186^x187)<x188));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = UINT16_MAX;
	static uint16_t x191 = 1895U;
	int32_t x192 = -822107;

	t46 = (x189+((x190^x191)<x192));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 15U;
	uint64_t x195 = 618LLU;
	volatile int32_t x196 = -1905796;
	int32_t t47 = 5;

	t47 = (x193+((x194^x195)<x196));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = -1;
	int64_t x199 = -24736LL;
	int8_t x200 = INT8_MIN;
	volatile int32_t t48 = 66281325;

	t48 = (x197+((x198^x199)<x200));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	int16_t x202 = 66;
	volatile int16_t x203 = INT16_MIN;
	uint8_t x204 = 70U;
	static volatile int32_t t49 = 1009;

	t49 = (x201+((x202^x203)<x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = INT64_MIN;
	int16_t x206 = -3;
	uint8_t x208 = 7U;
	static int64_t t50 = INT64_MIN;

	t50 = (x205+((x206^x207)<x208));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -8010;
	uint8_t x211 = 118U;
	static int8_t x212 = INT8_MAX;
	static int32_t t51 = -803812403;

	t51 = (x209+((x210^x211)<x212));

	if (t51 != -8009) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = 3;
	static int8_t x214 = INT8_MAX;
	uint8_t x215 = 1U;
	int32_t t52 = 102792;

	t52 = (x213+((x214^x215)<x216));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 12U;
	int32_t x219 = INT32_MAX;
	volatile int32_t x220 = 37245646;
	int32_t t53 = INT32_MIN;

	t53 = (x217+((x218^x219)<x220));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 6337U;
	volatile int16_t x222 = INT16_MIN;
	static volatile int32_t t54 = -224;

	t54 = (x221+((x222^x223)<x224));

	if (t54 != 6338) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 4617;
	volatile uint32_t x226 = UINT32_MAX;
	volatile int16_t x228 = 7190;
	int32_t t55 = -7731165;

	t55 = (x225+((x226^x227)<x228));

	if (t55 != 4617) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x234 = INT32_MIN;
	static int16_t x235 = 98;
	int8_t x236 = INT8_MAX;
	int32_t t56 = 2725;

	t56 = (x233+((x234^x235)<x236));

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 12;
	int64_t x238 = -1LL;
	volatile uint32_t x239 = 51948U;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -3919;

	t57 = (x237+((x238^x239)<x240));

	if (t57 != 13) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 54061305LLU;
	uint8_t x242 = UINT8_MAX;
	volatile int8_t x244 = INT8_MAX;
	static volatile uint64_t t58 = 100059011494LLU;

	t58 = (x241+((x242^x243)<x244));

	if (t58 != 54061305LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x246 = 0U;
	volatile int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MAX;

	t59 = (x245+((x246^x247)<x248));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x250 = 1;
	int64_t x251 = INT64_MIN;
	uint8_t x252 = 24U;
	int32_t t60 = -1;

	t60 = (x249+((x250^x251)<x252));

	if (t60 != 32765) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 841930U;
	static int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	uint8_t x256 = 127U;
	static uint32_t t61 = 7933U;

	t61 = (x253+((x254^x255)<x256));

	if (t61 != 841930U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	volatile int16_t x260 = INT16_MIN;

	t62 = (x257+((x258^x259)<x260));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x264 = -1;
	uint32_t t63 = UINT32_MAX;

	t63 = (x261+((x262^x263)<x264));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x265 = -269108;
	int32_t x266 = INT32_MIN;
	volatile int32_t t64 = 3682718;

	t64 = (x265+((x266^x267)<x268));

	if (t64 != -269108) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = -2;
	uint32_t x271 = 77789U;
	int32_t t65 = -84;

	t65 = (x269+((x270^x271)<x272));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = 18;
	uint32_t x275 = 7336U;
	volatile int32_t t66 = -1;

	t66 = (x273+((x274^x275)<x276));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = -1;
	uint64_t x278 = 441LLU;
	int32_t x280 = INT32_MAX;
	volatile int32_t t67 = 531240595;

	t67 = (x277+((x278^x279)<x280));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MIN;
	int32_t x283 = -1;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t68 = 1;

	t68 = (x281+((x282^x283)<x284));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x285 = 6607365325937708LLU;
	int16_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t69 = 5552421498966963LLU;

	t69 = (x285+((x286^x287)<x288));

	if (t69 != 6607365325937709LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x289 = 5982910665462170LLU;
	int32_t x290 = -1;
	uint8_t x291 = 0U;
	uint8_t x292 = UINT8_MAX;
	volatile uint64_t t70 = 5731716238221040LLU;

	t70 = (x289+((x290^x291)<x292));

	if (t70 != 5982910665462171LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x294 = 274;
	static int32_t x296 = INT32_MAX;

	t71 = (x293+((x294^x295)<x296));

	if (t71 != 65536) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x297 = UINT16_MAX;
	static int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	static volatile int32_t t72 = 1;

	t72 = (x297+((x298^x299)<x300));

	if (t72 != 65536) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x301 = 194U;
	int8_t x302 = INT8_MIN;
	int32_t x303 = -486260011;
	int8_t x304 = INT8_MAX;
	volatile int32_t t73 = -913638487;

	t73 = (x301+((x302^x303)<x304));

	if (t73 != 194) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MAX;
	uint16_t x306 = 0U;
	int16_t x307 = INT16_MAX;
	volatile int32_t t74 = -208252571;

	t74 = (x305+((x306^x307)<x308));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x311 = INT64_MAX;
	int8_t x312 = -1;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x309+((x310^x311)<x312));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 1209210LLU;
	int16_t x314 = INT16_MAX;
	volatile int32_t x315 = INT32_MIN;
	int8_t x316 = 8;
	volatile uint64_t t76 = 45643196362276445LLU;

	t76 = (x313+((x314^x315)<x316));

	if (t76 != 1209211LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -5320821036635LL;
	int32_t x318 = -1;
	volatile int32_t x319 = 3;
	volatile int16_t x320 = INT16_MIN;
	volatile int64_t t77 = -831073899415554LL;

	t77 = (x317+((x318^x319)<x320));

	if (t77 != -5320821036635LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = -881852556339067LL;
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = 50U;
	volatile int64_t t78 = 124255576LL;

	t78 = (x321+((x322^x323)<x324));

	if (t78 != -881852556339067LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x326 = INT64_MAX;
	static int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MIN;

	t79 = (x325+((x326^x327)<x328));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x329 = INT16_MAX;
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	volatile int32_t t80 = 15940;

	t80 = (x329+((x330^x331)<x332));

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x333 = 7U;
	int8_t x335 = 1;
	uint8_t x336 = 4U;

	t81 = (x333+((x334^x335)<x336));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 3711548248LLU;
	static uint16_t x338 = 764U;
	static int32_t x339 = INT32_MAX;
	int64_t x340 = INT64_MAX;
	volatile uint64_t t82 = 710LLU;

	t82 = (x337+((x338^x339)<x340));

	if (t82 != 3711548249LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x342 = INT32_MIN;
	volatile int8_t x343 = -1;

	t83 = (x341+((x342^x343)<x344));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x346 = 237096U;
	uint32_t x347 = 13U;
	static uint32_t x348 = 320095U;
	volatile int32_t t84 = -3018;

	t84 = (x345+((x346^x347)<x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x349 = UINT64_MAX;
	static uint16_t x350 = UINT16_MAX;
	static int32_t x351 = -1;
	int8_t x352 = 6;

	t85 = (x349+((x350^x351)<x352));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 52U;
	uint32_t x354 = 5645647U;
	int64_t x355 = -1LL;
	static volatile int32_t t86 = 746927616;

	t86 = (x353+((x354^x355)<x356));

	if (t86 != 53) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 37U;
	int64_t x358 = -359418343LL;
	int32_t x359 = INT32_MAX;
	uint16_t x360 = 72U;

	t87 = (x357+((x358^x359)<x360));

	if (t87 != 38) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = 60;
	int64_t x362 = INT64_MIN;
	static uint64_t x363 = 7585780280171548723LLU;
	uint64_t x364 = UINT64_MAX;
	int32_t t88 = 249602013;

	t88 = (x361+((x362^x363)<x364));

	if (t88 != 61) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = 0;
	int8_t x366 = -2;
	int64_t x367 = INT64_MIN;
	int16_t x368 = 1201;
	int32_t t89 = -284784465;

	t89 = (x365+((x366^x367)<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x369 = INT8_MIN;
	uint32_t x371 = 432360U;
	int64_t x372 = INT64_MIN;
	volatile int32_t t90 = -18120323;

	t90 = (x369+((x370^x371)<x372));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = 281079171081610727LL;
	int16_t x374 = INT16_MIN;
	int32_t x375 = 0;
	int64_t t91 = -63136LL;

	t91 = (x373+((x374^x375)<x376));

	if (t91 != 281079171081610728LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MIN;
	volatile int8_t x378 = INT8_MAX;
	uint64_t x379 = 61143946036LLU;
	static int32_t x380 = INT32_MAX;
	volatile int64_t t92 = INT64_MIN;

	t92 = (x377+((x378^x379)<x380));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t93 = -32605;

	t93 = (x381+((x382^x383)<x384));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = -2434251378913827LL;
	static uint16_t x386 = 665U;
	volatile int16_t x387 = INT16_MAX;
	int16_t x388 = -1;
	volatile int64_t t94 = 64171LL;

	t94 = (x385+((x386^x387)<x388));

	if (t94 != -2434251378913827LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = 990U;
	volatile int32_t t95 = 220366638;

	t95 = (x389+((x390^x391)<x392));

	if (t95 != 990) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x393 = -1;
	static int32_t x394 = -39;
	int64_t x395 = 0LL;
	int64_t x396 = INT64_MAX;
	volatile int32_t t96 = -21531306;

	t96 = (x393+((x394^x395)<x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 137677438U;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = 654LLU;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (x397+((x398^x399)<x400));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x402 = UINT16_MAX;
	uint32_t x403 = 1339686993U;
	int16_t x404 = INT16_MIN;
	uint64_t t98 = 446LLU;

	t98 = (x401+((x402^x403)<x404));

	if (t98 != 264LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = UINT8_MAX;
	int16_t x408 = -24;
	volatile int32_t t99 = -223258425;

	t99 = (x405+((x406^x407)<x408));

	if (t99 != 256) { NG(); } else { ; }
	
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

