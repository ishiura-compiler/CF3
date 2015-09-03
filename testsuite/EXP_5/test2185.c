#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 77118U;
static int64_t x5 = -30571650577991LL;
static int64_t x8 = INT64_MIN;
static uint8_t x20 = 0U;
uint64_t t8 = 334979LLU;
static int8_t x64 = INT8_MAX;
uint8_t x71 = 89U;
volatile int8_t x72 = INT8_MIN;
int16_t x74 = -318;
uint16_t x75 = UINT16_MAX;
int64_t t16 = -570110940507175LL;
int32_t x87 = -88408;
static int8_t x96 = -22;
uint32_t x97 = UINT32_MAX;
static uint8_t x100 = 31U;
uint16_t x101 = 38U;
volatile int32_t t21 = 99434;
uint32_t x115 = UINT32_MAX;
uint16_t x118 = UINT16_MAX;
int32_t x124 = INT32_MIN;
int64_t x127 = INT64_MIN;
volatile int64_t x129 = INT64_MAX;
volatile int8_t x130 = 1;
int32_t t29 = -6837;
uint32_t x152 = 25635345U;
uint64_t x153 = UINT64_MAX;
int64_t x154 = -1LL;
volatile int64_t t33 = 0LL;
uint64_t x177 = 8625LLU;
uint32_t x180 = UINT32_MAX;
uint32_t x188 = 1327685949U;
int64_t x195 = -1LL;
int64_t x200 = INT64_MIN;
volatile uint64_t t42 = 119198487652829LLU;
static volatile uint64_t t44 = 988388955206096LLU;
int32_t x221 = -11;
int32_t x222 = INT32_MIN;
int32_t x232 = -1;
int8_t x240 = -1;
uint8_t x241 = UINT8_MAX;
uint16_t x248 = 740U;
int8_t x252 = 23;
static volatile uint64_t t54 = 966480600204LLU;
volatile int16_t x253 = INT16_MIN;
int8_t x259 = 29;
int32_t x260 = INT32_MIN;
int64_t x262 = INT64_MIN;
uint16_t x267 = 1509U;
static int8_t x270 = INT8_MIN;
uint16_t x271 = UINT16_MAX;
volatile int8_t x290 = -31;
static int64_t t62 = -15241308499385LL;
int16_t x299 = 0;
volatile uint32_t t64 = 8938U;
static volatile int32_t x305 = INT32_MAX;
static int8_t x312 = -3;
int16_t x313 = INT16_MIN;
static int32_t x314 = 44;
static int8_t x315 = INT8_MIN;
static volatile uint32_t x320 = UINT32_MAX;
volatile uint8_t x321 = 4U;
uint64_t x324 = 6LLU;
uint32_t t71 = 32U;
int16_t x331 = -1;
int64_t x339 = 5051420320LL;
static int64_t x342 = INT64_MIN;
uint16_t x349 = UINT16_MAX;
static int32_t x351 = INT32_MIN;
int64_t t77 = -65810LL;
int64_t x356 = INT64_MAX;
uint64_t x371 = UINT64_MAX;
volatile int16_t x374 = -1;
uint16_t x378 = 15U;
volatile int64_t x381 = 1487380860086LL;
static int64_t x392 = 9624063LL;
volatile int64_t t87 = 126011478LL;
int8_t x398 = INT8_MIN;
uint32_t x399 = 1340484U;
static volatile int64_t t88 = -801584LL;
uint8_t x402 = 15U;
uint16_t x404 = 5U;
static int16_t x410 = INT16_MIN;
int32_t x413 = 15703;
int32_t x415 = INT32_MIN;
uint32_t x417 = 56892U;
uint32_t t93 = 1848U;
volatile int64_t x423 = -27028758908123440LL;
int32_t x424 = -1;
int32_t x428 = INT32_MIN;
int16_t x429 = -1;
uint64_t x435 = UINT64_MAX;
static volatile uint64_t t97 = 882471314303036045LLU;
static int32_t x437 = INT32_MAX;
volatile int16_t x438 = -1935;
int8_t x439 = 0;
uint8_t x442 = 13U;


void f0(void) {
	int32_t x2 = -1;
	static uint32_t x3 = 93996365U;
	uint16_t x4 = 580U;
	volatile uint32_t t0 = 346950536U;

	t0 = (x1+((x2^x3)^x4));

	if (t0 != 4201047604U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile uint64_t t1 = 99324146233307LLU;

	t1 = (x5+((x6^x7)^x8));

	if (t1 != 9223341460909230521LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile uint32_t x10 = 17332008U;
	int8_t x11 = INT8_MIN;
	volatile uint8_t x12 = UINT8_MAX;
	volatile uint32_t t2 = 21420U;

	t2 = (x9+((x10^x11)^x12));

	if (t2 != 4277635158U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6702U;
	int32_t x14 = INT32_MIN;
	volatile int64_t x15 = -1LL;
	int16_t x16 = -1;
	int64_t t3 = -1390787348620933579LL;

	t3 = (x13+((x14^x15)^x16));

	if (t3 != -2147476946LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 24648U;
	static uint64_t x18 = 13813LLU;
	static volatile int8_t x19 = -6;
	volatile uint64_t t4 = 18LLU;

	t4 = (x17+((x18^x19)^x20));

	if (t4 != 10839LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 12415LL;
	volatile int32_t x22 = 70;
	uint32_t x23 = 22140U;
	int32_t x24 = INT32_MAX;
	int64_t t5 = -530431006034395333LL;

	t5 = (x21+((x22^x23)^x24));

	if (t5 != 2147473988LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int64_t x26 = INT64_MIN;
	static uint16_t x27 = UINT16_MAX;
	int32_t x28 = INT32_MIN;
	int64_t t6 = -916LL;

	t6 = (x25+((x26^x27)^x28));

	if (t6 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	volatile int32_t x34 = -1;
	static int16_t x35 = -915;
	int32_t x36 = INT32_MIN;
	int64_t t7 = -6083597247LL;

	t7 = (x33+((x34^x35)^x36));

	if (t7 != 9223372034707293073LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	int16_t x38 = -1;
	static volatile int32_t x39 = INT32_MIN;
	uint64_t x40 = 183200917469053204LLU;

	t8 = (x37+((x38^x39)^x40));

	if (t8 != 183200919339089642LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MAX;
	volatile int8_t x51 = 0;
	volatile uint8_t x52 = UINT8_MAX;
	static volatile int32_t t9 = -123674840;

	t9 = (x49+((x50^x51)^x52));

	if (t9 != -32640) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x53 = UINT8_MAX;
	static int64_t x54 = INT64_MAX;
	int16_t x55 = 1;
	int16_t x56 = INT16_MIN;
	int64_t t10 = 847926LL;

	t10 = (x53+((x54^x55)^x56));

	if (t10 != -9223372036854742787LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = -1;
	int32_t x60 = INT32_MAX;
	volatile int32_t t11 = -123703;

	t11 = (x57+((x58^x59)^x60));

	if (t11 != 2147418112) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = -170424;
	volatile uint32_t x63 = 245941640U;
	uint32_t t12 = 29U;

	t12 = (x61+((x62^x63)^x64));

	if (t12 != 4048888767U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	static uint64_t x70 = 58985440868044LLU;
	volatile uint64_t t13 = 6035979454LLU;

	t13 = (x69+((x70^x71)^x72));

	if (t13 != 9223313051413907733LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1;
	int8_t x76 = -1;
	int32_t t14 = 7667;

	t14 = (x73+((x74^x75)^x76));

	if (t14 != 65217) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = 0;
	int64_t x78 = -5339708042097LL;
	uint64_t x79 = 311703359LLU;
	uint32_t x80 = UINT32_MAX;
	uint64_t t15 = 8960361167906449LLU;

	t15 = (x77+((x78^x79)^x80));

	if (t15 != 18446738731541109839LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x82 = 24U;
	int32_t x83 = 935117;
	static int64_t x84 = INT64_MAX;

	t16 = (x81+((x82^x83)^x84));

	if (t16 != 9223372036853906217LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x85 = 371U;
	static uint32_t x86 = UINT32_MAX;
	volatile int8_t x88 = -10;
	volatile uint32_t t17 = 2748U;

	t17 = (x85+((x86^x87)^x88));

	if (t17 != 4294879252U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x89 = -132;
	volatile uint8_t x90 = 29U;
	int32_t x91 = -1;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t18 = -6488948;

	t18 = (x89+((x90^x91)^x92));

	if (t18 != 32606) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x93 = INT64_MIN;
	int32_t x94 = 1;
	static int8_t x95 = INT8_MIN;
	int64_t t19 = -148823417627731LL;

	t19 = (x93+((x94^x95)^x96));

	if (t19 != -9223372036854775701LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x98 = INT8_MAX;
	volatile uint32_t x99 = 833662871U;
	volatile uint32_t t20 = 1243U;

	t20 = (x97+((x98^x99)^x100));

	if (t20 != 833662966U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x102 = INT32_MIN;
	static int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;

	t21 = (x101+((x102^x103)^x104));

	if (t21 != -2147450842) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 837972364U;
	static uint16_t x110 = UINT16_MAX;
	int32_t x111 = 0;
	static volatile int16_t x112 = INT16_MIN;
	static volatile uint32_t t22 = 22610659U;

	t22 = (x109+((x110^x111)^x112));

	if (t22 != 837939595U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 2857LLU;
	volatile int8_t x114 = -1;
	volatile uint64_t x116 = 542099394LLU;
	uint64_t t23 = 15945997412197LLU;

	t23 = (x113+((x114^x115)^x116));

	if (t23 != 542102251LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	static int8_t x119 = INT8_MAX;
	static volatile int32_t x120 = -1;
	int32_t t24 = 22426332;

	t24 = (x117+((x118^x119)^x120));

	if (t24 != -98177) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MAX;
	static volatile int32_t x122 = INT32_MAX;
	int8_t x123 = 2;
	static volatile int32_t t25 = 0;

	t25 = (x121+((x122^x123)^x124));

	if (t25 != 32764) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	int8_t x128 = -1;
	int64_t t26 = 27219029405LL;

	t26 = (x125+((x126^x127)^x128));

	if (t26 != -2147483649LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x131 = UINT16_MAX;
	uint64_t x132 = UINT64_MAX;
	static uint64_t t27 = 459956964810593743LLU;

	t27 = (x129+((x130^x131)^x132));

	if (t27 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 10U;
	int16_t x136 = -120;
	static int32_t t28 = -251242;

	t28 = (x133+((x134^x135)^x136));

	if (t28 != 129) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = -1;
	int8_t x138 = 0;
	static int8_t x139 = -4;
	int8_t x140 = INT8_MAX;

	t29 = (x137+((x138^x139)^x140));

	if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1LL;
	int16_t x142 = INT16_MIN;
	static volatile int64_t x143 = -11685317002910LL;
	static int32_t x144 = INT32_MIN;
	static int64_t t30 = 5709213177006831LL;

	t30 = (x141+((x142^x143)^x144));

	if (t30 != -11685747541663LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	uint8_t x150 = 11U;
	static int8_t x151 = 10;
	static volatile uint32_t t31 = 639160U;

	t31 = (x149+((x150^x151)^x152));

	if (t31 != 25635343U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x155 = 0;
	volatile uint32_t x156 = 52750U;
	static volatile uint64_t t32 = 2544LLU;

	t32 = (x153+((x154^x155)^x156));

	if (t32 != 18446744073709498864LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = 6LL;
	int32_t x158 = INT32_MIN;
	int16_t x159 = 1;
	int64_t x160 = -1LL;

	t33 = (x157+((x158^x159)^x160));

	if (t33 != 2147483652LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = INT32_MIN;
	volatile int64_t x162 = INT64_MIN;
	static volatile int8_t x163 = 17;
	int32_t x164 = -174;
	int64_t t34 = 240989122022738548LL;

	t34 = (x161+((x162^x163)^x164));

	if (t34 != 9223372034707291971LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MAX;
	uint32_t x166 = 10661U;
	volatile uint32_t x167 = 724510U;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t35 = 839174U;

	t35 = (x165+((x166^x167)^x168));

	if (t35 != 4294256570U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 289529189477339LLU;
	int16_t x170 = -1;
	static uint32_t x171 = UINT32_MAX;
	int32_t x172 = -192581;
	volatile uint64_t t36 = 106766550LLU;

	t36 = (x169+((x170^x171)^x172));

	if (t36 != 289533484252054LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x178 = -256;
	volatile int8_t x179 = INT8_MIN;
	uint64_t t37 = 8419928034LLU;

	t37 = (x177+((x178^x179)^x180));

	if (t37 != 4294975792LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 253213123LLU;
	uint64_t x182 = 24LLU;
	int64_t x183 = -25379990022370901LL;
	int64_t x184 = INT64_MIN;
	uint64_t t38 = 1546LLU;

	t38 = (x181+((x182^x183)^x184));

	if (t38 != 9197992047085618038LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x185 = INT64_MIN;
	volatile int8_t x186 = INT8_MIN;
	static int32_t x187 = INT32_MIN;
	int64_t t39 = 0LL;

	t39 = (x185+((x186^x187)^x188));

	if (t39 != -9223372036034978115LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x189 = UINT32_MAX;
	static uint32_t x190 = 21138U;
	uint16_t x191 = 3742U;
	int16_t x192 = 13673;
	static uint32_t t40 = 778113439U;

	t40 = (x189+((x190^x191)^x192));

	if (t40 != 26980U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	static volatile int64_t t41 = -2092411204427591846LL;

	t41 = (x193+((x194^x195)^x196));

	if (t41 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 288330888313LLU;

	t42 = (x197+((x198^x199)^x200));

	if (t42 != 288330888185LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 307U;
	int64_t x202 = INT64_MIN;
	int32_t x203 = -1;
	int32_t x204 = INT32_MAX;
	static volatile int64_t t43 = -22352913701319LL;

	t43 = (x201+((x202^x203)^x204));

	if (t43 != 9223372034707292467LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x205 = UINT64_MAX;
	int64_t x206 = INT64_MAX;
	volatile int8_t x207 = -1;
	uint64_t x208 = 14143085333LLU;

	t44 = (x205+((x206^x207)^x208));

	if (t44 != 9223372050997861140LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = -1LL;
	static int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MIN;
	static int64_t t45 = -533592052LL;

	t45 = (x209+((x210^x211)^x212));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MAX;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MAX;
	int32_t t46 = -609;

	t46 = (x213+((x214^x215)^x216));

	if (t46 != 2147450879) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = -1;
	int32_t x218 = -31251;
	uint64_t x219 = 738LLU;
	uint64_t x220 = 1719739482486050LLU;
	static uint64_t t47 = 5655LLU;

	t47 = (x217+((x218^x219)^x220));

	if (t47 != 18445024334227059244LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x223 = INT64_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile int64_t t48 = -55LL;

	t48 = (x221+((x222^x223)^x224));

	if (t48 != 9223372034707292148LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	volatile int16_t x230 = -1;
	int64_t x231 = 555048317368531LL;
	int64_t t49 = 43990684LL;

	t49 = (x229+((x230^x231)^x232));

	if (t49 != 555050464852178LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MAX;
	int32_t x234 = -14739987;
	int64_t x235 = -1LL;
	uint32_t x236 = 0U;
	volatile int64_t t50 = -15056LL;

	t50 = (x233+((x234^x235)^x236));

	if (t50 != 14772753LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	volatile int64_t x239 = -1818323LL;
	static volatile int64_t t51 = 11350479075045120LL;

	t51 = (x237+((x238^x239)^x240));

	if (t51 != -1818287LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 6663641LLU;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t52 = 22861711383LLU;

	t52 = (x241+((x242^x243)^x244));

	if (t52 != 18446744073702911704LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	int32_t x247 = 974657893;
	int32_t t53 = -1;

	t53 = (x245+((x246^x247)^x248));

	if (t53 != -974677120) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 1U;
	int16_t x250 = INT16_MIN;
	volatile uint64_t x251 = 4732654424302LLU;

	t54 = (x249+((x250^x251)^x252));

	if (t54 != 18446739341055103226LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x254 = INT8_MAX;
	static int8_t x255 = INT8_MIN;
	volatile int8_t x256 = INT8_MIN;
	int32_t t55 = -1887287;

	t55 = (x253+((x254^x255)^x256));

	if (t55 != -32641) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x257 = INT8_MAX;
	volatile int64_t x258 = -1LL;
	int64_t t56 = -386802005898936807LL;

	t56 = (x257+((x258^x259)^x260));

	if (t56 != 2147483745LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x261 = 14244LLU;
	uint8_t x263 = UINT8_MAX;
	static int16_t x264 = INT16_MIN;
	volatile uint64_t t57 = 210019739163LLU;

	t57 = (x261+((x262^x263)^x264));

	if (t57 != 9223372036854757539LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MAX;
	static int16_t x268 = INT16_MIN;
	int32_t t58 = -1;

	t58 = (x265+((x266^x267)^x268));

	if (t58 != -64102) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x269 = 9U;
	int8_t x272 = INT8_MIN;
	int32_t t59 = 25197;

	t59 = (x269+((x270^x271)^x272));

	if (t59 != 65544) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	int16_t x284 = 22;
	int64_t t60 = -171776638388LL;

	t60 = (x281+((x282^x283)^x284));

	if (t60 != 65557LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 411307111U;
	uint64_t x286 = 209731740LLU;
	int64_t x287 = 107981LL;
	uint8_t x288 = 73U;
	volatile uint64_t t61 = 25979792115530LLU;

	t61 = (x285+((x286^x287)^x288));

	if (t61 != 621146495LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = INT16_MAX;
	volatile int64_t x291 = -1LL;
	static volatile int8_t x292 = INT8_MAX;

	t62 = (x289+((x290^x291)^x292));

	if (t62 != 32864LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = 3U;
	volatile int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1826;
	static volatile int32_t t63 = 226556;

	t63 = (x293+((x294^x295)^x296));

	if (t63 != 1828) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x297 = 1;
	static uint32_t x298 = 848034032U;
	int8_t x300 = -31;

	t64 = (x297+((x298^x299)^x300));

	if (t64 != 3446933266U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x301 = 3U;
	uint8_t x302 = 63U;
	volatile uint8_t x303 = 8U;
	uint64_t x304 = 360437LLU;
	static volatile uint64_t t65 = 29686LLU;

	t65 = (x301+((x302^x303)^x304));

	if (t65 != 360389LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x306 = -1LL;
	int16_t x307 = INT16_MAX;
	int32_t x308 = -57940824;
	static volatile int64_t t66 = -120859144LL;

	t66 = (x305+((x306^x307)^x308));

	if (t66 != 2205443239LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x309 = 46;
	volatile int16_t x310 = INT16_MIN;
	int8_t x311 = 5;
	int32_t t67 = 5;

	t67 = (x309+((x310^x311)^x312));

	if (t67 != 32806) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x316 = UINT64_MAX;
	uint64_t t68 = 5344989616090LLU;

	t68 = (x313+((x314^x315)^x316));

	if (t68 != 18446744073709518931LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MAX;
	volatile int64_t x318 = INT64_MIN;
	static int8_t x319 = -1;
	int64_t t69 = 39LL;

	t69 = (x317+((x318^x319)^x320));

	if (t69 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x322 = 1U;
	volatile int64_t x323 = INT64_MIN;
	volatile uint64_t t70 = 536143490832047LLU;

	t70 = (x321+((x322^x323)^x324));

	if (t70 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x325 = INT8_MIN;
	uint32_t x326 = 2U;
	int32_t x327 = -248;
	static uint8_t x328 = UINT8_MAX;

	t71 = (x325+((x326^x327)^x328));

	if (t71 != 4294967157U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 0U;
	int32_t x330 = 66214;
	int16_t x332 = 2;
	static int32_t t72 = -827459;

	t72 = (x329+((x330^x331)^x332));

	if (t72 != -66213) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 5U;
	static uint64_t x335 = UINT64_MAX;
	int8_t x336 = -1;
	uint64_t t73 = 563049450LLU;

	t73 = (x333+((x334^x335)^x336));

	if (t73 != 4LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = 1047726484728LLU;
	volatile uint64_t x338 = 3890434LLU;
	uint8_t x340 = UINT8_MAX;
	volatile uint64_t t74 = 1616LLU;

	t74 = (x337+((x338^x339)^x340));

	if (t74 != 1052779429973LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = -1;
	uint8_t x343 = 0U;
	int32_t x344 = INT32_MIN;
	static volatile int64_t t75 = -429097015626143177LL;

	t75 = (x341+((x342^x343)^x344));

	if (t75 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MAX;
	int64_t x347 = 936020LL;
	uint16_t x348 = UINT16_MAX;
	volatile int64_t t76 = -701LL;

	t76 = (x345+((x346^x347)^x348));

	if (t76 != 2146551891LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x350 = -1LL;
	static int32_t x352 = -2380;

	t77 = (x349+((x350^x351)^x352));

	if (t77 != -2147415734LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MAX;
	int32_t x355 = -1;
	volatile int64_t t78 = -8LL;

	t78 = (x353+((x354^x355)^x356));

	if (t78 != -2147483649LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = -1349;
	int32_t x358 = -13014452;
	int64_t x359 = -1LL;
	static int16_t x360 = 0;
	int64_t t79 = 194595232LL;

	t79 = (x357+((x358^x359)^x360));

	if (t79 != 13013102LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = -1;
	static int32_t x366 = INT32_MIN;
	volatile int64_t x367 = 114426876LL;
	int16_t x368 = -1173;
	volatile int64_t t80 = -59657928LL;

	t80 = (x365+((x366^x367)^x368));

	if (t80 != 2033055894LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x369 = 122774063352731LLU;
	uint16_t x370 = 1601U;
	int32_t x372 = -1;
	volatile uint64_t t81 = 3964432110LLU;

	t81 = (x369+((x370^x371)^x372));

	if (t81 != 122774063354332LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x373 = UINT64_MAX;
	volatile int16_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t82 = 886195271LLU;

	t82 = (x373+((x374^x375)^x376));

	if (t82 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = -1;
	static int16_t x379 = 0;
	uint32_t x380 = 30682U;
	uint32_t t83 = 1283U;

	t83 = (x377+((x378^x379)^x380));

	if (t83 != 30676U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x382 = -993157978818677LL;
	int16_t x383 = 1570;
	static int64_t x384 = -3539LL;
	volatile int64_t t84 = 1408427LL;

	t84 = (x381+((x382^x383)^x384));

	if (t84 != 994645359677498LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = -1;
	static volatile int32_t x386 = INT32_MIN;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = -1;
	volatile uint64_t t85 = 76240398552LLU;

	t85 = (x385+((x386^x387)^x388));

	if (t85 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x389 = -324850569975573700LL;
	int32_t x390 = INT32_MIN;
	static uint32_t x391 = 82U;
	volatile int64_t t86 = -374821LL;

	t86 = (x389+((x390^x391)^x392));

	if (t86 != -324850567818466071LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x394 = INT32_MIN;
	int32_t x395 = 1;
	int64_t x396 = INT64_MAX;

	t87 = (x393+((x394^x395)^x396));

	if (t87 != -9223372034707291907LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = -1LL;
	int8_t x400 = 0;

	t88 = (x397+((x398^x399)^x400));

	if (t88 != 4293626819LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = 11484;
	static int8_t x403 = -4;
	int32_t t89 = -113976226;

	t89 = (x401+((x402^x403)^x404));

	if (t89 != 11474) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x405 = 0U;
	int32_t x406 = -1;
	uint64_t x407 = 117521196782805LLU;
	int64_t x408 = -1LL;
	volatile uint64_t t90 = 7008247881LLU;

	t90 = (x405+((x406^x407)^x408));

	if (t90 != 117521196782805LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x409 = 13U;
	volatile int32_t x411 = 3402;
	uint64_t x412 = 238952924LLU;
	uint64_t t91 = 7149436680499792LLU;

	t91 = (x409+((x410^x411)^x412));

	if (t91 != 18446744073470586019LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x414 = UINT32_MAX;
	static volatile uint64_t x416 = 76828068223868737LLU;
	uint64_t t92 = 645728733LLU;

	t92 = (x413+((x414^x415)^x416));

	if (t92 != 76828069725003285LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x418 = INT32_MIN;
	volatile int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;

	t93 = (x417+((x418^x419)^x420));

	if (t93 != 2147573180U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = 922664LLU;
	int16_t x422 = -1;
	uint64_t t94 = 3LLU;

	t94 = (x421+((x422^x423)^x424));

	if (t94 != 18419715314802350840LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = -35;
	uint32_t x426 = UINT32_MAX;
	static int8_t x427 = INT8_MIN;
	uint32_t t95 = 2U;

	t95 = (x425+((x426^x427)^x428));

	if (t95 != 2147483740U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x430 = 26870002U;
	int16_t x431 = INT16_MIN;
	int64_t x432 = -1LL;
	static volatile int64_t t96 = 2583670855498391LL;

	t96 = (x429+((x430^x431)^x432));

	if (t96 != -4268065012LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x433 = UINT32_MAX;
	int16_t x434 = INT16_MAX;
	volatile uint8_t x436 = 2U;

	t97 = (x433+((x434^x435)^x436));

	if (t97 != 4294934529LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x440 = 14525;
	volatile int32_t t98 = 45114566;

	t98 = (x437+((x438^x439)^x440));

	if (t98 != 2147467467) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x441 = UINT32_MAX;
	uint16_t x443 = 1897U;
	volatile uint32_t x444 = 3877313U;
	uint32_t t99 = 15498196U;

	t99 = (x441+((x442^x443)^x444));

	if (t99 != 3878564U) { NG(); } else { ; }
	
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

