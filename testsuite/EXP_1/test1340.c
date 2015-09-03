#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 56129400;
volatile uint64_t t4 = 39038341LLU;
static int32_t x32 = INT32_MAX;
volatile int8_t x45 = -1;
volatile int32_t t11 = 1549;
volatile int32_t x50 = 6;
int8_t x57 = 0;
int64_t x69 = INT64_MAX;
int16_t x71 = -1;
int16_t x83 = INT16_MAX;
int64_t x84 = -7440542600969LL;
volatile int32_t x87 = -79884;
int32_t t20 = 1188;
static uint16_t x100 = 469U;
volatile int64_t t24 = -588816264525949LL;
int8_t x107 = INT8_MIN;
static volatile int64_t x121 = INT64_MIN;
uint64_t x127 = UINT64_MAX;
int32_t x133 = 4485;
int32_t x140 = -1;
uint64_t x151 = UINT64_MAX;
static uint16_t x154 = 455U;
int8_t x157 = 1;
int64_t x158 = INT64_MIN;
volatile int16_t x162 = INT16_MAX;
static int64_t t38 = -3837134LL;
uint8_t x165 = 58U;
int32_t x167 = -1;
int16_t x171 = INT16_MAX;
volatile int32_t x173 = -1;
static uint64_t x203 = 974673395179371LLU;
volatile uint8_t x204 = 7U;
int64_t x211 = INT64_MAX;
int32_t x220 = -1;
int64_t x223 = 1463522329821599LL;
int32_t x231 = -162;
int16_t x233 = INT16_MIN;
uint64_t x243 = 2102031639LLU;
uint64_t t55 = 44686LLU;
int64_t x245 = 437LL;
uint16_t x251 = 3615U;
volatile uint64_t t57 = 2285LLU;
int16_t x256 = INT16_MAX;
int32_t x258 = INT32_MIN;
volatile uint32_t x259 = UINT32_MAX;
int16_t x266 = INT16_MAX;
static volatile int16_t x270 = INT16_MAX;
static volatile int8_t x278 = -2;
uint64_t x280 = UINT64_MAX;
volatile int32_t t65 = -41;
uint32_t x291 = 555242214U;
uint32_t t66 = 2U;
int32_t t67 = 3;
volatile uint8_t x304 = UINT8_MAX;
int32_t t68 = -984023643;
int16_t x305 = -1;
static int8_t x307 = -1;
int32_t t69 = -9136657;
int32_t x312 = -1532987;
static int16_t x313 = -2;
int8_t x315 = -1;
static int64_t x317 = -51425714589LL;
int8_t x320 = 21;
uint32_t x325 = UINT32_MAX;
uint16_t x327 = 32271U;
static volatile uint8_t x339 = 34U;
int64_t x340 = INT64_MIN;
uint8_t x345 = 3U;
static uint64_t x347 = 79350294496973LLU;
int16_t x363 = INT16_MAX;
volatile uint16_t x366 = UINT16_MAX;
int64_t x373 = 5109620376871LL;
static int32_t x377 = INT32_MAX;
int8_t x384 = 11;
volatile int32_t t88 = 1225;
int16_t x386 = -1;
int64_t x388 = 1013785445016755LL;
static int64_t x394 = -1LL;
int16_t x395 = INT16_MAX;
static uint32_t x399 = 10U;
volatile int32_t x401 = 1667;
int16_t x402 = -1;
volatile int32_t x403 = INT32_MIN;
uint32_t x404 = UINT32_MAX;
uint32_t t93 = 295336U;
int64_t x405 = INT64_MAX;
int32_t x411 = 31287424;
int16_t x422 = 3949;
int64_t x426 = 9435759079755LL;
int8_t x427 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = 1794;
	volatile int32_t x3 = -1;
	uint16_t x4 = 1158U;

	t0 = (((x1==x2)^x3)+x4);

	if (t0 != 1157) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = -1LL;
	volatile int8_t x8 = -1;
	volatile int64_t t1 = -22443247321629823LL;

	t1 = (((x5==x6)^x7)+x8);

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int32_t x10 = -1976;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -208;

	t2 = (((x9==x10)^x11)+x12);

	if (t2 != -32896) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 98U;
	uint64_t x14 = 77828LLU;
	uint64_t x15 = UINT64_MAX;
	static volatile int32_t x16 = INT32_MIN;
	volatile uint64_t t3 = 49307LLU;

	t3 = (((x13==x14)^x15)+x16);

	if (t3 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -2;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -41100;
	uint64_t x20 = UINT64_MAX;

	t4 = (((x17==x18)^x19)+x20);

	if (t4 != 18446744073709510515LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x22 = -11559121;
	int16_t x23 = INT16_MAX;
	int64_t x24 = 14049167LL;
	int64_t t5 = 2LL;

	t5 = (((x21==x22)^x23)+x24);

	if (t5 != 14081934LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 3283844384682935LLU;
	volatile int8_t x26 = -23;
	volatile int32_t x27 = INT32_MIN;
	uint64_t x28 = 12950413775LLU;
	uint64_t t6 = 16980LLU;

	t6 = (((x25==x26)^x27)+x28);

	if (t6 != 10802930127LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = UINT16_MAX;
	uint64_t x31 = UINT64_MAX;
	uint64_t t7 = 4941186757795LLU;

	t7 = (((x29==x30)^x31)+x32);

	if (t7 != 2147483646LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 13687046203LLU;
	static volatile uint8_t x34 = 1U;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 1523;
	int32_t t8 = 108;

	t8 = (((x33==x34)^x35)+x36);

	if (t8 != -31245) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int8_t x38 = -1;
	uint64_t x39 = 1129535887027LLU;
	static int8_t x40 = -9;
	volatile uint64_t t9 = 16977826755937272LLU;

	t9 = (((x37==x38)^x39)+x40);

	if (t9 != 1129535887018LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	volatile int8_t x42 = INT8_MIN;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = 1406630750LLU;
	static volatile uint64_t t10 = 123085LLU;

	t10 = (((x41==x42)^x43)+x44);

	if (t10 != 1406631005LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 1U;
	int16_t x47 = INT16_MIN;
	int16_t x48 = -638;

	t11 = (((x45==x46)^x47)+x48);

	if (t11 != -33406) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static uint64_t x51 = 307952202461148LLU;
	int32_t x52 = 23;
	uint64_t t12 = 0LLU;

	t12 = (((x49==x50)^x51)+x52);

	if (t12 != 307952202461171LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MAX;
	int16_t x54 = 105;
	int16_t x55 = 237;
	uint8_t x56 = 14U;
	static int32_t t13 = 100;

	t13 = (((x53==x54)^x55)+x56);

	if (t13 != 251) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	int16_t x59 = -3;
	volatile uint8_t x60 = 14U;
	volatile int32_t t14 = -240;

	t14 = (((x57==x58)^x59)+x60);

	if (t14 != 11) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 11689U;

	t15 = (((x65==x66)^x67)+x68);

	if (t15 != 4294934527U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = 1;
	int8_t x72 = INT8_MIN;
	int32_t t16 = 1904292;

	t16 = (((x69==x70)^x71)+x72);

	if (t16 != -129) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 14;
	int16_t x74 = INT16_MAX;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MAX;
	static volatile int32_t t17 = -21392101;

	t17 = (((x73==x74)^x75)+x76);

	if (t17 != 382) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 283U;
	static uint16_t x78 = 3U;
	uint8_t x79 = 105U;
	int8_t x80 = INT8_MIN;
	static int32_t t18 = -1351149;

	t18 = (((x77==x78)^x79)+x80);

	if (t18 != -23) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	int64_t t19 = 22111884LL;

	t19 = (((x81==x82)^x83)+x84);

	if (t19 != -7440542568202LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	volatile uint16_t x86 = UINT16_MAX;
	uint16_t x88 = UINT16_MAX;

	t20 = (((x85==x86)^x87)+x88);

	if (t20 != -14349) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = -1;
	int64_t x91 = 66971024482LL;
	static int32_t x92 = INT32_MAX;
	static int64_t t21 = 13673LL;

	t21 = (((x89==x90)^x91)+x92);

	if (t21 != 69118508130LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	static uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MIN;
	int16_t x96 = -2951;
	int32_t t22 = -7;

	t22 = (((x93==x94)^x95)+x96);

	if (t22 != -35719) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MIN;
	uint16_t x98 = 2U;
	int16_t x99 = INT16_MAX;
	static int32_t t23 = -472935081;

	t23 = (((x97==x98)^x99)+x100);

	if (t23 != 33236) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = -1LL;
	int64_t x103 = -1LL;
	static volatile uint16_t x104 = 1667U;

	t24 = (((x101==x102)^x103)+x104);

	if (t24 != 1666LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int32_t x106 = -1;
	volatile uint64_t x108 = UINT64_MAX;
	uint64_t t25 = 0LLU;

	t25 = (((x105==x106)^x107)+x108);

	if (t25 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 80LLU;
	int8_t x110 = -1;
	static uint16_t x111 = 2669U;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t26 = -71239;

	t26 = (((x109==x110)^x111)+x112);

	if (t26 != 2924) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -247289138LL;
	int64_t x114 = -1LL;
	volatile uint16_t x115 = UINT16_MAX;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t27 = -591;

	t27 = (((x113==x114)^x115)+x116);

	if (t27 != 65407) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	uint8_t x118 = 3U;
	int64_t x119 = INT64_MAX;
	uint64_t x120 = 71685985LLU;
	volatile uint64_t t28 = 1921939510LLU;

	t28 = (((x117==x118)^x119)+x120);

	if (t28 != 9223372036926461792LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x122 = UINT32_MAX;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = -1884LL;
	volatile uint64_t t29 = 14007455477140LLU;

	t29 = (((x121==x122)^x123)+x124);

	if (t29 != 18446744073709549731LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 1U;
	static int16_t x126 = INT16_MIN;
	int8_t x128 = -2;
	volatile uint64_t t30 = 1072461801473716518LLU;

	t30 = (((x125==x126)^x127)+x128);

	if (t30 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	volatile int8_t x130 = INT8_MAX;
	static uint16_t x131 = 469U;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t31 = -1024066625;

	t31 = (((x129==x130)^x131)+x132);

	if (t31 != 596) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = 219248030991LL;
	uint32_t x135 = 3U;
	uint8_t x136 = 4U;
	uint32_t t32 = 591U;

	t32 = (((x133==x134)^x135)+x136);

	if (t32 != 7U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = INT64_MIN;
	volatile uint16_t x138 = UINT16_MAX;
	int8_t x139 = 6;
	volatile int32_t t33 = -494;

	t33 = (((x137==x138)^x139)+x140);

	if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = INT32_MIN;
	static int32_t x142 = INT32_MIN;
	uint64_t x143 = 1022LLU;
	static int32_t x144 = INT32_MIN;
	volatile uint64_t t34 = 1798568227557383LLU;

	t34 = (((x141==x142)^x143)+x144);

	if (t34 != 18446744071562068991LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	volatile int64_t x152 = -12557559LL;
	uint64_t t35 = 17677150LLU;

	t35 = (((x149==x150)^x151)+x152);

	if (t35 != 18446744073696994056LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 13U;
	volatile uint32_t x155 = UINT32_MAX;
	int32_t x156 = 68;
	uint32_t t36 = 203U;

	t36 = (((x153==x154)^x155)+x156);

	if (t36 != 67U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x159 = INT32_MIN;
	volatile int64_t x160 = -1797LL;
	int64_t t37 = 130720494734129LL;

	t37 = (((x157==x158)^x159)+x160);

	if (t37 != -2147485445LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x161 = 1955849149LLU;
	volatile uint32_t x163 = UINT32_MAX;
	int64_t x164 = 127063767180LL;

	t38 = (((x161==x162)^x163)+x164);

	if (t38 != 131358734475LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x166 = 52U;
	static volatile int16_t x168 = 1459;
	int32_t t39 = 0;

	t39 = (((x165==x166)^x167)+x168);

	if (t39 != 1458) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MAX;
	int16_t x172 = -57;
	volatile int32_t t40 = 205491016;

	t40 = (((x169==x170)^x171)+x172);

	if (t40 != 32710) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MAX;
	uint64_t x175 = UINT64_MAX;
	int8_t x176 = 1;
	volatile uint64_t t41 = 15233174828440945LLU;

	t41 = (((x173==x174)^x175)+x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	uint32_t x180 = 991841U;
	volatile uint32_t t42 = 246561U;

	t42 = (((x177==x178)^x179)+x180);

	if (t42 != 991840U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x181 = 948LLU;
	int32_t x182 = -25;
	int64_t x183 = -1LL;
	int16_t x184 = 210;
	static volatile int64_t t43 = -108644602504099385LL;

	t43 = (((x181==x182)^x183)+x184);

	if (t43 != 209LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x189 = 1051U;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 7703841780741633824LLU;
	uint64_t x192 = 291191785765LLU;
	uint64_t t44 = 29002866317LLU;

	t44 = (((x189==x190)^x191)+x192);

	if (t44 != 7703842071933419589LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = 261517LL;
	int32_t x198 = INT32_MIN;
	static uint16_t x199 = 7U;
	static int16_t x200 = -166;
	volatile int32_t t45 = -1;

	t45 = (((x197==x198)^x199)+x200);

	if (t45 != -159) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -1LL;
	int16_t x202 = INT16_MIN;
	uint64_t t46 = 36556230802LLU;

	t46 = (((x201==x202)^x203)+x204);

	if (t46 != 974673395179378LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 24304U;
	int8_t x210 = INT8_MIN;
	uint64_t x212 = 200012LLU;
	uint64_t t47 = 19715805069280797LLU;

	t47 = (((x209==x210)^x211)+x212);

	if (t47 != 9223372036854975819LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 14U;
	int32_t x214 = INT32_MIN;
	static uint16_t x215 = UINT16_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t48 = -6228086;

	t48 = (((x213==x214)^x215)+x216);

	if (t48 != 65407) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x218 = 1U;
	int16_t x219 = 8208;
	static int32_t t49 = 1585;

	t49 = (((x217==x218)^x219)+x220);

	if (t49 != 8207) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 109241U;
	int32_t x222 = INT32_MAX;
	int8_t x224 = INT8_MIN;
	volatile int64_t t50 = 424467251LL;

	t50 = (((x221==x222)^x223)+x224);

	if (t50 != 1463522329821471LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	static int16_t x227 = -7;
	uint16_t x228 = UINT16_MAX;
	int32_t t51 = -726;

	t51 = (((x225==x226)^x227)+x228);

	if (t51 != 65528) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -1;
	volatile uint8_t x230 = UINT8_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t52 = -1;

	t52 = (((x229==x230)^x231)+x232);

	if (t52 != -32930) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x234 = 2U;
	static uint64_t x235 = 2306693846217LLU;
	uint32_t x236 = 0U;
	uint64_t t53 = 600LLU;

	t53 = (((x233==x234)^x235)+x236);

	if (t53 != 2306693846217LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -45;
	volatile uint8_t x238 = 1U;
	static int16_t x239 = INT16_MIN;
	uint8_t x240 = 3U;
	volatile int32_t t54 = -1036;

	t54 = (((x237==x238)^x239)+x240);

	if (t54 != -32765) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = -1;
	int8_t x242 = -1;
	uint16_t x244 = 0U;

	t55 = (((x241==x242)^x243)+x244);

	if (t55 != 2102031638LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x246 = -1;
	int32_t x247 = INT32_MAX;
	uint8_t x248 = 0U;
	int32_t t56 = INT32_MAX;

	t56 = (((x245==x246)^x247)+x248);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = -1;
	int16_t x250 = 55;
	uint64_t x252 = 1120785692101030134LLU;

	t57 = (((x249==x250)^x251)+x252);

	if (t57 != 1120785692101033749LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x253 = INT32_MAX;
	int64_t x254 = -1LL;
	uint8_t x255 = 1U;
	int32_t t58 = -6;

	t58 = (((x253==x254)^x255)+x256);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x257 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	uint32_t t59 = 962363233U;

	t59 = (((x257==x258)^x259)+x260);

	if (t59 != 4294934527U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = INT64_MIN;
	static int8_t x262 = INT8_MAX;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t60 = 8LLU;

	t60 = (((x261==x262)^x263)+x264);

	if (t60 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = -1;
	static int64_t x267 = -1LL;
	int16_t x268 = INT16_MIN;
	volatile int64_t t61 = 246530516168394LL;

	t61 = (((x265==x266)^x267)+x268);

	if (t61 != -32769LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = 2291986;
	static uint64_t x271 = 451816683LLU;
	int64_t x272 = INT64_MIN;
	static uint64_t t62 = 3136788LLU;

	t62 = (((x269==x270)^x271)+x272);

	if (t62 != 9223372037306592491LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	static uint8_t x275 = 6U;
	uint32_t x276 = 1703644U;
	static uint32_t t63 = 70960086U;

	t63 = (((x273==x274)^x275)+x276);

	if (t63 != 1703650U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x277 = INT32_MIN;
	static uint32_t x279 = 1U;
	static volatile uint64_t t64 = 252425973893554271LLU;

	t64 = (((x277==x278)^x279)+x280);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = -1;
	volatile uint8_t x286 = UINT8_MAX;
	uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = -1;

	t65 = (((x285==x286)^x287)+x288);

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -12;
	int32_t x290 = INT32_MIN;
	uint16_t x292 = 1U;

	t66 = (((x289==x290)^x291)+x292);

	if (t66 != 555242215U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x297 = -1LL;
	static uint16_t x298 = UINT16_MAX;
	int8_t x299 = -1;
	int16_t x300 = -227;

	t67 = (((x297==x298)^x299)+x300);

	if (t67 != -228) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = 7366;
	int16_t x303 = INT16_MIN;

	t68 = (((x301==x302)^x303)+x304);

	if (t68 != -32513) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x306 = INT16_MAX;
	int16_t x308 = INT16_MAX;

	t69 = (((x305==x306)^x307)+x308);

	if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = UINT64_MAX;
	int64_t x311 = -1LL;
	static int64_t t70 = -262792750806LL;

	t70 = (((x309==x310)^x311)+x312);

	if (t70 != -1532988LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x314 = -1;
	static int16_t x316 = -597;
	volatile int32_t t71 = -16202393;

	t71 = (((x313==x314)^x315)+x316);

	if (t71 != -598) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x318 = 24U;
	uint8_t x319 = 0U;
	int32_t t72 = -161720446;

	t72 = (((x317==x318)^x319)+x320);

	if (t72 != 21) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x321 = 248047881970LLU;
	static int8_t x322 = 9;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MAX;
	volatile int32_t t73 = 820742764;

	t73 = (((x321==x322)^x323)+x324);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x326 = INT64_MIN;
	volatile int16_t x328 = INT16_MIN;
	int32_t t74 = 0;

	t74 = (((x325==x326)^x327)+x328);

	if (t74 != -497) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 3U;
	volatile int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	int64_t x332 = -52LL;
	int64_t t75 = 105613497408390838LL;

	t75 = (((x329==x330)^x331)+x332);

	if (t75 != -2147483700LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 2LLU;
	uint8_t x334 = UINT8_MAX;
	volatile int16_t x335 = -35;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t76 = -16089;

	t76 = (((x333==x334)^x335)+x336);

	if (t76 != 65500) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 56896U;
	uint16_t x338 = 3U;
	volatile int64_t t77 = 19LL;

	t77 = (((x337==x338)^x339)+x340);

	if (t77 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 6206U;
	int16_t x342 = INT16_MIN;
	int32_t x343 = 0;
	uint32_t x344 = UINT32_MAX;
	static volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x341==x342)^x343)+x344);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x346 = UINT32_MAX;
	static int64_t x348 = -211403565255LL;
	static uint64_t t79 = 255LLU;

	t79 = (((x345==x346)^x347)+x348);

	if (t79 != 79138890931718LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MIN;
	volatile int8_t x352 = 7;
	int32_t t80 = -31811883;

	t80 = (((x349==x350)^x351)+x352);

	if (t80 != -2147483641) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x353 = INT32_MAX;
	static int8_t x354 = -7;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = -31490;
	static int32_t t81 = 16603598;

	t81 = (((x353==x354)^x355)+x356);

	if (t81 != -31235) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 1U;
	volatile uint8_t x358 = UINT8_MAX;
	static int8_t x359 = INT8_MAX;
	int32_t x360 = 0;
	int32_t t82 = -692;

	t82 = (((x357==x358)^x359)+x360);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = 1U;
	uint32_t x362 = 290U;
	volatile int8_t x364 = -1;
	int32_t t83 = 331969;

	t83 = (((x361==x362)^x363)+x364);

	if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = 0;
	int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MAX;
	volatile int32_t t84 = -2;

	t84 = (((x365==x366)^x367)+x368);

	if (t84 != -2147450881) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = -1;
	uint32_t x371 = 15148827U;
	int16_t x372 = -256;
	volatile uint32_t t85 = 465163U;

	t85 = (((x369==x370)^x371)+x372);

	if (t85 != 15148571U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x374 = UINT32_MAX;
	volatile uint64_t x375 = 6LLU;
	volatile int8_t x376 = INT8_MAX;
	volatile uint64_t t86 = 932808095680LLU;

	t86 = (((x373==x374)^x375)+x376);

	if (t86 != 133LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	static volatile int32_t t87 = -122;

	t87 = (((x377==x378)^x379)+x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MAX;
	static volatile int32_t x382 = INT32_MAX;
	uint16_t x383 = 6U;

	t88 = (((x381==x382)^x383)+x384);

	if (t88 != 17) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = 21U;
	int32_t x387 = INT32_MIN;
	volatile int64_t t89 = -17831409692LL;

	t89 = (((x385==x386)^x387)+x388);

	if (t89 != 1013783297533107LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x389 = 15907053779280233LLU;
	int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MIN;
	int16_t x392 = INT16_MIN;
	volatile int32_t t90 = -7703;

	t90 = (((x389==x390)^x391)+x392);

	if (t90 != -32896) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	static int64_t x396 = INT64_MIN;
	volatile int64_t t91 = 5348477806LL;

	t91 = (((x393==x394)^x395)+x396);

	if (t91 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MAX;
	int8_t x400 = 1;
	uint32_t t92 = 17U;

	t92 = (((x397==x398)^x399)+x400);

	if (t92 != 11U) { NG(); } else { ; }
	
}

void f93(void) {


	t93 = (((x401==x402)^x403)+x404);

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = 3893533871921719275LL;
	uint32_t x408 = 2364U;
	volatile int64_t t94 = -20996841LL;

	t94 = (((x405==x406)^x407)+x408);

	if (t94 != 3893533871921721639LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = -1;
	int8_t x410 = -1;
	int16_t x412 = INT16_MIN;
	volatile int32_t t95 = 0;

	t95 = (((x409==x410)^x411)+x412);

	if (t95 != 31254657) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x413 = INT16_MAX;
	int32_t x414 = INT32_MIN;
	int64_t x415 = -57974558582LL;
	volatile int8_t x416 = 9;
	int64_t t96 = 937LL;

	t96 = (((x413==x414)^x415)+x416);

	if (t96 != -57974558573LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x421 = INT16_MIN;
	int8_t x423 = INT8_MAX;
	int64_t x424 = INT64_MIN;
	volatile int64_t t97 = 53809771581728516LL;

	t97 = (((x421==x422)^x423)+x424);

	if (t97 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MIN;
	volatile int32_t x428 = -1;
	volatile int32_t t98 = 28042;

	t98 = (((x425==x426)^x427)+x428);

	if (t98 != -129) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x429 = INT64_MIN;
	volatile int8_t x430 = -1;
	int32_t x431 = INT32_MIN;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t99 = 3065;

	t99 = (((x429==x430)^x431)+x432);

	if (t99 != -2147450881) { NG(); } else { ; }
	
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

