#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint32_t x11 = UINT32_MAX;
int32_t x12 = 177856;
uint32_t x23 = 31370589U;
int8_t x34 = 0;
static int16_t x35 = -1;
uint16_t x46 = UINT16_MAX;
uint32_t x53 = 21U;
int16_t x62 = 0;
int8_t x64 = INT8_MAX;
volatile int64_t x65 = -1726598559602037149LL;
int16_t x66 = 814;
int64_t t12 = 1307844815LL;
int64_t x76 = -1LL;
static int64_t x83 = -74063987LL;
int8_t x94 = -7;
volatile int32_t t18 = -45915;
int64_t x101 = INT64_MAX;
static volatile uint64_t x109 = 32566137691LLU;
int16_t x111 = 45;
uint64_t t20 = 693451663LLU;
uint32_t x114 = 1437621U;
int64_t t21 = 57LL;
volatile int8_t x120 = -1;
static volatile uint64_t t22 = 61764LLU;
int8_t x122 = -1;
int64_t x126 = INT64_MIN;
int32_t x128 = -1;
volatile int64_t t24 = 6532LL;
int64_t x129 = INT64_MIN;
static int8_t x131 = -1;
uint8_t x134 = UINT8_MAX;
uint32_t t26 = 394260U;
volatile int16_t x137 = 1541;
static int8_t x142 = INT8_MIN;
static volatile int64_t x146 = -1LL;
uint32_t x150 = 10981795U;
int32_t x152 = INT32_MIN;
volatile int32_t t31 = 0;
int64_t t33 = 125423364783LL;
static uint64_t x180 = 1160250411880LLU;
volatile int16_t x181 = INT16_MIN;
volatile int32_t t39 = -222698416;
static uint64_t t40 = 1195321920LLU;
volatile uint64_t x203 = 3706091241919LLU;
static volatile int8_t x204 = 6;
int32_t x207 = -112;
int32_t t42 = 2;
int64_t x210 = -1LL;
uint16_t x219 = 4493U;
int16_t x224 = INT16_MIN;
uint8_t x227 = 3U;
int64_t t48 = 133338055LL;
static volatile int16_t x238 = INT16_MIN;
uint8_t x240 = UINT8_MAX;
uint64_t t49 = 0LLU;
uint64_t x241 = UINT64_MAX;
uint64_t t50 = 6LLU;
int32_t x247 = -950;
uint64_t x249 = 12876967LLU;
int16_t x258 = -1;
int32_t x259 = 10;
int64_t t53 = -34356810997197507LL;
volatile uint64_t t54 = 15056566007359928LLU;
int64_t x270 = -12713LL;
uint32_t x271 = UINT32_MAX;
static int16_t x273 = 12517;
static volatile uint64_t t57 = 260505LLU;
volatile int8_t x283 = -8;
static uint8_t x284 = 12U;
int16_t x285 = -1;
uint32_t x288 = UINT32_MAX;
uint32_t t59 = 2131627U;
int8_t x291 = -1;
volatile int64_t x295 = 98046LL;
int32_t x296 = INT32_MIN;
static int32_t x306 = INT32_MIN;
int32_t x307 = -1;
uint64_t t66 = 666580533857989970LLU;
static uint64_t t67 = 487265256LLU;
uint32_t x333 = 7028037U;
uint16_t x336 = UINT16_MAX;
int64_t x342 = -1LL;
static int32_t x344 = INT32_MIN;
int64_t t69 = 51877769LL;
volatile uint16_t x347 = 3491U;
int16_t x350 = -45;
volatile int16_t x356 = -4;
static uint16_t x358 = UINT16_MAX;
volatile uint32_t t74 = 263U;
volatile int8_t x376 = INT8_MIN;
int8_t x383 = INT8_MAX;
int64_t x400 = INT64_MIN;
uint32_t x408 = UINT32_MAX;
uint32_t x417 = 967902U;
volatile int64_t t83 = 1LL;
static uint8_t x421 = 55U;
volatile int32_t x438 = -6;
volatile uint16_t x453 = 3205U;
uint32_t x454 = 10603U;
int32_t x456 = -1;
static volatile uint32_t t89 = 216438U;
int8_t x468 = INT8_MIN;
int16_t x471 = INT16_MIN;
static volatile int32_t t93 = 154;
int8_t x477 = INT8_MAX;
uint8_t x478 = 1U;
int64_t x480 = -19993LL;
static volatile uint8_t x489 = 25U;
volatile uint64_t t97 = 304LLU;
uint64_t x493 = UINT64_MAX;


void f0(void) {
	volatile uint32_t x2 = 14U;
	int8_t x3 = INT8_MIN;
	volatile int32_t x4 = INT32_MIN;
	uint32_t t0 = 44U;

	t0 = (((x1+x2)%x3)-x4);

	if (t0 != 2147549197U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -1;
	static uint64_t x10 = 9579LLU;
	volatile uint64_t t1 = 16682151LLU;

	t1 = (((x9+x10)%x11)-x12);

	if (t1 != 18446744073709383338LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	static volatile int32_t x14 = -1;
	volatile uint16_t x15 = 70U;
	uint16_t x16 = UINT16_MAX;
	int32_t t2 = -254;

	t2 = (((x13+x14)%x15)-x16);

	if (t2 != -65594) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = -1LL;
	volatile int64_t x19 = INT64_MIN;
	static int16_t x20 = INT16_MAX;
	volatile int64_t t3 = 1414452793LL;

	t3 = (((x17+x18)%x19)-x20);

	if (t3 != -65536LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = 3U;
	uint32_t x22 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	uint32_t t4 = 233237536U;

	t4 = (((x21+x22)%x23)-x24);

	if (t4 != 32770U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = INT8_MAX;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t5 = 58LLU;

	t5 = (((x29+x30)%x31)-x32);

	if (t5 != 128LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	volatile int32_t x36 = -1;
	int32_t t6 = 871214;

	t6 = (((x33+x34)%x35)-x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 0U;
	int16_t x42 = INT16_MIN;
	volatile int32_t x43 = INT32_MIN;
	uint8_t x44 = 2U;
	int32_t t7 = 1;

	t7 = (((x41+x42)%x43)-x44);

	if (t7 != -32770) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	uint32_t x47 = UINT32_MAX;
	static uint16_t x48 = 3110U;
	volatile uint32_t t8 = 47866U;

	t8 = (((x45+x46)%x47)-x48);

	if (t8 != 62424U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x54 = 24628U;
	int64_t x55 = -50376164986309144LL;
	int16_t x56 = 149;
	volatile int64_t t9 = 962261987252617676LL;

	t9 = (((x53+x54)%x55)-x56);

	if (t9 != 24500LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = 16900396777582LLU;
	int16_t x58 = 3367;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 28;
	uint64_t t10 = 8LLU;

	t10 = (((x57+x58)%x59)-x60);

	if (t10 != 16900396780921LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x61 = 1143158340638154LLU;
	uint16_t x63 = 2U;
	static volatile uint64_t t11 = 87940385081LLU;

	t11 = (((x61+x62)%x63)-x64);

	if (t11 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x67 = INT64_MAX;
	static uint16_t x68 = UINT16_MAX;

	t12 = (((x65+x66)%x67)-x68);

	if (t12 != -1726598559602101870LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = 707;
	static volatile int8_t x74 = 11;
	int8_t x75 = INT8_MIN;
	volatile int64_t t13 = -954063LL;

	t13 = (((x73+x74)%x75)-x76);

	if (t13 != 79LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = INT16_MIN;
	static uint16_t x78 = 909U;
	static uint64_t x79 = 134609067676059LLU;
	uint32_t x80 = 12963U;
	volatile uint64_t t14 = 4189040542644885799LLU;

	t14 = (((x77+x78)%x79)-x80);

	if (t14 != 52048450057493LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = 3U;
	int32_t x82 = -1;
	volatile int32_t x84 = INT32_MAX;
	static volatile int64_t t15 = 5769895LL;

	t15 = (((x81+x82)%x83)-x84);

	if (t15 != -2147483645LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -427035;
	int8_t x90 = INT8_MIN;
	volatile int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t16 = -1943681;

	t16 = (((x89+x90)%x91)-x92);

	if (t16 != -394395) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = 62;
	volatile uint32_t x95 = 37U;
	static int32_t x96 = 116116;
	uint32_t t17 = 56224742U;

	t17 = (((x93+x94)%x95)-x96);

	if (t17 != 4294851198U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = INT16_MIN;
	volatile int8_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;

	t18 = (((x97+x98)%x99)-x100);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x102 = -1;
	uint8_t x103 = 4U;
	static uint8_t x104 = 0U;
	int64_t t19 = -997LL;

	t19 = (((x101+x102)%x103)-x104);

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x110 = 0U;
	int64_t x112 = 35474326263675986LL;

	t20 = (((x109+x110)%x111)-x112);

	if (t20 != 18411269747445875661LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = -20292642861303LL;

	t21 = (((x113+x114)%x115)-x116);

	if (t21 != 20292642861361LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t x118 = UINT64_MAX;
	static uint64_t x119 = 473041508537LLU;

	t22 = (((x117+x118)%x119)-x120);

	if (t22 != 377306392283LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t23 = -29443;

	t23 = (((x121+x122)%x123)-x124);

	if (t23 != 126) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MAX;
	int8_t x127 = INT8_MIN;

	t24 = (((x125+x126)%x127)-x128);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x130 = 20379699LLU;
	uint32_t x132 = UINT32_MAX;
	volatile uint64_t t25 = 7289LLU;

	t25 = (((x129+x130)%x131)-x132);

	if (t25 != 9223372032580188212LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x133 = 38535U;
	int8_t x135 = -1;
	static int16_t x136 = INT16_MAX;

	t26 = (((x133+x134)%x135)-x136);

	if (t26 != 6023U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x138 = 97U;
	uint16_t x139 = 14292U;
	int64_t x140 = -5840200LL;
	int64_t t27 = -175543328143583194LL;

	t27 = (((x137+x138)%x139)-x140);

	if (t27 != 5841838LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = 36573885LLU;
	volatile int64_t x143 = -1LL;
	volatile int64_t x144 = INT64_MAX;
	static uint64_t t28 = 489962LLU;

	t28 = (((x141+x142)%x143)-x144);

	if (t28 != 9223372036891349566LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 32U;
	uint8_t x147 = 1U;
	uint8_t x148 = 3U;
	volatile int64_t t29 = -161495486630379LL;

	t29 = (((x145+x146)%x147)-x148);

	if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	static int8_t x151 = INT8_MAX;
	volatile uint64_t t30 = 1679742346LLU;

	t30 = (((x149+x150)%x151)-x152);

	if (t30 != 2147483752LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = -1;
	volatile uint16_t x155 = UINT16_MAX;
	uint16_t x156 = 330U;

	t31 = (((x153+x154)%x155)-x156);

	if (t31 != -33099) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x157 = 8019U;
	volatile int64_t x158 = -1LL;
	uint32_t x159 = 94833820U;
	static int8_t x160 = -3;
	volatile int64_t t32 = 136026LL;

	t32 = (((x157+x158)%x159)-x160);

	if (t32 != 8021LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = 987644;
	volatile int16_t x163 = -1;
	int64_t x164 = -3973063333371264LL;

	t33 = (((x161+x162)%x163)-x164);

	if (t33 != 3973063333371264LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -1LL;
	int32_t x166 = 3;
	volatile int16_t x167 = 29;
	int64_t x168 = -896486LL;
	int64_t t34 = 3690LL;

	t34 = (((x165+x166)%x167)-x168);

	if (t34 != 896488LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = -1;
	int16_t x174 = INT16_MIN;
	volatile int64_t x175 = -101404964LL;
	static int32_t x176 = 15;
	volatile int64_t t35 = 30055414249LL;

	t35 = (((x173+x174)%x175)-x176);

	if (t35 != -32784LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -11;
	static uint32_t x179 = 3302U;
	uint64_t t36 = 1LLU;

	t36 = (((x177+x178)%x179)-x180);

	if (t36 != 18446742913459142522LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x182 = -1045;
	volatile uint16_t x183 = UINT16_MAX;
	int16_t x184 = 15584;
	volatile int32_t t37 = 1;

	t37 = (((x181+x182)%x183)-x184);

	if (t37 != -49397) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = INT32_MAX;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -1;
	volatile int32_t t38 = 116569;

	t38 = (((x185+x186)%x187)-x188);

	if (t38 != 2147450880) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = -1;
	static uint8_t x190 = 51U;
	volatile int32_t x191 = -1;
	int32_t x192 = -1;

	t39 = (((x189+x190)%x191)-x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MIN;
	uint8_t x199 = 8U;
	static volatile uint64_t x200 = 41LLU;

	t40 = (((x197+x198)%x199)-x200);

	if (t40 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x201 = INT16_MIN;
	static uint32_t x202 = 761428U;
	uint64_t t41 = 4191396756LLU;

	t41 = (((x201+x202)%x203)-x204);

	if (t41 != 728654LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MIN;
	int8_t x208 = INT8_MIN;

	t42 = (((x205+x206)%x207)-x208);

	if (t42 != 239) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x209 = INT32_MAX;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;
	volatile int64_t t43 = -229162LL;

	t43 = (((x209+x210)%x211)-x212);

	if (t43 != 2147450879LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x217 = 10LLU;
	static int64_t x218 = INT64_MIN;
	volatile int64_t x220 = -1LL;
	static volatile uint64_t t44 = 29113790LLU;

	t44 = (((x217+x218)%x219)-x220);

	if (t44 != 4307LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x221 = 1U;
	uint8_t x222 = UINT8_MAX;
	volatile uint64_t x223 = 1LLU;
	uint64_t t45 = 16568920442343790LLU;

	t45 = (((x221+x222)%x223)-x224);

	if (t45 != 32768LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = 6580214LLU;
	static int32_t x228 = INT32_MIN;
	volatile uint64_t t46 = 95573548294LLU;

	t46 = (((x225+x226)%x227)-x228);

	if (t46 != 2147483648LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x229 = INT64_MIN;
	static int8_t x230 = INT8_MAX;
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	static int64_t t47 = 734097909499161952LL;

	t47 = (((x229+x230)%x231)-x232);

	if (t47 != -32513LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = -261162518471LL;
	int8_t x234 = INT8_MIN;
	static int16_t x235 = -1;
	uint16_t x236 = UINT16_MAX;

	t48 = (((x233+x234)%x235)-x236);

	if (t48 != -65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x237 = 66286137U;
	uint64_t x239 = 1325758193235199649LLU;

	t49 = (((x237+x238)%x239)-x240);

	if (t49 != 66253114LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x242 = 2;
	int16_t x243 = -1;
	int16_t x244 = 8558;

	t50 = (((x241+x242)%x243)-x244);

	if (t50 != 18446744073709543059LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x245 = 82U;
	int8_t x246 = INT8_MAX;
	volatile int8_t x248 = INT8_MAX;
	volatile int32_t t51 = 93;

	t51 = (((x245+x246)%x247)-x248);

	if (t51 != 82) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x250 = 295419LL;
	static int8_t x251 = -1;
	int32_t x252 = INT32_MIN;
	uint64_t t52 = 29LLU;

	t52 = (((x249+x250)%x251)-x252);

	if (t52 != 2160656034LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = -1LL;
	int64_t x260 = INT64_MIN;

	t53 = (((x257+x258)%x259)-x260);

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x261 = 73367246;
	static uint64_t x262 = 2006520554258276LLU;
	static int64_t x263 = -36932834143LL;
	volatile uint8_t x264 = UINT8_MAX;

	t54 = (((x261+x262)%x263)-x264);

	if (t54 != 2006520627625267LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	volatile uint16_t x266 = 299U;
	static volatile uint8_t x267 = 106U;
	int64_t x268 = -548363710500680798LL;
	int64_t t55 = -489675195LL;

	t55 = (((x265+x266)%x267)-x268);

	if (t55 != 548363710500680705LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x269 = INT64_MAX;
	volatile uint32_t x272 = 1477U;
	static volatile int64_t t56 = 324557198436LL;

	t56 = (((x269+x270)%x271)-x272);

	if (t56 != 2147469457LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 21LLU;

	t57 = (((x273+x274)%x275)-x276);

	if (t57 != 79LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	volatile int64_t t58 = 60129858LL;

	t58 = (((x281+x282)%x283)-x284);

	if (t58 != -13LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x286 = UINT8_MAX;
	static int16_t x287 = INT16_MIN;

	t59 = (((x285+x286)%x287)-x288);

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MAX;
	int16_t x290 = -1;
	int16_t x292 = -623;
	int32_t t60 = 8293835;

	t60 = (((x289+x290)%x291)-x292);

	if (t60 != 623) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MAX;
	uint32_t x294 = 110U;
	volatile int64_t t61 = -13644LL;

	t61 = (((x293+x294)%x295)-x296);

	if (t61 != 2147516525LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	uint64_t x302 = 4162207530LLU;
	uint16_t x303 = 7U;
	int16_t x304 = -51;
	static uint64_t t62 = 533053203194LLU;

	t62 = (((x301+x302)%x303)-x304);

	if (t62 != 55LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t63 = -5173;

	t63 = (((x305+x306)%x307)-x308);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = 1U;
	int32_t x311 = -1;
	int8_t x312 = INT8_MIN;
	int32_t t64 = -501383;

	t64 = (((x309+x310)%x311)-x312);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MAX;
	int64_t x318 = -1LL;
	static int32_t x319 = -1;
	volatile int8_t x320 = -1;
	static int64_t t65 = -2037709359998LL;

	t65 = (((x317+x318)%x319)-x320);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x325 = 2614505464711305LLU;
	int16_t x326 = -386;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;

	t66 = (((x325+x326)%x327)-x328);

	if (t66 != 2614505464678152LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = 9095;
	uint64_t x330 = 3520LLU;
	int64_t x331 = -232750784LL;
	static int64_t x332 = 1019670229LL;

	t67 = (((x329+x330)%x331)-x332);

	if (t67 != 18446744072689894002LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x334 = INT32_MAX;
	static uint16_t x335 = 1813U;
	uint32_t t68 = 28504U;

	t68 = (((x333+x334)%x335)-x336);

	if (t68 != 4294902261U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x341 = 1;
	int32_t x343 = -1020349800;

	t69 = (((x341+x342)%x343)-x344);

	if (t69 != 2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x345 = -1;
	static int16_t x346 = 19;
	int16_t x348 = INT16_MIN;
	int32_t t70 = -526662648;

	t70 = (((x345+x346)%x347)-x348);

	if (t70 != 32786) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x349 = -1322328;
	uint64_t x351 = 454405074889476LLU;
	uint16_t x352 = 4126U;
	volatile uint64_t t71 = 21466LLU;

	t71 = (((x349+x350)%x351)-x352);

	if (t71 != 170058569946897LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x353 = -7;
	int16_t x354 = -1;
	int32_t x355 = -12534936;
	static volatile int32_t t72 = -96;

	t72 = (((x353+x354)%x355)-x356);

	if (t72 != -4) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x357 = UINT64_MAX;
	static int32_t x359 = -1;
	static volatile int64_t x360 = -4LL;
	volatile uint64_t t73 = 137564195127701978LLU;

	t73 = (((x357+x358)%x359)-x360);

	if (t73 != 65538LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 43862U;
	int16_t x367 = -1;
	int16_t x368 = -1991;

	t74 = (((x365+x366)%x367)-x368);

	if (t74 != 45725U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x369 = 478;
	static int16_t x370 = 85;
	int64_t x371 = -1LL;
	int32_t x372 = INT32_MIN;
	static volatile int64_t t75 = 396976LL;

	t75 = (((x369+x370)%x371)-x372);

	if (t75 != 2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x373 = 0U;
	int32_t x374 = 1;
	int32_t x375 = INT32_MIN;
	volatile int32_t t76 = -16114;

	t76 = (((x373+x374)%x375)-x376);

	if (t76 != 129) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x377 = UINT32_MAX;
	uint8_t x378 = 1U;
	int32_t x379 = INT32_MAX;
	int8_t x380 = -1;
	volatile uint32_t t77 = 17U;

	t77 = (((x377+x378)%x379)-x380);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = 75608LL;
	int16_t x382 = -1;
	volatile int8_t x384 = INT8_MIN;
	int64_t t78 = 1424905093LL;

	t78 = (((x381+x382)%x383)-x384);

	if (t78 != 170LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x385 = 1469393LLU;
	uint32_t x386 = 9979283U;
	static volatile int16_t x387 = INT16_MAX;
	uint32_t x388 = 230282513U;
	uint64_t t79 = 211305460670LLU;

	t79 = (((x385+x386)%x387)-x388);

	if (t79 != 18446744073479282096LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = INT8_MIN;
	int64_t x395 = 1268900124LL;
	static int16_t x396 = -3221;
	volatile int64_t t80 = 27795LL;

	t80 = (((x393+x394)%x395)-x396);

	if (t80 != 68628LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x397 = -1;
	uint64_t x398 = 26600368930LLU;
	uint16_t x399 = 3802U;
	volatile uint64_t t81 = 183588157LLU;

	t81 = (((x397+x398)%x399)-x400);

	if (t81 != 9223372036854778709LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x405 = 30869U;
	int32_t x406 = INT32_MIN;
	static uint16_t x407 = 235U;
	static uint32_t t82 = 891U;

	t82 = (((x405+x406)%x407)-x408);

	if (t82 != 4294967078U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x418 = 64716U;
	int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MAX;

	t83 = (((x417+x418)%x419)-x420);

	if (t83 != 1032491LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x422 = INT64_MIN;
	volatile int8_t x423 = INT8_MIN;
	static int32_t x424 = INT32_MAX;
	volatile int64_t t84 = -9LL;

	t84 = (((x421+x422)%x423)-x424);

	if (t84 != -2147483720LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x429 = UINT16_MAX;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = UINT64_MAX;
	int64_t x432 = -44146LL;
	uint64_t t85 = 289LLU;

	t85 = (((x429+x430)%x431)-x432);

	if (t85 != 109808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x433 = 0LLU;
	int32_t x434 = INT32_MIN;
	int16_t x435 = -140;
	int32_t x436 = 1;
	volatile uint64_t t86 = 94770LLU;

	t86 = (((x433+x434)%x435)-x436);

	if (t86 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = -3762;
	int64_t x439 = -6LL;
	volatile int8_t x440 = INT8_MIN;
	volatile int64_t t87 = -732265132053687LL;

	t87 = (((x437+x438)%x439)-x440);

	if (t87 != 128LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x449 = INT16_MIN;
	int32_t x450 = -1;
	int32_t x451 = -14;
	uint32_t x452 = 408U;
	volatile uint32_t t88 = 587U;

	t88 = (((x449+x450)%x451)-x452);

	if (t88 != 4294966879U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x455 = -2;

	t89 = (((x453+x454)%x455)-x456);

	if (t89 != 13809U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = INT16_MAX;
	int32_t x458 = -1;
	volatile int32_t x459 = -2415;
	int8_t x460 = INT8_MAX;
	volatile int32_t t90 = -17343;

	t90 = (((x457+x458)%x459)-x460);

	if (t90 != 1244) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = INT16_MIN;
	int64_t x462 = -870LL;
	static int16_t x463 = -152;
	int32_t x464 = INT32_MIN;
	int64_t t91 = 142336242589LL;

	t91 = (((x461+x462)%x463)-x464);

	if (t91 != 2147483602LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x465 = 1987U;
	int8_t x466 = -1;
	uint16_t x467 = 494U;
	volatile int32_t t92 = -1272108;

	t92 = (((x465+x466)%x467)-x468);

	if (t92 != 138) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x469 = UINT16_MAX;
	static int32_t x470 = INT32_MIN;
	int32_t x472 = -1;

	t93 = (((x469+x470)%x471)-x472);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x473 = UINT8_MAX;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	volatile int8_t x476 = INT8_MAX;
	int32_t t94 = -105497828;

	t94 = (((x473+x474)%x475)-x476);

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x479 = INT8_MIN;
	int64_t t95 = -109355761634326638LL;

	t95 = (((x477+x478)%x479)-x480);

	if (t95 != 19993LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x481 = -24;
	uint32_t x482 = 1249U;
	static int32_t x483 = 9955601;
	int16_t x484 = INT16_MIN;
	uint32_t t96 = 380455U;

	t96 = (((x481+x482)%x483)-x484);

	if (t96 != 33993U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x490 = 796055939LLU;
	int8_t x491 = INT8_MIN;
	volatile int16_t x492 = -6414;

	t97 = (((x489+x490)%x491)-x492);

	if (t97 != 796062378LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x494 = INT16_MIN;
	static int16_t x495 = -7689;
	int16_t x496 = 0;
	static volatile uint64_t t98 = 55147LLU;

	t98 = (((x493+x494)%x495)-x496);

	if (t98 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x501 = 2066428LL;
	static int8_t x502 = -1;
	static uint32_t x503 = UINT32_MAX;
	static volatile int32_t x504 = -1;
	volatile int64_t t99 = -85911872LL;

	t99 = (((x501+x502)%x503)-x504);

	if (t99 != 2066428LL) { NG(); } else { ; }
	
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

