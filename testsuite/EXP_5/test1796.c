#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x4 = 1085600337551130LLU;
int8_t x5 = -1;
volatile int32_t t1 = -897;
static volatile int16_t x10 = INT16_MIN;
int32_t t2 = -1;
int8_t x15 = INT8_MIN;
int64_t x16 = 1512LL;
uint64_t x21 = 272794LLU;
int16_t x34 = INT16_MIN;
uint8_t x37 = UINT8_MAX;
int8_t x42 = INT8_MIN;
int64_t x44 = INT64_MIN;
int64_t x52 = -118630539LL;
static int32_t x55 = -3;
int32_t t14 = -194898;
uint16_t x70 = UINT16_MAX;
volatile int64_t x75 = INT64_MIN;
int32_t t16 = -1;
int16_t x90 = INT16_MIN;
uint32_t x94 = 5137996U;
int8_t x96 = INT8_MAX;
uint8_t x98 = 109U;
volatile int32_t x102 = INT32_MAX;
int8_t x107 = INT8_MIN;
volatile int32_t t24 = 56796705;
int16_t x119 = INT16_MAX;
static volatile int64_t t28 = -6076270002LL;
int16_t x127 = 1;
static int32_t t30 = 86584368;
int8_t x134 = INT8_MIN;
volatile uint16_t x137 = 32U;
static volatile int32_t t34 = -41;
volatile int8_t x150 = -2;
int32_t x154 = INT32_MIN;
int64_t t36 = -25071750934664LL;
uint32_t x163 = UINT32_MAX;
volatile int16_t x173 = INT16_MAX;
static int8_t x176 = INT8_MIN;
static volatile int16_t x179 = 1;
int32_t t42 = 53;
int16_t x196 = -1;
volatile int32_t t45 = -246;
static volatile int64_t x203 = INT64_MAX;
volatile int32_t t47 = 362;
static int8_t x209 = -1;
uint64_t x214 = 2664916962584222LLU;
static int32_t x218 = INT32_MAX;
int16_t x228 = INT16_MIN;
volatile uint16_t x233 = UINT16_MAX;
uint32_t x234 = 709521U;
static uint32_t x236 = UINT32_MAX;
int32_t t55 = 84591;
static uint16_t x241 = UINT16_MAX;
int32_t x243 = INT32_MIN;
volatile uint32_t x254 = 154092U;
int8_t x264 = 3;
int8_t x268 = INT8_MIN;
static volatile int32_t t61 = INT32_MIN;
uint64_t x271 = 114621814571024758LLU;
int64_t x276 = -1LL;
int8_t x278 = INT8_MIN;
volatile int32_t t66 = -2135;
uint8_t x289 = UINT8_MAX;
int16_t x293 = 4158;
static volatile int32_t t68 = -373828730;
int8_t x302 = 4;
uint32_t x308 = 25U;
int64_t x309 = 30488368786306LL;
volatile uint32_t x310 = 30081U;
int32_t x318 = -63;
int16_t x320 = INT16_MIN;
volatile int64_t t73 = INT64_MAX;
volatile uint16_t x322 = UINT16_MAX;
volatile int64_t x324 = INT64_MIN;
static int32_t t74 = -2;
int32_t t75 = 169;
volatile int32_t t81 = -12357;
static int16_t x353 = INT16_MAX;
uint32_t x363 = 123457U;
int64_t x372 = -7953LL;
int64_t x373 = INT64_MAX;
int64_t x375 = 50825343769348144LL;
static uint64_t x376 = UINT64_MAX;
static int32_t x377 = INT32_MAX;
int32_t t88 = INT32_MAX;
uint32_t x381 = UINT32_MAX;
int32_t t92 = -73043;
int16_t x398 = INT16_MIN;
int32_t t93 = -447035435;
int16_t x401 = INT16_MAX;
volatile int64_t x406 = -555415647702561192LL;
static volatile uint16_t x410 = UINT16_MAX;
int64_t x411 = INT64_MIN;
volatile int32_t t97 = 595;
volatile int8_t x418 = INT8_MIN;
static uint64_t x419 = 1567LLU;


void f0(void) {
	static int16_t x1 = 3203;
	int32_t x2 = -11018613;
	static volatile int32_t x3 = 996330;
	volatile int32_t t0 = -52276;

	t0 = (x1-((x2&x3)<x4));

	if (t0 != 3202) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;

	t1 = (x5-((x6&x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x11 = UINT64_MAX;
	uint64_t x12 = UINT64_MAX;

	t2 = (x9-((x10&x11)<x12));

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x14 = 22U;
	volatile int32_t t3 = -2;

	t3 = (x13-((x14&x15)<x16));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 8077;
	volatile int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int32_t x20 = 32;
	int32_t t4 = 2540177;

	t4 = (x17-((x18&x19)<x20));

	if (t4 != 8076) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 12;
	volatile uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MIN;
	static volatile uint64_t t5 = 42248818046LLU;

	t5 = (x21-((x22&x23)<x24));

	if (t5 != 272794LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 2U;
	int32_t x30 = INT32_MAX;
	int32_t x31 = -6;
	volatile uint8_t x32 = 10U;
	static volatile int32_t t6 = 15709223;

	t6 = (x29-((x30&x31)<x32));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = 12;
	int32_t x35 = INT32_MIN;
	int16_t x36 = 3;
	int32_t t7 = -401250823;

	t7 = (x33-((x34&x35)<x36));

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x38 = 521918838704871LLU;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 61U;
	int32_t t8 = -31801949;

	t8 = (x37-((x38&x39)<x40));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 1U;
	static int64_t x43 = -1LL;
	static volatile int32_t t9 = -9324;

	t9 = (x41-((x42&x43)<x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 50U;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = -12;
	uint32_t x48 = 3U;
	int32_t t10 = -506779197;

	t10 = (x45-((x46&x47)<x48));

	if (t10 != 50) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 21;
	int16_t x50 = -1;
	int16_t x51 = INT16_MAX;
	volatile int32_t t11 = -251;

	t11 = (x49-((x50&x51)<x52));

	if (t11 != 21) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 61U;
	int32_t x54 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	int32_t t12 = -4;

	t12 = (x53-((x54&x55)<x56));

	if (t12 != 60) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	static volatile int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int64_t t13 = -574542492LL;

	t13 = (x61-((x62&x63)<x64));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 186752;
	int8_t x66 = INT8_MAX;
	static uint16_t x67 = 0U;
	uint16_t x68 = UINT16_MAX;

	t14 = (x65-((x66&x67)<x68));

	if (t14 != 186751) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	uint32_t x71 = 315271225U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 367991041;

	t15 = (x69-((x70&x71)<x72));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x73 = INT16_MAX;
	uint64_t x74 = 19293500626LLU;
	int8_t x76 = INT8_MIN;

	t16 = (x73-((x74&x75)<x76));

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = 114U;
	uint64_t x78 = 397694536LLU;
	uint64_t x79 = 1101LLU;
	volatile uint8_t x80 = 0U;
	int32_t t17 = 30062228;

	t17 = (x77-((x78&x79)<x80));

	if (t17 != 114) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 36U;
	uint64_t x82 = UINT64_MAX;
	static uint64_t x83 = 787LLU;
	volatile int8_t x84 = -4;
	uint32_t t18 = 12U;

	t18 = (x81-((x82&x83)<x84));

	if (t18 != 35U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	uint8_t x86 = 0U;
	int16_t x87 = INT16_MIN;
	static int32_t x88 = INT32_MIN;
	int32_t t19 = 439436525;

	t19 = (x85-((x86&x87)<x88));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x89 = -2026;
	volatile uint32_t x91 = UINT32_MAX;
	static volatile int8_t x92 = INT8_MIN;
	int32_t t20 = 111356;

	t20 = (x89-((x90&x91)<x92));

	if (t20 != -2027) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x95 = -3319;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x93-((x94&x95)<x96));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	volatile uint16_t x99 = UINT16_MAX;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t22 = 5335;

	t22 = (x97-((x98&x99)<x100));

	if (t22 != -129) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	int32_t x103 = INT32_MAX;
	int16_t x104 = INT16_MAX;
	static volatile int32_t t23 = 1019736;

	t23 = (x101-((x102&x103)<x104));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	uint8_t x106 = 3U;
	volatile uint64_t x108 = 9LLU;

	t24 = (x105-((x106&x107)<x108));

	if (t24 != -32769) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x109 = UINT8_MAX;
	int16_t x110 = -25;
	int64_t x111 = INT64_MAX;
	static int32_t x112 = 225;
	int32_t t25 = -1;

	t25 = (x109-((x110&x111)<x112));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 770794125U;
	int8_t x114 = INT8_MAX;
	int16_t x115 = 14;
	uint32_t x116 = 343U;
	uint32_t t26 = 7691415U;

	t26 = (x113-((x114&x115)<x116));

	if (t26 != 770794124U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = INT8_MAX;
	static int8_t x120 = -1;
	static volatile uint32_t t27 = UINT32_MAX;

	t27 = (x117-((x118&x119)<x120));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = -4859553604224LL;
	int16_t x122 = 3;
	static uint16_t x123 = UINT16_MAX;
	uint64_t x124 = UINT64_MAX;

	t28 = (x121-((x122&x123)<x124));

	if (t28 != -4859553604225LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x125 = UINT64_MAX;
	volatile uint8_t x126 = UINT8_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile uint64_t t29 = 2381LLU;

	t29 = (x125-((x126&x127)<x128));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = -350208LL;
	int64_t x131 = INT64_MIN;
	static int16_t x132 = -1;

	t30 = (x129-((x130&x131)<x132));

	if (t30 != -129) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x133 = 0;
	static int64_t x135 = 26809005844246515LL;
	volatile uint64_t x136 = 174519363458LLU;
	int32_t t31 = -8775;

	t31 = (x133-((x134&x135)<x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x138 = 785243U;
	uint8_t x139 = UINT8_MAX;
	volatile uint64_t x140 = 191LLU;
	int32_t t32 = -1;

	t32 = (x137-((x138&x139)<x140));

	if (t32 != 31) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 26018007576938LLU;
	uint64_t x144 = 69258LLU;
	int32_t t33 = INT32_MAX;

	t33 = (x141-((x142&x143)<x144));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 0;
	uint16_t x146 = 3U;
	volatile uint8_t x147 = 0U;
	volatile int16_t x148 = INT16_MAX;

	t34 = (x145-((x146&x147)<x148));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x151 = 127377U;
	static uint16_t x152 = 3U;
	static int32_t t35 = -356;

	t35 = (x149-((x150&x151)<x152));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MAX;
	uint32_t x155 = 101375U;
	int32_t x156 = INT32_MIN;

	t36 = (x153-((x154&x155)<x156));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	static int64_t t37 = INT64_MIN;

	t37 = (x157-((x158&x159)<x160));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x161 = 362478408225080LLU;
	uint8_t x162 = UINT8_MAX;
	int32_t x164 = INT32_MIN;
	static volatile uint64_t t38 = 38552LLU;

	t38 = (x161-((x162&x163)<x164));

	if (t38 != 362478408225079LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = -1;
	static int16_t x167 = 1;
	int16_t x168 = 921;
	volatile int32_t t39 = -243;

	t39 = (x165-((x166&x167)<x168));

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x174 = 1;
	int16_t x175 = 0;
	volatile int32_t t40 = -16561;

	t40 = (x173-((x174&x175)<x176));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	static int32_t x178 = INT32_MAX;
	volatile int32_t x180 = 1;
	int32_t t41 = 29915668;

	t41 = (x177-((x178&x179)<x180));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x185 = 1U;
	volatile int8_t x186 = -9;
	int64_t x187 = -1LL;
	int16_t x188 = 55;

	t42 = (x185-((x186&x187)<x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MAX;
	uint8_t x190 = 50U;
	int16_t x191 = -1;
	volatile int16_t x192 = INT16_MIN;
	static int32_t t43 = 33254;

	t43 = (x189-((x190&x191)<x192));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -1LL;
	uint32_t x194 = 6U;
	uint16_t x195 = UINT16_MAX;
	int64_t t44 = 7041945677574089LL;

	t44 = (x193-((x194&x195)<x196));

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	static uint16_t x199 = 1U;
	uint8_t x200 = 1U;

	t45 = (x197-((x198&x199)<x200));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = INT64_MIN;
	static int16_t x202 = INT16_MAX;
	volatile int8_t x204 = 47;
	int64_t t46 = INT64_MIN;

	t46 = (x201-((x202&x203)<x204));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 18U;
	static int32_t x206 = 14348453;
	int64_t x207 = INT64_MIN;
	int64_t x208 = -1LL;

	t47 = (x205-((x206&x207)<x208));

	if (t47 != 18) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x210 = INT8_MIN;
	volatile int64_t x211 = INT64_MAX;
	volatile uint32_t x212 = 1507138U;
	static volatile int32_t t48 = -1;

	t48 = (x209-((x210&x211)<x212));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 10U;
	int64_t x215 = INT64_MIN;
	int8_t x216 = 27;
	uint32_t t49 = 1329026U;

	t49 = (x213-((x214&x215)<x216));

	if (t49 != 9U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = -468374;
	uint16_t x219 = 29U;
	uint8_t x220 = 88U;
	static int32_t t50 = -40487501;

	t50 = (x217-((x218&x219)<x220));

	if (t50 != -468375) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = -1;
	uint64_t x223 = 17240503550575LLU;
	uint32_t x224 = 182U;
	int32_t t51 = -1680709;

	t51 = (x221-((x222&x223)<x224));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = -1;
	volatile int64_t x227 = -1LL;
	int32_t t52 = -745918;

	t52 = (x225-((x226&x227)<x228));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = INT8_MIN;
	int8_t x231 = -1;
	int16_t x232 = 15121;
	volatile int32_t t53 = -1;

	t53 = (x229-((x230&x231)<x232));

	if (t53 != 126) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x235 = 44U;
	int32_t t54 = 1378450;

	t54 = (x233-((x234&x235)<x236));

	if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = 608533410;
	static int64_t x238 = 12449758129304477LL;
	int16_t x239 = -1300;
	uint8_t x240 = 47U;

	t55 = (x237-((x238&x239)<x240));

	if (t55 != 608533410) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x242 = -1;
	int64_t x244 = -2829LL;
	static int32_t t56 = 4180691;

	t56 = (x241-((x242&x243)<x244));

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x245 = 405512U;
	int16_t x246 = -13606;
	volatile int64_t x247 = 140755079LL;
	int8_t x248 = -2;
	volatile uint32_t t57 = 1608U;

	t57 = (x245-((x246&x247)<x248));

	if (t57 != 405512U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x249 = -1;
	int8_t x250 = INT8_MIN;
	static volatile int16_t x251 = -5559;
	int8_t x252 = -14;
	int32_t t58 = -217;

	t58 = (x249-((x250&x251)<x252));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MAX;
	uint16_t x255 = 31U;
	uint8_t x256 = UINT8_MAX;
	static volatile int64_t t59 = -196821780515594641LL;

	t59 = (x253-((x254&x255)<x256));

	if (t59 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = -1LL;
	int16_t x262 = INT16_MIN;
	int8_t x263 = -1;
	int64_t t60 = -3367980910350578LL;

	t60 = (x261-((x262&x263)<x264));

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = -1;
	int8_t x267 = 23;

	t61 = (x265-((x266&x267)<x268));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -1;
	uint32_t x270 = 56416403U;
	volatile int16_t x272 = INT16_MAX;
	volatile int32_t t62 = 243;

	t62 = (x269-((x270&x271)<x272));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = 48;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = UINT16_MAX;
	volatile int32_t t63 = -1;

	t63 = (x273-((x274&x275)<x276));

	if (t63 != 48) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -3847;
	static uint64_t x279 = 56599667933428LLU;
	int8_t x280 = 3;
	volatile int32_t t64 = 219260;

	t64 = (x277-((x278&x279)<x280));

	if (t64 != -3847) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 18309LLU;
	uint16_t x282 = 3491U;
	volatile uint64_t x283 = 1242510318491LLU;
	static int64_t x284 = -1LL;
	static volatile uint64_t t65 = 2LLU;

	t65 = (x281-((x282&x283)<x284));

	if (t65 != 18308LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -1;
	int16_t x287 = -1;
	uint64_t x288 = UINT64_MAX;

	t66 = (x285-((x286&x287)<x288));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MAX;
	int16_t x292 = -192;
	int32_t t67 = 99954016;

	t67 = (x289-((x290&x291)<x292));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x294 = 56U;
	uint64_t x295 = 236296544LLU;
	int16_t x296 = INT16_MIN;

	t68 = (x293-((x294&x295)<x296));

	if (t68 != 4157) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x297 = 1765;
	int32_t x298 = INT32_MIN;
	static uint8_t x299 = 7U;
	static int16_t x300 = -1;
	int32_t t69 = 14;

	t69 = (x297-((x298&x299)<x300));

	if (t69 != 1765) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = 2686510349989416054LL;
	static int16_t x303 = 428;
	int32_t x304 = -15;
	static volatile int64_t t70 = -541777167083354984LL;

	t70 = (x301-((x302&x303)<x304));

	if (t70 != 2686510349989416054LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = UINT16_MAX;
	static int64_t x306 = -1LL;
	int64_t x307 = -1LL;
	int32_t t71 = -14152027;

	t71 = (x305-((x306&x307)<x308));

	if (t71 != 65534) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x311 = INT16_MIN;
	volatile uint64_t x312 = UINT64_MAX;
	volatile int64_t t72 = 85LL;

	t72 = (x309-((x310&x311)<x312));

	if (t72 != 30488368786305LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = INT64_MAX;
	int64_t x319 = INT64_MAX;

	t73 = (x317-((x318&x319)<x320));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x321 = INT16_MIN;
	static volatile uint32_t x323 = 1154241887U;

	t74 = (x321-((x322&x323)<x324));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x325 = 1427U;
	volatile int64_t x326 = -1LL;
	int32_t x327 = -1059017;
	volatile int16_t x328 = INT16_MIN;

	t75 = (x325-((x326&x327)<x328));

	if (t75 != 1426) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = 10275U;
	static volatile int64_t x331 = -1LL;
	static volatile uint64_t x332 = 2044677801827599LLU;
	volatile int32_t t76 = 1039635746;

	t76 = (x329-((x330&x331)<x332));

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = -75607;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -11067;
	volatile int32_t t77 = 2316;

	t77 = (x333-((x334&x335)<x336));

	if (t77 != -75608) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint32_t x338 = UINT32_MAX;
	static int64_t x339 = -1LL;
	int8_t x340 = INT8_MIN;
	volatile int32_t t78 = 150121327;

	t78 = (x337-((x338&x339)<x340));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = -10;
	int32_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	static uint8_t x344 = 6U;
	int32_t t79 = 20808643;

	t79 = (x341-((x342&x343)<x344));

	if (t79 != -10) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	volatile uint64_t x348 = 256545191557999266LLU;
	volatile int32_t t80 = -355955869;

	t80 = (x345-((x346&x347)<x348));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = 0;
	int8_t x350 = -2;
	volatile int64_t x351 = 25LL;
	int64_t x352 = -231750LL;

	t81 = (x349-((x350&x351)<x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x354 = 110;
	int8_t x355 = INT8_MIN;
	static uint8_t x356 = 1U;
	volatile int32_t t82 = -10497575;

	t82 = (x353-((x354&x355)<x356));

	if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = 240636U;
	uint8_t x358 = UINT8_MAX;
	static int32_t x359 = -367349639;
	int32_t x360 = -517;
	uint32_t t83 = 20037U;

	t83 = (x357-((x358&x359)<x360));

	if (t83 != 240636U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x361 = 3U;
	static int8_t x362 = INT8_MIN;
	volatile int8_t x364 = -1;
	int32_t t84 = -178;

	t84 = (x361-((x362&x363)<x364));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = -9;
	uint64_t x366 = 139929061147908LLU;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = -1;
	int32_t t85 = 1;

	t85 = (x365-((x366&x367)<x368));

	if (t85 != -10) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	int32_t t86 = -19907;

	t86 = (x369-((x370&x371)<x372));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x374 = -1;
	volatile int64_t t87 = -138300872614LL;

	t87 = (x373-((x374&x375)<x376));

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x378 = INT8_MIN;
	int64_t x379 = -1LL;
	int64_t x380 = INT64_MIN;

	t88 = (x377-((x378&x379)<x380));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x382 = INT64_MIN;
	uint8_t x383 = UINT8_MAX;
	static uint32_t x384 = 58481U;
	uint32_t t89 = 12275139U;

	t89 = (x381-((x382&x383)<x384));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	volatile int16_t x387 = -1;
	int32_t x388 = INT32_MAX;
	int32_t t90 = -17;

	t90 = (x385-((x386&x387)<x388));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x389 = -26;
	int64_t x390 = -97533928450LL;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = -1;
	int32_t t91 = -43837743;

	t91 = (x389-((x390&x391)<x392));

	if (t91 != -27) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MIN;
	volatile uint8_t x394 = 13U;
	int64_t x395 = 8410505799682996LL;
	int32_t x396 = 1426;

	t92 = (x393-((x394&x395)<x396));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x399 = -1;
	static uint32_t x400 = 30623U;

	t93 = (x397-((x398&x399)<x400));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = -1;
	int16_t x403 = INT16_MIN;
	volatile int64_t x404 = INT64_MIN;
	int32_t t94 = -3269211;

	t94 = (x401-((x402&x403)<x404));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = 255482630488LL;
	uint64_t x407 = 29559726378065128LLU;
	volatile uint32_t x408 = 1168997U;
	int64_t t95 = -4994418011LL;

	t95 = (x405-((x406&x407)<x408));

	if (t95 != 255482630488LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x409 = 21729807773071715LL;
	int8_t x412 = INT8_MAX;
	int64_t t96 = -4174409LL;

	t96 = (x409-((x410&x411)<x412));

	if (t96 != 21729807773071714LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = 37;
	int64_t x415 = -1LL;
	uint8_t x416 = UINT8_MAX;

	t97 = (x413-((x414&x415)<x416));

	if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x417 = 79004531481336532LL;
	int16_t x420 = INT16_MIN;
	int64_t t98 = 241645384452854LL;

	t98 = (x417-((x418&x419)<x420));

	if (t98 != 79004531481336531LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x421 = -1;
	int16_t x422 = 3;
	static uint16_t x423 = 5U;
	int32_t x424 = INT32_MAX;
	volatile int32_t t99 = -16896;

	t99 = (x421-((x422&x423)<x424));

	if (t99 != -2) { NG(); } else { ; }
	
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

