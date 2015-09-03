#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static volatile uint64_t t0 = 11603899669LLU;
int32_t x11 = INT32_MIN;
static uint32_t x29 = 13724U;
int8_t x32 = 1;
uint32_t t4 = 334U;
int16_t x65 = INT16_MIN;
uint32_t x66 = UINT32_MAX;
int8_t x76 = -1;
int8_t x77 = INT8_MIN;
uint64_t x80 = UINT64_MAX;
static uint64_t t8 = 4624676911LLU;
int32_t x81 = INT32_MIN;
uint16_t x83 = 79U;
uint16_t x84 = UINT16_MAX;
static volatile int16_t x90 = -1;
volatile uint8_t x104 = 0U;
volatile uint32_t x105 = UINT32_MAX;
int32_t x107 = -42;
int32_t x116 = -132569;
int32_t x134 = -1;
uint64_t x140 = 30865510313933LLU;
static uint16_t x142 = 0U;
static volatile int8_t x151 = INT8_MIN;
volatile uint64_t x154 = UINT64_MAX;
int32_t x161 = INT32_MAX;
int8_t x165 = -1;
int32_t x176 = INT32_MIN;
int16_t x183 = 2249;
int32_t t29 = 491763938;
uint32_t x205 = 1302441634U;
static volatile int32_t t32 = -5356129;
int8_t x244 = INT8_MIN;
uint8_t x246 = 1U;
int64_t x248 = INT64_MAX;
static volatile int16_t x266 = -1;
uint64_t t36 = 15199760LLU;
uint32_t x269 = 251887U;
int64_t x271 = INT64_MAX;
uint32_t x278 = 171U;
volatile uint32_t t38 = 20333U;
static uint64_t x290 = 98977LLU;
static volatile uint64_t t40 = 22902139794LLU;
volatile int8_t x297 = INT8_MIN;
int64_t x298 = -281538939730880817LL;
int16_t x301 = 10;
static uint16_t x311 = 48U;
int16_t x314 = INT16_MIN;
static volatile uint32_t x317 = 685565U;
int32_t x319 = 287791795;
int8_t x321 = INT8_MIN;
int64_t x323 = -4178557875337278298LL;
volatile int8_t x327 = -1;
static int64_t x328 = INT64_MIN;
static volatile int16_t x330 = INT16_MIN;
int64_t x333 = -1LL;
int64_t x336 = INT64_MAX;
uint16_t x338 = 31U;
int32_t x357 = INT32_MIN;
int64_t x391 = -2622479LL;
static uint32_t x394 = 13U;
int16_t x402 = INT16_MIN;
int8_t x410 = INT8_MIN;
int32_t t62 = 53133;
volatile uint64_t t63 = 2434LLU;
static int64_t x417 = -1LL;
uint64_t x418 = UINT64_MAX;
volatile uint64_t t64 = 0LLU;
int64_t x428 = INT64_MIN;
int64_t x430 = -1LL;
uint16_t x432 = 3U;
int64_t t67 = 46212966457122LL;
static int8_t x445 = INT8_MIN;
int32_t x448 = INT32_MAX;
int32_t t68 = 132706794;
static uint64_t x449 = UINT64_MAX;
static uint64_t t70 = 48152778LLU;
static int8_t x477 = -1;
volatile int16_t x478 = INT16_MIN;
uint8_t x485 = UINT8_MAX;
int32_t x488 = INT32_MAX;
int16_t x503 = INT16_MAX;
volatile uint64_t t74 = 45LLU;
static volatile int32_t x510 = INT32_MIN;
uint16_t x533 = UINT16_MAX;
int16_t x534 = INT16_MIN;
int64_t x535 = -1LL;
int16_t x555 = 0;
volatile uint16_t x556 = UINT16_MAX;
static int32_t t82 = 1;
volatile uint16_t x567 = 135U;
int8_t x568 = INT8_MAX;
uint64_t x578 = UINT64_MAX;
uint64_t t87 = 2LLU;
int16_t x598 = INT16_MIN;
static int32_t t88 = -520637;
int32_t x601 = INT32_MIN;
volatile uint64_t t89 = 52LLU;
int32_t x611 = INT32_MAX;
uint64_t x612 = 99667419841936LLU;
volatile uint64_t t91 = 7345384788010933LLU;
static int16_t x613 = INT16_MIN;
int16_t x618 = -1;
int32_t x620 = INT32_MIN;
volatile uint8_t x622 = UINT8_MAX;
static uint64_t x629 = 393392932468465635LLU;
static int8_t x630 = 17;
int16_t x632 = -1;
int32_t x633 = INT32_MIN;
volatile int32_t x636 = INT32_MIN;
volatile int64_t t97 = -12LL;
uint32_t x637 = 280047U;
int64_t x644 = -522335LL;
uint64_t t99 = 55665849966724913LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint64_t x2 = 1LLU;
	volatile int64_t x4 = INT64_MAX;

	t0 = ((x1-x2)<<(x3<=x4));

	if (t0 != 4294967292LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x9 = 0LLU;
	int8_t x10 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	static volatile uint64_t t1 = 29073963LLU;

	t1 = ((x9-x10)<<(x11<=x12));

	if (t1 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x21 = -1LL;
	int16_t x22 = -1;
	int8_t x23 = INT8_MAX;
	static int8_t x24 = INT8_MAX;
	volatile int64_t t2 = 3471690906368395LL;

	t2 = ((x21-x22)<<(x23<=x24));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x25 = -54;
	static int64_t x26 = -3675380514713LL;
	int32_t x27 = INT32_MAX;
	static int16_t x28 = INT16_MAX;
	volatile int64_t t3 = 8595LL;

	t3 = ((x25-x26)<<(x27<=x28));

	if (t3 != 3675380514659LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x30 = 81341;
	static int64_t x31 = INT64_MIN;

	t4 = ((x29-x30)<<(x31<=x32));

	if (t4 != 4294832062U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = INT64_MIN;
	static int64_t x58 = INT64_MIN;
	volatile int32_t x59 = INT32_MAX;
	static uint16_t x60 = UINT16_MAX;
	static int64_t t5 = 1406137254579LL;

	t5 = ((x57-x58)<<(x59<=x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x67 = -1;
	int64_t x68 = INT64_MAX;
	volatile uint32_t t6 = 4U;

	t6 = ((x65-x66)<<(x67<=x68));

	if (t6 != 4294901762U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x73 = INT8_MAX;
	int8_t x74 = 9;
	uint16_t x75 = 1U;
	static int32_t t7 = -37836;

	t7 = ((x73-x74)<<(x75<=x76));

	if (t7 != 118) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x78 = 739794048406043LLU;
	volatile int32_t x79 = -1;

	t8 = ((x77-x78)<<(x79<=x80));

	if (t8 != 18445264485612739274LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x82 = 68951328U;
	volatile uint32_t t9 = 1473511058U;

	t9 = ((x81-x82)<<(x83<=x84));

	if (t9 != 4157064640U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x89 = UINT32_MAX;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	uint32_t t10 = 4U;

	t10 = ((x89-x90)<<(x91<=x92));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x101 = INT16_MIN;
	static int64_t x102 = -79490LL;
	static uint8_t x103 = UINT8_MAX;
	static int64_t t11 = 5550170808LL;

	t11 = ((x101-x102)<<(x103<=x104));

	if (t11 != 46722LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x106 = 2U;
	int64_t x108 = INT64_MIN;
	volatile uint32_t t12 = 211320U;

	t12 = ((x105-x106)<<(x107<=x108));

	if (t12 != 4294967293U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x109 = 7421;
	static int32_t x110 = -1;
	static int64_t x111 = -63439355624086722LL;
	int16_t x112 = -112;
	int32_t t13 = 7106;

	t13 = ((x109-x110)<<(x111<=x112));

	if (t13 != 14844) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x113 = -1;
	volatile uint64_t x114 = 0LLU;
	volatile int32_t x115 = INT32_MIN;
	volatile uint64_t t14 = 475LLU;

	t14 = ((x113-x114)<<(x115<=x116));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x121 = -1;
	int8_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t15 = -128908;

	t15 = ((x121-x122)<<(x123<=x124));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x133 = 59U;
	uint16_t x135 = 2U;
	int64_t x136 = INT64_MAX;
	int32_t t16 = 75;

	t16 = ((x133-x134)<<(x135<=x136));

	if (t16 != 120) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x137 = -1;
	uint64_t x138 = 1345118684421154952LLU;
	int8_t x139 = INT8_MAX;
	volatile uint64_t t17 = 98656343LLU;

	t17 = ((x137-x138)<<(x139<=x140));

	if (t17 != 15756506704867241710LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x141 = INT64_MAX;
	int16_t x143 = 267;
	static int8_t x144 = INT8_MIN;
	volatile int64_t t18 = INT64_MAX;

	t18 = ((x141-x142)<<(x143<=x144));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x145 = INT32_MAX;
	volatile uint32_t x146 = 1955U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 1801;
	volatile uint32_t t19 = 392206364U;

	t19 = ((x145-x146)<<(x147<=x148));

	if (t19 != 4294963384U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x149 = -50;
	int8_t x150 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t20 = -477362;

	t20 = ((x149-x150)<<(x151<=x152));

	if (t20 != 156) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x155 = 0U;
	static int32_t x156 = INT32_MAX;
	uint64_t t21 = 14850LLU;

	t21 = ((x153-x154)<<(x155<=x156));

	if (t21 != 512LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x157 = 2U;
	static int8_t x158 = 0;
	uint64_t x159 = 188238LLU;
	int16_t x160 = INT16_MAX;
	static int32_t t22 = -5;

	t22 = ((x157-x158)<<(x159<=x160));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = 106U;
	int64_t x164 = INT64_MAX;
	uint32_t t23 = 218U;

	t23 = ((x161-x162)<<(x163<=x164));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x166 = 6U;
	uint8_t x167 = 4U;
	static int16_t x168 = 12208;
	uint32_t t24 = 12906258U;

	t24 = ((x165-x166)<<(x167<=x168));

	if (t24 != 4294967282U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x169 = UINT64_MAX;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	volatile uint64_t t25 = 38041578843545876LLU;

	t25 = ((x169-x170)<<(x171<=x172));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint32_t x174 = 54682U;
	uint32_t x175 = 15418105U;
	static volatile uint32_t t26 = 115429U;

	t26 = ((x173-x174)<<(x175<=x176));

	if (t26 != 4294858442U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	volatile uint32_t t27 = 12U;

	t27 = ((x181-x182)<<(x183<=x184));

	if (t27 != 2147483649U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 3901U;
	uint16_t x187 = 35U;
	int32_t x188 = INT32_MIN;
	static uint32_t t28 = 10U;

	t28 = ((x185-x186)<<(x187<=x188));

	if (t28 != 4294963394U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = 1775;
	int32_t x190 = -1;
	int32_t x191 = 315525995;
	uint32_t x192 = UINT32_MAX;

	t29 = ((x189-x190)<<(x191<=x192));

	if (t29 != 3552) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 0U;
	volatile int16_t x199 = -82;
	int64_t x200 = 150674LL;
	uint64_t t30 = 1085769224LLU;

	t30 = ((x197-x198)<<(x199<=x200));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	uint32_t t31 = 66671U;

	t31 = ((x205-x206)<<(x207<=x208));

	if (t31 != 1302441635U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x209 = 1503072;
	int32_t x210 = 183;
	uint32_t x211 = 47734U;
	int64_t x212 = -1LL;

	t32 = ((x209-x210)<<(x211<=x212));

	if (t32 != 1502889) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x221 = UINT32_MAX;
	static uint64_t x222 = 4478889LLU;
	int64_t x223 = -1LL;
	static int8_t x224 = 1;
	static uint64_t t33 = 79LLU;

	t33 = ((x221-x222)<<(x223<=x224));

	if (t33 != 8580976812LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x241 = UINT16_MAX;
	volatile int8_t x242 = -27;
	volatile int64_t x243 = INT64_MAX;
	int32_t t34 = 61;

	t34 = ((x241-x242)<<(x243<=x244));

	if (t34 != 65562) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	uint32_t t35 = 13351U;

	t35 = ((x245-x246)<<(x247<=x248));

	if (t35 != 4294967292U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x265 = 14LLU;
	static int32_t x267 = 1439;
	int32_t x268 = INT32_MIN;

	t36 = ((x265-x266)<<(x267<=x268));

	if (t36 != 15LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x270 = -63420019923751378LL;
	int32_t x272 = 10329093;
	int64_t t37 = 11569653LL;

	t37 = ((x269-x270)<<(x271<=x272));

	if (t37 != 63420019924003265LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = INT16_MIN;
	int64_t x279 = -1LL;
	static int16_t x280 = INT16_MAX;

	t38 = ((x277-x278)<<(x279<=x280));

	if (t38 != 4294901418U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x285 = 323LLU;
	int8_t x286 = -1;
	static int8_t x287 = 3;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t39 = 5428LLU;

	t39 = ((x285-x286)<<(x287<=x288));

	if (t39 != 324LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x289 = 943873756LL;
	int8_t x291 = -1;
	uint64_t x292 = 67056818LLU;

	t40 = ((x289-x290)<<(x291<=x292));

	if (t40 != 943774779LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x299 = -2491234473750470710LL;
	uint64_t x300 = UINT64_MAX;
	static volatile int64_t t41 = -4048815LL;

	t41 = ((x297-x298)<<(x299<=x300));

	if (t41 != 563077879461761378LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x302 = 0;
	volatile int16_t x303 = -1;
	volatile int16_t x304 = 688;
	int32_t t42 = -1965024;

	t42 = ((x301-x302)<<(x303<=x304));

	if (t42 != 20) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x305 = INT32_MAX;
	static int64_t x306 = -1LL;
	volatile uint16_t x307 = UINT16_MAX;
	uint64_t x308 = 1LLU;
	static volatile int64_t t43 = 3786182LL;

	t43 = ((x305-x306)<<(x307<=x308));

	if (t43 != 2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x309 = 494640U;
	volatile uint32_t x310 = 30U;
	volatile uint32_t x312 = 13U;
	volatile uint32_t t44 = 18476133U;

	t44 = ((x309-x310)<<(x311<=x312));

	if (t44 != 494610U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x313 = 2LLU;
	volatile int8_t x315 = 0;
	static uint64_t x316 = 749LLU;
	volatile uint64_t t45 = 1035065862294LLU;

	t45 = ((x313-x314)<<(x315<=x316));

	if (t45 != 65540LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x318 = -1;
	uint8_t x320 = 50U;
	volatile uint32_t t46 = 237250386U;

	t46 = ((x317-x318)<<(x319<=x320));

	if (t46 != 685566U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x322 = INT8_MIN;
	static int64_t x324 = INT64_MIN;
	static int32_t t47 = -6189683;

	t47 = ((x321-x322)<<(x323<=x324));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x325 = 3663182968330226LLU;
	static int8_t x326 = -1;
	uint64_t t48 = 236LLU;

	t48 = ((x325-x326)<<(x327<=x328));

	if (t48 != 3663182968330227LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x329 = 49727807U;
	volatile int32_t x331 = INT32_MIN;
	volatile uint16_t x332 = 16U;
	uint32_t t49 = 745650118U;

	t49 = ((x329-x330)<<(x331<=x332));

	if (t49 != 99521150U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x334 = -1;
	uint8_t x335 = 2U;
	int64_t t50 = -1848LL;

	t50 = ((x333-x334)<<(x335<=x336));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x337 = 67064220U;
	static int16_t x339 = INT16_MAX;
	static volatile int8_t x340 = INT8_MIN;
	volatile uint32_t t51 = 2975328U;

	t51 = ((x337-x338)<<(x339<=x340));

	if (t51 != 67064189U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x353 = INT64_MAX;
	static uint64_t x354 = 1484979655141LLU;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MAX;
	uint64_t t52 = 225441068LLU;

	t52 = ((x353-x354)<<(x355<=x356));

	if (t52 != 18446741103750241332LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x358 = 1U;
	static volatile uint8_t x359 = 51U;
	int8_t x360 = INT8_MAX;
	static volatile uint32_t t53 = 25220U;

	t53 = ((x357-x358)<<(x359<=x360));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x365 = 67742353U;
	int16_t x366 = 24;
	int64_t x367 = INT64_MIN;
	int8_t x368 = -1;
	volatile uint32_t t54 = 7684495U;

	t54 = ((x365-x366)<<(x367<=x368));

	if (t54 != 135484658U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x369 = INT16_MAX;
	static int8_t x370 = 29;
	uint32_t x371 = 261173U;
	volatile int64_t x372 = INT64_MIN;
	int32_t t55 = 334166;

	t55 = ((x369-x370)<<(x371<=x372));

	if (t55 != 32738) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -1;
	static volatile int32_t t56 = -449799964;

	t56 = ((x373-x374)<<(x375<=x376));

	if (t56 != 510) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x377 = 9LLU;
	volatile uint8_t x378 = 19U;
	volatile int64_t x379 = INT64_MAX;
	static int32_t x380 = 1;
	uint64_t t57 = 116375899059473231LLU;

	t57 = ((x377-x378)<<(x379<=x380));

	if (t57 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x389 = INT16_MAX;
	volatile uint16_t x390 = 41U;
	int16_t x392 = INT16_MAX;
	static int32_t t58 = -41872;

	t58 = ((x389-x390)<<(x391<=x392));

	if (t58 != 65452) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x393 = 30898040323825LLU;
	static int16_t x395 = INT16_MIN;
	uint8_t x396 = 8U;
	volatile uint64_t t59 = 30332346121101LLU;

	t59 = ((x393-x394)<<(x395<=x396));

	if (t59 != 61796080647624LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x401 = -9275;
	int16_t x403 = -118;
	int8_t x404 = 1;
	volatile int32_t t60 = -44798;

	t60 = ((x401-x402)<<(x403<=x404));

	if (t60 != 46986) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x405 = 25639323U;
	int8_t x406 = INT8_MAX;
	int16_t x407 = -3;
	static volatile int32_t x408 = INT32_MIN;
	uint32_t t61 = 19385U;

	t61 = ((x405-x406)<<(x407<=x408));

	if (t61 != 25639196U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x409 = -1;
	int16_t x411 = -7;
	uint8_t x412 = 10U;

	t62 = ((x409-x410)<<(x411<=x412));

	if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = -1;
	volatile int32_t x416 = INT32_MIN;

	t63 = ((x413-x414)<<(x415<=x416));

	if (t63 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x419 = INT16_MIN;
	static volatile int8_t x420 = -1;

	t64 = ((x417-x418)<<(x419<=x420));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x421 = -2188;
	uint32_t x422 = 6U;
	uint16_t x423 = 13084U;
	volatile uint64_t x424 = UINT64_MAX;
	uint32_t t65 = 12015U;

	t65 = ((x421-x422)<<(x423<=x424));

	if (t65 != 4294962908U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = -30091;
	int16_t x427 = 5;
	int32_t t66 = -436909;

	t66 = ((x425-x426)<<(x427<=x428));

	if (t66 != 29963) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x429 = 33561280U;
	static volatile int16_t x431 = INT16_MAX;

	t67 = ((x429-x430)<<(x431<=x432));

	if (t67 != 33561281LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x446 = INT8_MIN;
	int64_t x447 = INT64_MIN;

	t68 = ((x445-x446)<<(x447<=x448));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x450 = 3896598;
	volatile uint8_t x451 = 11U;
	int16_t x452 = INT16_MIN;
	uint64_t t69 = 67984696805035072LLU;

	t69 = ((x449-x450)<<(x451<=x452));

	if (t69 != 18446744073705655017LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x453 = 36U;
	uint64_t x454 = UINT64_MAX;
	int8_t x455 = -1;
	uint32_t x456 = 1305126U;

	t70 = ((x453-x454)<<(x455<=x456));

	if (t70 != 37LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x469 = -25;
	int8_t x470 = INT8_MIN;
	volatile uint32_t x471 = 871552771U;
	volatile uint64_t x472 = 14813340LLU;
	volatile int32_t t71 = -418481065;

	t71 = ((x469-x470)<<(x471<=x472));

	if (t71 != 103) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x479 = INT32_MAX;
	int64_t x480 = -3401830544139992LL;
	int32_t t72 = 34378;

	t72 = ((x477-x478)<<(x479<=x480));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x486 = -1;
	int8_t x487 = -7;
	volatile int32_t t73 = -281;

	t73 = ((x485-x486)<<(x487<=x488));

	if (t73 != 512) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x501 = -1291;
	uint64_t x502 = 38089LLU;
	int16_t x504 = INT16_MIN;

	t74 = ((x501-x502)<<(x503<=x504));

	if (t74 != 18446744073709512236LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x509 = UINT32_MAX;
	int8_t x511 = 37;
	uint8_t x512 = 20U;
	volatile uint32_t t75 = 424394217U;

	t75 = ((x509-x510)<<(x511<=x512));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x513 = 2;
	static int16_t x514 = INT16_MIN;
	uint32_t x515 = UINT32_MAX;
	uint64_t x516 = 287060606826825LLU;
	int32_t t76 = -2692303;

	t76 = ((x513-x514)<<(x515<=x516));

	if (t76 != 65540) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x525 = 19721LLU;
	uint32_t x526 = 1U;
	int64_t x527 = 15LL;
	int32_t x528 = -2440;
	volatile uint64_t t77 = 19LLU;

	t77 = ((x525-x526)<<(x527<=x528));

	if (t77 != 19720LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x529 = INT8_MAX;
	int8_t x530 = 4;
	int32_t x531 = INT32_MIN;
	int16_t x532 = -1;
	int32_t t78 = 3;

	t78 = ((x529-x530)<<(x531<=x532));

	if (t78 != 246) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x536 = UINT16_MAX;
	volatile int32_t t79 = 101590940;

	t79 = ((x533-x534)<<(x535<=x536));

	if (t79 != 196606) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x545 = INT8_MIN;
	uint32_t x546 = 0U;
	int64_t x547 = INT64_MAX;
	volatile int32_t x548 = INT32_MAX;
	volatile uint32_t t80 = 856U;

	t80 = ((x545-x546)<<(x547<=x548));

	if (t80 != 4294967168U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x549 = -447LL;
	volatile uint64_t x550 = UINT64_MAX;
	int8_t x551 = -1;
	int16_t x552 = -1;
	volatile uint64_t t81 = 196164156610340711LLU;

	t81 = ((x549-x550)<<(x551<=x552));

	if (t81 != 18446744073709550724LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x553 = INT8_MIN;
	int16_t x554 = INT16_MIN;

	t82 = ((x553-x554)<<(x555<=x556));

	if (t82 != 65280) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x557 = 1468386754400839264LL;
	volatile int32_t x558 = INT32_MIN;
	int8_t x559 = -18;
	uint32_t x560 = 5U;
	static int64_t t83 = 7414750334958LL;

	t83 = ((x557-x558)<<(x559<=x560));

	if (t83 != 1468386756548322912LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x561 = -1;
	volatile int64_t x562 = -5609851LL;
	int16_t x563 = INT16_MAX;
	uint8_t x564 = 4U;
	volatile int64_t t84 = 82863518772575LL;

	t84 = ((x561-x562)<<(x563<=x564));

	if (t84 != 5609850LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x565 = -394;
	static volatile int32_t x566 = INT32_MIN;
	int32_t t85 = -5996407;

	t85 = ((x565-x566)<<(x567<=x568));

	if (t85 != 2147483254) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x577 = -1;
	int64_t x579 = INT64_MIN;
	int64_t x580 = INT64_MAX;
	static uint64_t t86 = 65369LLU;

	t86 = ((x577-x578)<<(x579<=x580));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x593 = 3U;
	uint64_t x594 = UINT64_MAX;
	uint64_t x595 = 117LLU;
	uint64_t x596 = 8116813131965286387LLU;

	t87 = ((x593-x594)<<(x595<=x596));

	if (t87 != 8LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x597 = 29U;
	int32_t x599 = -531944;
	int16_t x600 = 1111;

	t88 = ((x597-x598)<<(x599<=x600));

	if (t88 != 65594) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x602 = 718985LLU;
	static uint64_t x603 = UINT64_MAX;
	uint64_t x604 = 13006LLU;

	t89 = ((x601-x602)<<(x603<=x604));

	if (t89 != 18446744071561348983LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x605 = 9U;
	int16_t x606 = INT16_MIN;
	uint16_t x607 = 488U;
	uint32_t x608 = 832159U;
	volatile int32_t t90 = 1402;

	t90 = ((x605-x606)<<(x607<=x608));

	if (t90 != 65554) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x609 = 30848776296265LLU;
	int8_t x610 = -1;

	t91 = ((x609-x610)<<(x611<=x612));

	if (t91 != 61697552592532LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x614 = 3059LLU;
	int16_t x615 = INT16_MIN;
	uint32_t x616 = UINT32_MAX;
	uint64_t t92 = 7954862383311593LLU;

	t92 = ((x613-x614)<<(x615<=x616));

	if (t92 != 18446744073709479962LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x617 = UINT8_MAX;
	static int8_t x619 = INT8_MIN;
	int32_t t93 = 4649;

	t93 = ((x617-x618)<<(x619<=x620));

	if (t93 != 256) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x621 = 5425282LL;
	int8_t x623 = INT8_MIN;
	uint8_t x624 = 7U;
	static int64_t t94 = -2808356141675585181LL;

	t94 = ((x621-x622)<<(x623<=x624));

	if (t94 != 10850054LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x625 = -1;
	int32_t x626 = -1;
	static int16_t x627 = INT16_MAX;
	int64_t x628 = INT64_MIN;
	volatile int32_t t95 = 3;

	t95 = ((x625-x626)<<(x627<=x628));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x631 = -1;
	volatile uint64_t t96 = 322LLU;

	t96 = ((x629-x630)<<(x631<=x632));

	if (t96 != 786785864936931236LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x634 = -135841312068393979LL;
	uint8_t x635 = UINT8_MAX;

	t97 = ((x633-x634)<<(x635<=x636));

	if (t97 != 135841309920910331LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x638 = UINT64_MAX;
	volatile int64_t x639 = 95951158077850065LL;
	int64_t x640 = -1521087LL;
	uint64_t t98 = 117LLU;

	t98 = ((x637-x638)<<(x639<=x640));

	if (t98 != 280048LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x641 = -1LL;
	uint64_t x642 = UINT64_MAX;
	uint32_t x643 = UINT32_MAX;

	t99 = ((x641-x642)<<(x643<=x644));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

