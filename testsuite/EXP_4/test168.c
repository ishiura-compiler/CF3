#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x26 = INT16_MIN;
int32_t t6 = 612;
uint64_t x35 = 24LLU;
int8_t x41 = 0;
uint64_t t13 = 1LLU;
static int8_t x69 = INT8_MAX;
int64_t x71 = INT64_MIN;
int64_t t15 = INT64_MAX;
volatile uint64_t x87 = 15862LLU;
static uint64_t t19 = UINT64_MAX;
int8_t x98 = INT8_MIN;
int32_t t22 = -958321010;
int64_t x106 = INT64_MIN;
int8_t x108 = -1;
volatile int64_t t29 = -680186484LL;
int64_t x135 = 730372034665633LL;
uint64_t x136 = 7LLU;
uint8_t x144 = 2U;
volatile uint32_t x145 = 711853432U;
uint32_t t34 = 1486209U;
uint32_t x149 = 97U;
uint16_t x150 = 196U;
int16_t x170 = INT16_MAX;
uint16_t x171 = UINT16_MAX;
int32_t x184 = -1;
static uint64_t t40 = 5748401LLU;
uint32_t x201 = 250116955U;
volatile uint64_t x215 = 22437667238710LLU;
uint64_t x232 = 0LLU;
static uint32_t x236 = 67631415U;
uint64_t t54 = 8253877563219LLU;
int64_t x249 = 850905LL;
int8_t x250 = INT8_MIN;
uint64_t x251 = UINT64_MAX;
uint64_t t55 = 6263680LLU;
volatile int64_t t57 = -501847837132865118LL;
int32_t t59 = -1071230659;
int32_t x276 = INT32_MIN;
int16_t x280 = INT16_MIN;
volatile int64_t t62 = -20585LL;
volatile uint64_t x288 = 1LLU;
volatile uint64_t t63 = UINT64_MAX;
uint32_t x292 = 4179131U;
static uint64_t x293 = UINT64_MAX;
static volatile uint16_t x295 = UINT16_MAX;
volatile uint64_t t66 = 69522LLU;
int32_t x301 = INT32_MIN;
uint16_t x313 = 13U;
uint32_t x318 = 12U;
int8_t x321 = INT8_MIN;
uint64_t x322 = 12476407096440001LLU;
int16_t x328 = INT16_MIN;
volatile uint64_t x331 = UINT64_MAX;
static int16_t x333 = -3735;
uint32_t x342 = UINT32_MAX;
volatile uint64_t t75 = UINT64_MAX;
uint8_t x348 = 0U;
int32_t t76 = -95;
int64_t x358 = INT64_MIN;
static int16_t x361 = INT16_MAX;
volatile int16_t x367 = -4247;
int32_t t81 = -29126126;
int32_t t82 = -352079;
int64_t t84 = -12388716664349647LL;
int64_t x381 = INT64_MIN;
volatile int16_t x387 = INT16_MIN;
int32_t x401 = -35139819;
uint64_t x406 = UINT64_MAX;
volatile uint64_t t90 = 11856LLU;
int64_t x410 = INT64_MAX;
int16_t x422 = INT16_MAX;
static uint32_t x424 = UINT32_MAX;
volatile int8_t x427 = 1;
volatile uint16_t x444 = 446U;
int16_t x445 = -6324;
int16_t x447 = INT16_MAX;
static uint16_t x448 = UINT16_MAX;
volatile int8_t x453 = -1;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	static int64_t x2 = INT64_MIN;
	uint8_t x3 = 65U;
	uint32_t x4 = 25117104U;
	static volatile int64_t t0 = 352462691599LL;

	t0 = (x1|(x2^(x3+x4)));

	if (t0 != -9223372036829609985LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint64_t x6 = 208683804LLU;
	int16_t x7 = -756;
	int8_t x8 = 0;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5|(x6^(x7+x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -33444042;
	uint32_t x10 = 2786U;
	int8_t x11 = INT8_MIN;
	int64_t x12 = 52016800654629LL;
	int64_t t2 = 819691LL;

	t2 = (x9|(x10^(x11+x12)));

	if (t2 != -17961097LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint16_t x14 = 4U;
	uint8_t x15 = 96U;
	volatile int32_t x16 = -1;
	int32_t t3 = 98068502;

	t3 = (x13|(x14^(x15+x16)));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	uint8_t x18 = 0U;
	static volatile int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = 5866427;

	t4 = (x17|(x18^(x19+x20)));

	if (t4 != -32896) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int16_t x22 = INT16_MIN;
	volatile int32_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	volatile int64_t t5 = 1881581326919012LL;

	t5 = (x21|(x22^(x23+x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 35U;
	volatile int32_t x27 = 671288812;
	int16_t x28 = -1;

	t6 = (x25|(x26^(x27+x28)));

	if (t6 != -671314453) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = 26848010917LL;
	volatile uint16_t x34 = 15U;
	int32_t x36 = INT32_MAX;
	volatile uint64_t t7 = 5966958791LLU;

	t7 = (x33|(x34^(x35+x36)));

	if (t7 != 28995494589LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x42 = 53U;
	int32_t x43 = INT32_MIN;
	static uint32_t x44 = 17635U;
	uint32_t t8 = 135069U;

	t8 = (x41|(x42^(x43+x44)));

	if (t8 != 2147501270U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	static uint64_t x46 = 153269584863LLU;
	uint8_t x47 = 11U;
	int8_t x48 = -1;
	volatile uint64_t t9 = 141069869504036737LLU;

	t9 = (x45|(x46^(x47+x48)));

	if (t9 != 18446744073709536213LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	uint64_t x50 = 3097082360081LLU;
	static int8_t x51 = INT8_MAX;
	uint16_t x52 = 2451U;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = (x49|(x50^(x51+x52)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	static uint64_t x54 = 161812407813182LLU;
	int8_t x55 = -1;
	uint8_t x56 = 20U;
	static volatile uint64_t t11 = 5485LLU;

	t11 = (x53|(x54^(x55+x56)));

	if (t11 != 161812407813375LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = -1LL;
	int8_t x58 = INT8_MIN;
	static int64_t x59 = INT64_MAX;
	static int8_t x60 = -1;
	volatile int64_t t12 = 420679LL;

	t12 = (x57|(x58^(x59+x60)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 14423331015995LLU;
	int8_t x62 = INT8_MIN;
	volatile int64_t x63 = -105566592845LL;
	uint8_t x64 = 5U;

	t13 = (x61|(x62^(x63+x64)));

	if (t13 != 14425549954875LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = INT64_MIN;
	volatile int8_t x66 = -1;
	int32_t x67 = INT32_MAX;
	volatile int32_t x68 = INT32_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (x65|(x66^(x67+x68)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x70 = -1;
	static volatile uint8_t x72 = 44U;

	t15 = (x69|(x70^(x71+x72)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 5U;
	uint64_t x74 = 7191LLU;
	static int16_t x75 = INT16_MIN;
	volatile uint32_t x76 = 0U;
	volatile uint64_t t16 = 3LLU;

	t16 = (x73|(x74^(x75+x76)));

	if (t16 != 4294941719LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x77 = UINT64_MAX;
	uint16_t x78 = 355U;
	int64_t x79 = 8859681010088LL;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x77|(x78^(x79+x80)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	volatile int16_t x83 = 1;
	uint64_t x84 = UINT64_MAX;
	static volatile uint64_t t18 = UINT64_MAX;

	t18 = (x81|(x82^(x83+x84)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	uint8_t x86 = 13U;
	int64_t x88 = -543138LL;

	t19 = (x85|(x86^(x87+x88)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x89 = 7U;
	static uint64_t x90 = 7LLU;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	static uint64_t t20 = 22162283LLU;

	t20 = (x89|(x90^(x91+x92)));

	if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x93 = 785958439770LLU;
	int64_t x94 = INT64_MAX;
	static int32_t x95 = -581049280;
	uint64_t x96 = 1054583965987LLU;
	static uint64_t t21 = 74198465LLU;

	t21 = (x93|(x94^(x95+x96)));

	if (t21 != 9223371757661445086LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	int8_t x99 = INT8_MAX;
	int16_t x100 = 11452;

	t22 = (x97|(x98^(x99+x100)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 9LLU;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	static volatile uint64_t t23 = 30933852129744LLU;

	t23 = (x101|(x102^(x103+x104)));

	if (t23 != 18446744069414584329LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MAX;
	int8_t x107 = -1;
	volatile int64_t t24 = INT64_MAX;

	t24 = (x105|(x106^(x107+x108)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 475U;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MAX;
	uint32_t x112 = 1041504316U;
	volatile int64_t t25 = -27691795LL;

	t25 = (x109|(x110^(x111+x112)));

	if (t25 != -9223372035813271045LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -291;
	static int8_t x114 = INT8_MIN;
	int64_t x115 = -1LL;
	int64_t x116 = 146LL;
	volatile int64_t t26 = 2103784578531LL;

	t26 = (x113|(x114^(x115+x116)));

	if (t26 != -35LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 32U;
	volatile int64_t x118 = -1LL;
	int64_t x119 = -6065978228LL;
	uint32_t x120 = 49U;
	int64_t t27 = -343852790521381LL;

	t27 = (x117|(x118^(x119+x120)));

	if (t27 != 6065978210LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = 1924U;
	static int8_t x122 = 0;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t28 = 7716431;

	t28 = (x121|(x122^(x123+x124)));

	if (t28 != -2147418113) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = 0;
	static volatile int32_t x126 = INT32_MIN;
	static int64_t x127 = -1LL;
	volatile uint16_t x128 = 335U;

	t29 = (x125|(x126^(x127+x128)));

	if (t29 != -2147483314LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	volatile int8_t x131 = -2;
	int32_t x132 = 3;
	int64_t t30 = -3126681948LL;

	t30 = (x129|(x130^(x131+x132)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MAX;
	volatile uint64_t t31 = 1923838821LLU;

	t31 = (x133|(x134^(x135+x136)));

	if (t31 != 9222641664820117503LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = -15;
	static uint16_t x138 = 1103U;
	static int16_t x139 = INT16_MIN;
	uint8_t x140 = 5U;
	int32_t t32 = -1298053;

	t32 = (x137|(x138^(x139+x140)));

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	int64_t t33 = 58LL;

	t33 = (x141|(x142^(x143+x144)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x146 = -1;
	uint32_t x147 = 170033U;
	static int16_t x148 = -1;

	t34 = (x145|(x146^(x147+x148)));

	if (t34 != 4294928383U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x151 = -20138;
	int8_t x152 = INT8_MIN;
	static uint32_t t35 = 152994U;

	t35 = (x149|(x150^(x151+x152)));

	if (t35 != 4294946931U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 415946072127339LLU;
	int64_t x158 = INT64_MIN;
	static int64_t x159 = -8146LL;
	int64_t x160 = -2570494374LL;
	uint64_t t36 = 147465LLU;

	t36 = (x157|(x158^(x159+x160)));

	if (t36 != 9223372036852678635LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -1LL;
	volatile int64_t x166 = INT64_MAX;
	uint32_t x167 = 108U;
	int32_t x168 = -1;
	volatile int64_t t37 = 455314419797968LL;

	t37 = (x165|(x166^(x167+x168)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 26U;
	int32_t x172 = 38909632;
	volatile int32_t t38 = -13;

	t38 = (x169|(x170^(x171+x172)));

	if (t38 != 38979930) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 10199LLU;
	volatile uint32_t x174 = 26054U;
	static int32_t x175 = INT32_MAX;
	uint32_t x176 = 0U;
	uint64_t t39 = 128689LLU;

	t39 = (x173|(x174^(x175+x176)));

	if (t39 != 2147467263LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MIN;
	static uint64_t x182 = 224228426LLU;
	static uint16_t x183 = 160U;

	t40 = (x181|(x182^(x183+x184)));

	if (t40 != 9223372037079004373LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 161953U;
	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MAX;
	volatile int64_t t41 = 6LL;

	t41 = (x185|(x186^(x187+x188)));

	if (t41 != 162047LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x189 = -1307;
	int32_t x190 = INT32_MIN;
	volatile int32_t x191 = INT32_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t42 = 699;

	t42 = (x189|(x190^(x191+x192)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	int64_t x194 = -269273384485LL;
	int32_t x195 = 3;
	volatile uint16_t x196 = UINT16_MAX;
	int64_t t43 = -12314753823387047LL;

	t43 = (x193|(x194^(x195+x196)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x197 = INT32_MIN;
	static int64_t x198 = 20241731LL;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 1U;
	int64_t t44 = 29892951820105LL;

	t44 = (x197|(x198^(x199+x200)));

	if (t44 != -20241726LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x202 = 726;
	int32_t x203 = 30084;
	int16_t x204 = -3543;
	uint32_t t45 = 162252U;

	t45 = (x201|(x202^(x203+x204)));

	if (t45 != 250118011U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -3;
	int32_t x210 = 2965905;
	uint16_t x211 = 99U;
	volatile uint32_t x212 = UINT32_MAX;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x209|(x210^(x211+x212)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -1;
	static uint16_t x214 = 108U;
	int64_t x216 = INT64_MIN;
	static uint64_t t47 = UINT64_MAX;

	t47 = (x213|(x214^(x215+x216)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	static volatile int16_t x223 = INT16_MIN;
	int8_t x224 = -2;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x221|(x222^(x223+x224)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x225 = 7LLU;
	uint64_t x226 = 14939LLU;
	static int16_t x227 = 14071;
	int16_t x228 = 6260;
	uint64_t t49 = 47106348236196048LLU;

	t49 = (x225|(x226^(x227+x228)));

	if (t49 != 30007LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x229 = 1111953253214858LLU;
	int32_t x230 = INT32_MIN;
	static int32_t x231 = 3;
	volatile uint64_t t50 = 33381636305LLU;

	t50 = (x229|(x230^(x231+x232)));

	if (t50 != 18446744072814733963LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x233 = INT16_MIN;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = UINT16_MAX;
	volatile int64_t t51 = 7078LL;

	t51 = (x233|(x234^(x235+x236)));

	if (t51 != -1738LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	static uint8_t x239 = 7U;
	int8_t x240 = INT8_MIN;
	volatile int32_t t52 = -8936;

	t52 = (x237|(x238^(x239+x240)));

	if (t52 != -121) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x241 = UINT16_MAX;
	uint32_t x242 = 4U;
	int16_t x243 = -1;
	int16_t x244 = -15;
	uint32_t t53 = UINT32_MAX;

	t53 = (x241|(x242^(x243+x244)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x245 = INT64_MAX;
	int64_t x246 = 19917580LL;
	int64_t x247 = 3428915LL;
	uint64_t x248 = 8696481150LLU;

	t54 = (x245|(x246^(x247+x248)));

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x252 = -1;

	t55 = (x249|(x250^(x251+x252)));

	if (t55 != 850943LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MAX;
	uint8_t x259 = 9U;
	volatile int64_t x260 = 0LL;
	int64_t t56 = -2276775142LL;

	t56 = (x257|(x258^(x259+x260)));

	if (t56 != -32650LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = -5970;
	volatile int8_t x262 = INT8_MIN;
	volatile int64_t x263 = -1LL;
	volatile int64_t x264 = -751LL;

	t57 = (x261|(x262^(x263+x264)));

	if (t57 != -5442LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MAX;
	int32_t x266 = INT32_MIN;
	volatile int16_t x267 = -1;
	volatile int64_t x268 = 7534867LL;
	static volatile int64_t t58 = -18231651LL;

	t58 = (x265|(x266^(x267+x268)));

	if (t58 != -2139948673LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = 21021763;
	int16_t x270 = INT16_MAX;
	uint8_t x271 = 0U;
	static uint16_t x272 = 2475U;

	t59 = (x269|(x270^(x271+x272)));

	if (t59 != 21034583) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 92U;
	uint64_t x274 = 59LLU;
	int16_t x275 = INT16_MAX;
	static uint64_t t60 = 92728964420601LLU;

	t60 = (x273|(x274^(x275+x276)));

	if (t60 != 18446744071562100700LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x277 = 13U;
	static int32_t x278 = -63880;
	int8_t x279 = -2;
	volatile int32_t t61 = 89;

	t61 = (x277|(x278^(x279+x280)));

	if (t61 != 31119) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = 113;
	int16_t x282 = INT16_MAX;
	int64_t x283 = INT64_MAX;
	volatile int16_t x284 = -1;

	t62 = (x281|(x282^(x283+x284)));

	if (t62 != 9223372036854743153LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = -1;
	static volatile int16_t x286 = INT16_MAX;
	uint16_t x287 = 16887U;

	t63 = (x285|(x286^(x287+x288)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 0U;
	uint8_t x290 = 55U;
	static int64_t x291 = -1LL;
	int64_t t64 = 7694743345771688LL;

	t64 = (x289|(x290^(x291+x292)));

	if (t64 != 4179085LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x294 = 13583509901269290LL;
	static uint8_t x296 = 56U;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x293|(x294^(x295+x296)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x297 = -64489496756124LL;
	volatile uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MAX;
	static int8_t x300 = -1;

	t66 = (x297|(x298^(x299+x300)));

	if (t66 != 18446744073709535333LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x302 = INT16_MIN;
	static int32_t x303 = INT32_MAX;
	volatile int64_t x304 = 2617825099724LL;
	int64_t t67 = 2248519LL;

	t67 = (x301|(x302^(x303+x304)));

	if (t67 != -42500149LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x305 = UINT64_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	static int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x305|(x306^(x307+x308)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	int32_t t69 = 7506663;

	t69 = (x313|(x314^(x315+x316)));

	if (t69 != -32769) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = INT8_MAX;
	volatile int64_t x319 = -833082844752517LL;
	uint32_t x320 = 3U;
	int64_t t70 = 143576LL;

	t70 = (x317|(x318^(x319+x320)));

	if (t70 != -833082844752513LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x323 = 487LLU;
	int64_t x324 = 291238434446068LL;
	volatile uint64_t t71 = 70LLU;

	t71 = (x321|(x322^(x323+x324)));

	if (t71 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = -1;
	uint16_t x326 = UINT16_MAX;
	int16_t x327 = 1637;
	int32_t t72 = 4;

	t72 = (x325|(x326^(x327+x328)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x329 = -786987;
	int64_t x330 = INT64_MIN;
	int16_t x332 = -1;
	uint64_t t73 = UINT64_MAX;

	t73 = (x329|(x330^(x331+x332)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x334 = INT32_MAX;
	static uint32_t x335 = 52U;
	volatile uint32_t x336 = 32277410U;
	volatile uint32_t t74 = 2020675U;

	t74 = (x333|(x334^(x335+x336)));

	if (t74 != 4294966633U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x341 = UINT64_MAX;
	uint32_t x343 = 1782U;
	static int8_t x344 = -1;

	t75 = (x341|(x342^(x343+x344)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x345 = 2295U;
	volatile uint8_t x346 = 1U;
	int8_t x347 = -3;

	t76 = (x345|(x346^(x347+x348)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = -4802LL;
	static uint32_t x350 = UINT32_MAX;
	static uint32_t x351 = 88718U;
	volatile int64_t x352 = -62LL;
	int64_t t77 = 70767LL;

	t77 = (x349|(x350^(x351+x352)));

	if (t77 != -4673LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t78 = 29649753;

	t78 = (x353|(x354^(x355+x356)));

	if (t78 != -2147385345) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x357 = -1;
	int8_t x359 = INT8_MAX;
	uint16_t x360 = 10799U;
	int64_t t79 = 60086LL;

	t79 = (x357|(x358^(x359+x360)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x362 = INT8_MAX;
	int8_t x363 = -1;
	int32_t x364 = 12;
	static int32_t t80 = -233;

	t80 = (x361|(x362^(x363+x364)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MIN;
	uint8_t x366 = UINT8_MAX;
	static int16_t x368 = 14714;

	t81 = (x365|(x366^(x367+x368)));

	if (t81 != -100) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x369 = -1;
	static uint8_t x370 = 9U;
	int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 13U;

	t82 = (x369|(x370^(x371+x372)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x373 = 69U;
	static int16_t x374 = -5704;
	int16_t x375 = -1;
	volatile int16_t x376 = INT16_MIN;
	int32_t t83 = 2536465;

	t83 = (x373|(x374^(x375+x376)));

	if (t83 != 38471) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -779142620830006244LL;
	int8_t x380 = 0;

	t84 = (x377|(x378^(x379+x380)));

	if (t84 != -100LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x382 = 78U;
	static volatile int64_t x383 = -2563257890095963LL;
	uint8_t x384 = 5U;
	volatile int64_t t85 = -8744947755227LL;

	t85 = (x381|(x382^(x383+x384)));

	if (t85 != -2563257890095900LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = -1LL;
	uint8_t x386 = 18U;
	volatile int64_t x388 = -1LL;
	int64_t t86 = 45026LL;

	t86 = (x385|(x386^(x387+x388)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x389 = 18374925;
	volatile int16_t x390 = INT16_MAX;
	int64_t x391 = 25651070508LL;
	int16_t x392 = INT16_MIN;
	static int64_t t87 = 613359LL;

	t87 = (x389|(x390^(x391+x392)));

	if (t87 != 25668876767LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 7083U;
	static int64_t x398 = -1LL;
	static uint32_t x399 = UINT32_MAX;
	int8_t x400 = -1;
	int64_t t88 = 2212658650600471179LL;

	t88 = (x397|(x398^(x399+x400)));

	if (t88 != -4294960213LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x402 = -996;
	volatile int8_t x403 = INT8_MAX;
	volatile uint64_t x404 = 17417LLU;
	volatile uint64_t t89 = 63005789499042765LLU;

	t89 = (x401|(x402^(x403+x404)));

	if (t89 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = INT16_MIN;
	volatile int16_t x407 = INT16_MIN;
	int8_t x408 = 23;

	t90 = (x405|(x406^(x407+x408)));

	if (t90 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = -58000408;
	uint32_t x411 = 3477U;
	volatile uint32_t x412 = 1U;
	int64_t t91 = -49830353LL;

	t91 = (x409|(x410^(x411+x412)));

	if (t91 != -1047LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x413 = -1LL;
	int8_t x414 = -6;
	static int16_t x415 = -1;
	volatile int32_t x416 = -15992;
	volatile int64_t t92 = 110LL;

	t92 = (x413|(x414^(x415+x416)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = -220194LL;
	volatile uint16_t x423 = 0U;
	int64_t t93 = -3227LL;

	t93 = (x421|(x422^(x423+x424)));

	if (t93 != -23586LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	uint64_t x426 = UINT64_MAX;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x425|(x426^(x427+x428)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = UINT64_MAX;
	int16_t x430 = -192;
	static int32_t x431 = INT32_MAX;
	static int64_t x432 = INT64_MIN;
	uint64_t t95 = UINT64_MAX;

	t95 = (x429|(x430^(x431+x432)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = UINT16_MAX;
	int64_t x442 = -1LL;
	int16_t x443 = -1;
	static int64_t t96 = -4298200LL;

	t96 = (x441|(x442^(x443+x444)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x446 = -1;
	int32_t t97 = -121812;

	t97 = (x445|(x446^(x447+x448)));

	if (t97 != -6323) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = INT32_MIN;
	volatile int64_t x450 = INT64_MAX;
	uint16_t x451 = UINT16_MAX;
	int8_t x452 = INT8_MIN;
	static volatile int64_t t98 = 3060LL;

	t98 = (x449|(x450^(x451+x452)));

	if (t98 != -65408LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x454 = 41U;
	static uint32_t x455 = 1522473922U;
	volatile uint8_t x456 = 1U;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x453|(x454^(x455+x456)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

