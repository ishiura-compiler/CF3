#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1773;
static int64_t x8 = INT64_MIN;
uint8_t x14 = 1U;
int32_t x22 = INT32_MAX;
uint32_t x33 = UINT32_MAX;
static int8_t x38 = INT8_MIN;
volatile int64_t x39 = INT64_MIN;
int16_t x44 = -1;
uint64_t t10 = 24130LLU;
uint32_t x58 = 1828055U;
int16_t x59 = INT16_MIN;
volatile int16_t x60 = -6;
volatile uint32_t t12 = 2961U;
uint64_t t13 = 29119259960509411LLU;
uint8_t x77 = 66U;
uint16_t x79 = 69U;
uint64_t x94 = 96576068913981202LLU;
static volatile uint8_t x95 = 16U;
uint8_t x103 = 3U;
int64_t x105 = INT64_MAX;
static uint8_t x106 = 0U;
int32_t x116 = -521981163;
volatile int32_t t22 = -15971;
int8_t x119 = INT8_MIN;
volatile int16_t x123 = -1;
volatile int32_t t24 = 3;
int32_t x126 = INT32_MIN;
volatile int64_t t25 = 827LL;
int32_t x132 = -73;
uint16_t x135 = UINT16_MAX;
volatile int32_t x156 = INT32_MIN;
volatile uint64_t t30 = 17313602LLU;
volatile uint8_t x161 = 33U;
int8_t x173 = 0;
int32_t x183 = -1;
static int16_t x184 = 6;
int32_t x187 = INT32_MIN;
static int8_t x190 = 2;
int32_t x192 = -598367;
static volatile uint32_t t38 = 39396436U;
uint8_t x197 = 2U;
volatile uint8_t x206 = UINT8_MAX;
volatile int32_t x215 = INT32_MIN;
int8_t x216 = INT8_MIN;
static volatile int64_t t45 = -33802491713LL;
int8_t x226 = INT8_MIN;
volatile int32_t x231 = -1;
int16_t x232 = INT16_MAX;
volatile int8_t x236 = -1;
static int32_t t48 = -57;
uint8_t x237 = UINT8_MAX;
static int16_t x238 = -1;
volatile int16_t x243 = 0;
int16_t x245 = 68;
static uint32_t x249 = 3940U;
int8_t x250 = -25;
int16_t x251 = -392;
static uint64_t x253 = 641431524638LLU;
static volatile uint64_t t53 = 154633LLU;
static int8_t x261 = -1;
static volatile int32_t t54 = 99887535;
int64_t x275 = -1LL;
uint32_t x276 = 13026979U;
volatile uint8_t x281 = 0U;
int16_t x283 = INT16_MIN;
int32_t x286 = -487422999;
int16_t x302 = -1;
static int32_t t62 = 6886331;
static uint64_t x326 = UINT64_MAX;
int8_t x330 = INT8_MIN;
int64_t x331 = 57546615803101LL;
volatile uint16_t x332 = UINT16_MAX;
static volatile int32_t t66 = -869296;
static uint64_t t67 = 2607284388475973167LLU;
uint64_t x343 = UINT64_MAX;
int64_t x344 = -4807269841714048LL;
volatile int8_t x351 = -2;
volatile uint8_t x352 = UINT8_MAX;
int32_t x356 = -181497;
volatile uint32_t x357 = 3344U;
static int32_t x358 = INT32_MAX;
int8_t x364 = INT8_MAX;
uint64_t x365 = UINT64_MAX;
int64_t x367 = -50964634933141411LL;
int64_t t76 = 213946581342343268LL;
uint64_t x389 = UINT64_MAX;
volatile uint64_t t77 = 175907598LLU;
int16_t x393 = INT16_MIN;
int16_t x394 = INT16_MIN;
uint64_t x399 = 1976778397LLU;
volatile uint16_t x405 = 4090U;
int32_t x410 = -28100;
int8_t x413 = INT8_MIN;
volatile uint32_t x421 = 215U;
static uint8_t x422 = 49U;
int32_t x424 = INT32_MAX;
volatile uint32_t t84 = 4U;
static int8_t x429 = -62;
static uint64_t x433 = UINT64_MAX;
uint64_t t86 = 22040800379LLU;
int32_t x457 = -1;
uint64_t x458 = 322313767LLU;
uint8_t x459 = UINT8_MAX;
volatile uint64_t t91 = 562090252916658LLU;
int16_t x467 = INT16_MIN;
volatile uint32_t t92 = 1634709319U;
volatile uint64_t t93 = 301586987492LLU;
volatile int32_t x476 = -63355002;
int32_t x492 = -1;
int32_t x502 = -1;
int16_t x506 = INT16_MIN;
int64_t x507 = INT64_MIN;
static int64_t t99 = -21346LL;


void f0(void) {
	static uint32_t x2 = 51117844U;
	uint8_t x3 = 20U;
	int16_t x4 = INT16_MAX;
	uint32_t t0 = 770U;

	t0 = ((x1-x2)-(x3|x4));

	if (t0 != 4243814912U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int16_t x6 = -15326;
	int8_t x7 = 1;
	int64_t t1 = -12934895365181415LL;

	t1 = ((x5-x6)-(x7|x8));

	if (t1 != 15325LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 2U;
	uint32_t t2 = 1338U;

	t2 = ((x9-x10)-(x11|x12));

	if (t2 != 131069U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	static volatile int64_t x16 = INT64_MAX;
	int64_t t3 = 3LL;

	t3 = ((x13-x14)-(x15|x16));

	if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -2089479869625521LL;
	volatile int16_t x18 = -1;
	volatile uint8_t x19 = UINT8_MAX;
	int32_t x20 = -24844;
	int64_t t4 = -4094587LL;

	t4 = ((x17-x18)-(x19|x20));

	if (t4 != -2089479869600687LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	int16_t x23 = -244;
	uint32_t x24 = 1179599093U;
	volatile uint32_t t5 = 247U;

	t5 = ((x21-x22)-(x23|x24));

	if (t5 != 2147483779U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	uint16_t x30 = 2524U;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t6 = 0;

	t6 = ((x29-x30)-(x31|x32));

	if (t6 != -2524) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x34 = -1;
	int8_t x35 = -2;
	volatile int8_t x36 = -1;
	volatile uint32_t t7 = 3U;

	t7 = ((x33-x34)-(x35|x36));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	int8_t x40 = -1;
	volatile int64_t t8 = -102091687LL;

	t8 = ((x37-x38)-(x39|x40));

	if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = UINT32_MAX;
	static volatile uint32_t t9 = 1156U;

	t9 = ((x41-x42)-(x43|x44));

	if (t9 != 32768U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	volatile uint32_t x51 = 3U;
	int8_t x52 = INT8_MAX;

	t10 = ((x49-x50)-(x51|x52));

	if (t10 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 118381271U;
	uint32_t x54 = 53295532U;
	uint8_t x55 = 4U;
	uint8_t x56 = 1U;
	uint32_t t11 = 7U;

	t11 = ((x53-x54)-(x55|x56));

	if (t11 != 65085734U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;

	t12 = ((x57-x58)-(x59|x60));

	if (t12 != 4293106479U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MAX;
	int8_t x68 = -1;

	t13 = ((x65-x66)-(x67|x68));

	if (t13 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = -1;
	int8_t x74 = INT8_MIN;
	volatile int64_t x75 = INT64_MAX;
	static int32_t x76 = 9030;
	static volatile int64_t t14 = 474115LL;

	t14 = ((x73-x74)-(x75|x76));

	if (t14 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x78 = 296;
	uint32_t x80 = 922055270U;
	volatile uint32_t t15 = 13999865U;

	t15 = ((x77-x78)-(x79|x80));

	if (t15 != 3372911795U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = 26U;
	volatile int64_t x82 = 7397369004LL;
	uint32_t x83 = 14U;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t16 = -21823LL;

	t16 = ((x81-x82)-(x83|x84));

	if (t16 != -11692336273LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x93 = INT64_MAX;
	uint8_t x96 = 9U;
	volatile uint64_t t17 = 15396704373641176LLU;

	t17 = ((x93-x94)-(x95|x96));

	if (t17 != 9126795967940794580LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 49591490520951579LL;
	int32_t x98 = INT32_MIN;
	int16_t x99 = 12;
	volatile uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t18 = 9484536489816692LLU;

	t18 = ((x97-x98)-(x99|x100));

	if (t18 != 49591492668435228LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x101 = UINT64_MAX;
	uint16_t x102 = UINT16_MAX;
	int64_t x104 = INT64_MIN;
	uint64_t t19 = 1346653LLU;

	t19 = ((x101-x102)-(x103|x104));

	if (t19 != 9223372036854710269LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x107 = UINT32_MAX;
	volatile int8_t x108 = INT8_MIN;
	int64_t t20 = -2272629952645447879LL;

	t20 = ((x105-x106)-(x107|x108));

	if (t20 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = -1LL;
	static uint64_t x110 = UINT64_MAX;
	int8_t x111 = 2;
	volatile int64_t x112 = INT64_MAX;
	static uint64_t t21 = 21937831860LLU;

	t21 = ((x109-x110)-(x111|x112));

	if (t21 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	static int16_t x115 = 35;

	t22 = ((x113-x114)-(x115|x116));

	if (t22 != 521981129) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int16_t x118 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t23 = 92;

	t23 = ((x117-x118)-(x119|x120));

	if (t23 != 384) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x121 = -2858;
	int32_t x122 = 374;
	volatile int8_t x124 = -1;

	t24 = ((x121-x122)-(x123|x124));

	if (t24 != -3231) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = INT32_MIN;
	int64_t x127 = INT64_MAX;
	int32_t x128 = INT32_MIN;

	t25 = ((x125-x126)-(x127|x128));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x129 = 31U;
	int8_t x130 = INT8_MAX;
	volatile int16_t x131 = 1;
	static uint32_t t26 = 3269018U;

	t26 = ((x129-x130)-(x131|x132));

	if (t26 != 4294967273U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = -1;
	static volatile int64_t x134 = 954459366LL;
	int8_t x136 = INT8_MIN;
	static int64_t t27 = -5394069478LL;

	t27 = ((x133-x134)-(x135|x136));

	if (t27 != -954459366LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MAX;
	static int32_t x144 = INT32_MAX;
	volatile uint64_t t28 = 1829827838788LLU;

	t28 = ((x141-x142)-(x143|x144));

	if (t28 != 18446744071562035202LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x149 = -13159;
	static uint16_t x150 = UINT16_MAX;
	static int16_t x151 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t29 = 60U;

	t29 = ((x149-x150)-(x151|x152));

	if (t29 != 4294888603U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x153 = 25974778975991992LLU;
	static volatile uint64_t x154 = 3093624LLU;
	static int16_t x155 = -47;

	t30 = ((x153-x154)-(x155|x156));

	if (t30 != 25974778972898415LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = -1;
	static int32_t x158 = -10702718;
	uint64_t x159 = UINT64_MAX;
	volatile int64_t x160 = -26LL;
	static uint64_t t31 = 264LLU;

	t31 = ((x157-x158)-(x159|x160));

	if (t31 != 10702718LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x162 = -1;
	uint16_t x163 = 40U;
	int32_t x164 = INT32_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x161-x162)-(x163|x164));

	if (t32 != 2147483642) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x165 = 523131U;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MAX;
	int8_t x168 = -1;
	uint32_t t33 = 2U;

	t33 = ((x165-x166)-(x167|x168));

	if (t33 != 555900U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 2046U;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t34 = 31090792U;

	t34 = ((x173-x174)-(x175|x176));

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x177 = 481U;
	int64_t x178 = -1LL;
	volatile int64_t x179 = -1LL;
	volatile int16_t x180 = INT16_MIN;
	volatile int64_t t35 = 2316339238092152738LL;

	t35 = ((x177-x178)-(x179|x180));

	if (t35 != 483LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = -7;
	uint8_t x182 = UINT8_MAX;
	static int32_t t36 = 1;

	t36 = ((x181-x182)-(x183|x184));

	if (t36 != -261) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	int32_t x188 = -1;
	int32_t t37 = -43897;

	t37 = ((x185-x186)-(x187|x188));

	if (t37 != -98302) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x189 = 116U;
	volatile int32_t x191 = 14845721;

	t38 = ((x189-x190)-(x191|x192));

	if (t38 != 598201U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x198 = INT16_MAX;
	static uint8_t x199 = 3U;
	int64_t x200 = INT64_MIN;
	int64_t t39 = 3697655895LL;

	t39 = ((x197-x198)-(x199|x200));

	if (t39 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = -778450;
	uint16_t x202 = 4U;
	uint64_t x203 = 3628265LLU;
	int16_t x204 = 6;
	static uint64_t t40 = 18515LLU;

	t40 = ((x201-x202)-(x203|x204));

	if (t40 != 18446744073705144891LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = INT8_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int16_t x208 = -4632;
	volatile int32_t t41 = -871126;

	t41 = ((x205-x206)-(x207|x208));

	if (t41 != -382) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MAX;
	int64_t x211 = -1LL;
	uint8_t x212 = 2U;
	static int64_t t42 = -170394091548LL;

	t42 = ((x209-x210)-(x211|x212));

	if (t42 != -32894LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 3LLU;
	int64_t x214 = INT64_MAX;
	volatile uint64_t t43 = 4449984LLU;

	t43 = ((x213-x214)-(x215|x216));

	if (t43 != 9223372036854775940LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MIN;
	volatile int8_t x218 = 1;
	int16_t x219 = INT16_MAX;
	static volatile int64_t x220 = -123630292LL;
	int64_t t44 = -12625LL;

	t44 = ((x217-x218)-(x219|x220));

	if (t44 != 123568128LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x221 = 26U;
	static int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MAX;
	int16_t x224 = -1172;

	t45 = ((x221-x222)-(x223|x224));

	if (t45 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	int64_t x228 = 5028635LL;
	int64_t t46 = 42982205445196LL;

	t46 = ((x225-x226)-(x227|x228));

	if (t46 != 2142455013LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = -6;
	uint8_t x230 = UINT8_MAX;
	static int32_t t47 = -493275;

	t47 = ((x229-x230)-(x231|x232));

	if (t47 != -260) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	int32_t x235 = -234715490;

	t48 = ((x233-x234)-(x235|x236));

	if (t48 != -2147483646) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x239 = -1;
	int8_t x240 = -1;
	int32_t t49 = 127781;

	t49 = ((x237-x238)-(x239|x240));

	if (t49 != 257) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x241 = -1;
	static int32_t x242 = -187510485;
	int8_t x244 = INT8_MIN;
	int32_t t50 = -2018665;

	t50 = ((x241-x242)-(x243|x244));

	if (t50 != 187510612) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = -11;
	int16_t x248 = -1;
	int32_t t51 = 190301192;

	t51 = ((x245-x246)-(x247|x248));

	if (t51 != 32837) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x252 = INT64_MAX;
	volatile int64_t t52 = 74858407757459LL;

	t52 = ((x249-x250)-(x251|x252));

	if (t52 != 3966LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x254 = UINT32_MAX;
	volatile int32_t x255 = 403891659;
	volatile int8_t x256 = INT8_MIN;

	t53 = ((x253-x254)-(x255|x256));

	if (t53 != 637136557396LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x262 = 3U;
	int16_t x263 = INT16_MAX;
	uint16_t x264 = 2U;

	t54 = ((x261-x262)-(x263|x264));

	if (t54 != -32771) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = INT32_MIN;
	static int8_t x270 = -6;
	int32_t x271 = INT32_MIN;
	static volatile uint32_t x272 = UINT32_MAX;
	volatile uint32_t t55 = 37U;

	t55 = ((x269-x270)-(x271|x272));

	if (t55 != 2147483655U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x273 = UINT32_MAX;
	static int32_t x274 = -5276;
	int64_t t56 = 468025672690LL;

	t56 = ((x273-x274)-(x275|x276));

	if (t56 != 5276LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x277 = 0;
	uint64_t x278 = 10364912875LLU;
	int32_t x279 = INT32_MIN;
	static int32_t x280 = 7705337;
	volatile uint64_t t57 = 3LLU;

	t57 = ((x277-x278)-(x279|x280));

	if (t57 != 18446744065484417052LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x282 = 1784523225U;
	int16_t x284 = INT16_MIN;
	uint32_t t58 = 155982403U;

	t58 = ((x281-x282)-(x283|x284));

	if (t58 != 2510476839U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x285 = 1617155854U;
	int8_t x287 = INT8_MIN;
	static uint32_t x288 = 3U;
	uint32_t t59 = 72398U;

	t59 = ((x285-x286)-(x287|x288));

	if (t59 != 2104578978U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x301 = 136306U;
	static uint16_t x303 = 11365U;
	int8_t x304 = INT8_MIN;
	uint32_t t60 = 1056293U;

	t60 = ((x301-x302)-(x303|x304));

	if (t60 != 136334U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x305 = UINT8_MAX;
	static uint8_t x306 = 13U;
	static volatile uint32_t x307 = 410127725U;
	int16_t x308 = -1;
	uint32_t t61 = 1U;

	t61 = ((x305-x306)-(x307|x308));

	if (t61 != 243U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = 216;
	uint16_t x310 = 0U;
	int32_t x311 = 161;
	int32_t x312 = 0;

	t62 = ((x309-x310)-(x311|x312));

	if (t62 != 55) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = INT8_MAX;
	static uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1748647;
	volatile int16_t x324 = -1021;
	volatile int32_t t63 = -35;

	t63 = ((x321-x322)-(x323|x324));

	if (t63 != 549) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = 0;
	int32_t x327 = INT32_MAX;
	static int8_t x328 = INT8_MAX;
	static volatile uint64_t t64 = 19735LLU;

	t64 = ((x325-x326)-(x327|x328));

	if (t64 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x329 = 1U;
	int64_t t65 = -994047120159245288LL;

	t65 = ((x329-x330)-(x331|x332));

	if (t65 != -57546615816062LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MAX;
	int32_t x335 = 48126170;
	static int16_t x336 = INT16_MIN;

	t66 = ((x333-x334)-(x335|x336));

	if (t66 != -22873) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x337 = UINT32_MAX;
	int64_t x338 = 59112234658LL;
	uint64_t x339 = 8682360034511893832LLU;
	volatile uint16_t x340 = 27521U;

	t67 = ((x337-x338)-(x339|x340));

	if (t67 != 9764383984380371348LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x341 = INT8_MAX;
	uint64_t x342 = 33442385314946LLU;
	uint64_t t68 = 4932109410762LLU;

	t68 = ((x341-x342)-(x343|x344));

	if (t68 != 18446710631324236798LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = 23;
	uint32_t x346 = 315777U;
	uint64_t x347 = 56631LLU;
	uint32_t x348 = UINT32_MAX;
	volatile uint64_t t69 = 2889196657LLU;

	t69 = ((x345-x346)-(x347|x348));

	if (t69 != 18446744073709235863LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x349 = 166392U;
	static uint8_t x350 = UINT8_MAX;
	volatile uint32_t t70 = 26012U;

	t70 = ((x349-x350)-(x351|x352));

	if (t70 != 166138U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x353 = 2227712055227LLU;
	volatile uint16_t x354 = 2U;
	int32_t x355 = INT32_MAX;
	static volatile uint64_t t71 = 223020926508191LLU;

	t71 = ((x353-x354)-(x355|x356));

	if (t71 != 2227712055226LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x359 = -9;
	static volatile uint16_t x360 = 486U;
	uint32_t t72 = 124U;

	t72 = ((x357-x358)-(x359|x360));

	if (t72 != 2147487002U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = -1;
	int64_t x362 = -1LL;
	int64_t x363 = -1LL;
	volatile int64_t t73 = 306388LL;

	t73 = ((x361-x362)-(x363|x364));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x366 = INT32_MIN;
	uint32_t x368 = 5U;
	uint64_t t74 = 23LLU;

	t74 = ((x365-x366)-(x367|x368));

	if (t74 != 50964637080625058LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x381 = -4464811697152155LL;
	uint32_t x382 = UINT32_MAX;
	static int64_t x383 = -13031LL;
	uint32_t x384 = UINT32_MAX;
	static volatile int64_t t75 = -15LL;

	t75 = ((x381-x382)-(x383|x384));

	if (t75 != -4464815992119449LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x385 = -1LL;
	int16_t x386 = INT16_MAX;
	static volatile int32_t x387 = INT32_MAX;
	static uint8_t x388 = 0U;

	t76 = ((x385-x386)-(x387|x388));

	if (t76 != -2147516415LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x390 = 447975U;
	static volatile int64_t x391 = INT64_MAX;
	int8_t x392 = 2;

	t77 = ((x389-x390)-(x391|x392));

	if (t77 != 9223372036854327833LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x395 = 1;
	int8_t x396 = INT8_MIN;
	int32_t t78 = 55;

	t78 = ((x393-x394)-(x395|x396));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x397 = 254188136U;
	int8_t x398 = INT8_MIN;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t79 = 793LLU;

	t79 = ((x397-x398)-(x399|x400));

	if (t79 != 254188265LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x401 = 4604954LLU;
	int32_t x402 = INT32_MAX;
	uint32_t x403 = UINT32_MAX;
	int16_t x404 = -8;
	static volatile uint64_t t80 = 338066062LLU;

	t80 = ((x401-x402)-(x403|x404));

	if (t80 != 18446744067271705628LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x406 = 89019972995576673LLU;
	uint8_t x407 = 3U;
	int16_t x408 = -1;
	volatile uint64_t t81 = 1126374678178935012LLU;

	t81 = ((x405-x406)-(x407|x408));

	if (t81 != 18357724100713979034LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x409 = UINT64_MAX;
	uint32_t x411 = 389U;
	int32_t x412 = INT32_MIN;
	volatile uint64_t t82 = 288650479115815260LLU;

	t82 = ((x409-x410)-(x411|x412));

	if (t82 != 18446744071562095678LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x414 = -11900;
	static int64_t x415 = INT64_MAX;
	uint16_t x416 = 6120U;
	volatile int64_t t83 = -6LL;

	t83 = ((x413-x414)-(x415|x416));

	if (t83 != -9223372036854764035LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x423 = INT8_MAX;

	t84 = ((x421-x422)-(x423|x424));

	if (t84 != 2147483815U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x430 = INT32_MIN;
	int16_t x431 = INT16_MIN;
	uint64_t x432 = 67516761534114LLU;
	uint64_t t85 = 238303187538896707LLU;

	t85 = ((x429-x430)-(x431|x432));

	if (t85 != 2147488032LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x434 = -262300780736518LL;
	volatile uint32_t x435 = 218U;
	int32_t x436 = INT32_MAX;

	t86 = ((x433-x434)-(x435|x436));

	if (t86 != 262298633252870LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x441 = 2;
	static uint32_t x442 = UINT32_MAX;
	int64_t x443 = INT64_MIN;
	uint16_t x444 = UINT16_MAX;
	volatile int64_t t87 = 9981523LL;

	t87 = ((x441-x442)-(x443|x444));

	if (t87 != 9223372036854710276LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x449 = 107602565U;
	uint64_t x450 = 3LLU;
	int32_t x451 = INT32_MAX;
	uint64_t x452 = 6275290603568LLU;
	volatile uint64_t t88 = 248LLU;

	t88 = ((x449-x450)-(x451|x452));

	if (t88 != 18446737796722451075LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MIN;
	volatile int16_t x454 = INT16_MIN;
	static volatile uint8_t x455 = 3U;
	static volatile int32_t x456 = 2597;
	static int32_t t89 = 741576;

	t89 = ((x453-x454)-(x455|x456));

	if (t89 != 30041) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x460 = INT16_MIN;
	volatile uint64_t t90 = 7044LLU;

	t90 = ((x457-x458)-(x459|x460));

	if (t90 != 18446744073387270361LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x461 = 175LLU;
	int16_t x462 = INT16_MIN;
	volatile uint8_t x463 = 0U;
	uint16_t x464 = UINT16_MAX;

	t91 = ((x461-x462)-(x463|x464));

	if (t91 != 18446744073709519024LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x465 = INT32_MIN;
	uint32_t x466 = 752669U;
	volatile int8_t x468 = INT8_MIN;

	t92 = ((x465-x466)-(x467|x468));

	if (t92 != 2146731107U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = -1;
	static int32_t x470 = -10;
	int32_t x471 = 102929097;
	static uint64_t x472 = 2LLU;

	t93 = ((x469-x470)-(x471|x472));

	if (t93 != 18446744073606622526LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x473 = UINT8_MAX;
	uint8_t x474 = 9U;
	int64_t x475 = INT64_MIN;
	volatile int64_t t94 = 24983194099974716LL;

	t94 = ((x473-x474)-(x475|x476));

	if (t94 != 63355248LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x477 = -2032;
	int16_t x478 = INT16_MIN;
	volatile int64_t x479 = 1827600597LL;
	static volatile int64_t x480 = INT64_MIN;
	static volatile int64_t t95 = -941308LL;

	t95 = ((x477-x478)-(x479|x480));

	if (t95 != 9223372035027205947LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x481 = 11U;
	int64_t x482 = -1LL;
	static volatile int8_t x483 = -24;
	volatile int16_t x484 = INT16_MIN;
	int64_t t96 = 1143102122255LL;

	t96 = ((x481-x482)-(x483|x484));

	if (t96 != 36LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x489 = UINT16_MAX;
	int32_t x490 = -1;
	int32_t x491 = INT32_MIN;
	volatile int32_t t97 = -177977262;

	t97 = ((x489-x490)-(x491|x492));

	if (t97 != 65537) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x501 = 311U;
	uint8_t x503 = 1U;
	uint32_t x504 = 32U;
	uint32_t t98 = 0U;

	t98 = ((x501-x502)-(x503|x504));

	if (t98 != 279U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x505 = UINT8_MAX;
	volatile int16_t x508 = INT16_MIN;

	t99 = ((x505-x506)-(x507|x508));

	if (t99 != 65791LL) { NG(); } else { ; }
	
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

