#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 2U;
uint32_t x3 = UINT32_MAX;
static int32_t t0 = 1;
int16_t x10 = INT16_MIN;
volatile int32_t t4 = 20098765;
uint16_t x27 = 29U;
static int16_t x52 = 1616;
volatile int32_t t11 = -16569;
uint16_t x55 = UINT16_MAX;
volatile int64_t x56 = INT64_MIN;
static int32_t t12 = -2;
int8_t x59 = INT8_MIN;
int32_t t13 = 1718;
volatile uint16_t x61 = UINT16_MAX;
int8_t x62 = 5;
uint8_t x66 = 7U;
int16_t x74 = INT16_MIN;
int64_t x78 = -1LL;
int8_t x80 = INT8_MIN;
uint8_t x81 = UINT8_MAX;
int32_t x87 = INT32_MIN;
uint8_t x88 = UINT8_MAX;
volatile int32_t t20 = -15921;
int8_t x89 = 1;
int32_t x97 = 606594203;
uint64_t x99 = 14988016039LLU;
int32_t x101 = INT32_MIN;
volatile int32_t t24 = -105042454;
int8_t x105 = INT8_MIN;
int8_t x112 = INT8_MAX;
int32_t t26 = -47388;
static int8_t x113 = 1;
volatile int32_t x116 = 201494285;
int16_t x120 = -1;
volatile int8_t x123 = INT8_MIN;
static uint8_t x129 = UINT8_MAX;
uint8_t x134 = 11U;
static int16_t x138 = -1;
volatile int32_t t33 = -51;
int32_t x144 = INT32_MIN;
int32_t x153 = 162665273;
volatile int32_t t37 = -38009456;
int16_t x160 = 1;
int32_t t39 = -206355160;
int16_t x169 = -6199;
static int16_t x170 = -1;
uint32_t x171 = 269U;
int32_t x172 = INT32_MIN;
static uint16_t x177 = 5332U;
int16_t x178 = INT16_MAX;
int32_t x179 = -495150;
int64_t x181 = 354406LL;
static uint32_t x190 = 987U;
volatile int32_t x191 = INT32_MAX;
int32_t x192 = -1;
int16_t x194 = -334;
uint8_t x195 = UINT8_MAX;
int64_t x196 = -1LL;
static int32_t t47 = -1;
uint32_t x198 = 4072U;
int16_t x204 = INT16_MAX;
volatile int32_t t50 = -5;
uint64_t x210 = 1596250843436LLU;
int32_t x213 = -1;
int64_t x214 = INT64_MAX;
volatile int32_t t52 = -3677;
static int8_t x219 = INT8_MIN;
volatile uint32_t x220 = 2772U;
int32_t x229 = INT32_MIN;
static uint16_t x234 = UINT16_MAX;
int8_t x244 = INT8_MIN;
volatile int32_t t61 = 10124009;
int64_t x262 = INT64_MIN;
volatile int8_t x264 = 32;
volatile int32_t t64 = -117;
int16_t x267 = -6225;
int32_t t65 = 989758587;
int64_t x270 = -1LL;
int64_t x278 = INT64_MIN;
volatile int32_t t67 = -2327500;
static int16_t x285 = 825;
uint16_t x287 = 7U;
static volatile int64_t x288 = INT64_MAX;
int32_t x298 = INT32_MIN;
int8_t x305 = INT8_MIN;
int64_t x306 = -3289911290359054450LL;
volatile int32_t x318 = -1;
int32_t x320 = -1;
int16_t x321 = INT16_MAX;
volatile int64_t x329 = -1LL;
int64_t x330 = INT64_MIN;
int64_t x349 = -1LL;
int8_t x350 = 0;
volatile int16_t x356 = -2;
static volatile uint64_t x362 = UINT64_MAX;
uint8_t x369 = 1U;
volatile int32_t t89 = -382289118;
int16_t x376 = -8065;
uint64_t x389 = 3380116260118LLU;
uint8_t x395 = 3U;
int32_t x396 = -178734414;
static uint32_t x398 = UINT32_MAX;
uint32_t x399 = 44U;


void f0(void) {
	uint8_t x2 = 5U;
	int8_t x4 = INT8_MAX;

	t0 = (((x1^x2)/x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -6277137622304LL;
	volatile uint64_t x6 = 465183573LLU;
	int16_t x7 = -110;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 614380494;

	t1 = (((x5^x6)/x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	volatile uint16_t x11 = 12035U;
	int32_t x12 = -1;
	static volatile int32_t t2 = 8528;

	t2 = (((x9^x10)/x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = -106;
	uint16_t x15 = 25U;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = 236572580;

	t3 = (((x13^x14)/x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = INT8_MAX;
	static uint16_t x20 = UINT16_MAX;

	t4 = (((x17^x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile int32_t x22 = -1;
	volatile uint64_t x23 = 11264662897LLU;
	volatile uint16_t x24 = 940U;
	static int32_t t5 = 23333;

	t5 = (((x21^x22)/x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -83;
	volatile int16_t x26 = INT16_MIN;
	static int16_t x28 = -12928;
	volatile int32_t t6 = 7938845;

	t6 = (((x25^x26)/x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x29 = 1190313LLU;
	volatile int16_t x30 = -1;
	static uint8_t x31 = 3U;
	int64_t x32 = -694874149LL;
	volatile int32_t t7 = 1217100;

	t7 = (((x29^x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static uint16_t x34 = 13U;
	int32_t x35 = 384461;
	int8_t x36 = -1;
	static int32_t t8 = 468705;

	t8 = (((x33^x34)/x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	volatile int32_t x38 = -1;
	int8_t x39 = -52;
	int64_t x40 = INT64_MAX;
	static volatile int32_t t9 = 122975424;

	t9 = (((x37^x38)/x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 3U;
	static int8_t x42 = 8;
	volatile uint8_t x43 = 37U;
	int64_t x44 = 108432663LL;
	static int32_t t10 = 149;

	t10 = (((x41^x42)/x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	static uint64_t x50 = 250881LLU;
	int8_t x51 = -1;

	t11 = (((x49^x50)/x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 106155;
	int8_t x54 = -38;

	t12 = (((x53^x54)/x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x57 = 17U;
	int16_t x58 = INT16_MIN;
	int8_t x60 = INT8_MAX;

	t13 = (((x57^x58)/x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x63 = 119609249LL;
	uint32_t x64 = 21632U;
	int32_t t14 = 1;

	t14 = (((x61^x62)/x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 0;
	volatile uint16_t x67 = 5591U;
	int16_t x68 = INT16_MIN;
	volatile int32_t t15 = 13292090;

	t15 = (((x65^x66)/x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 6U;
	uint32_t x70 = UINT32_MAX;
	static int32_t x71 = INT32_MIN;
	uint16_t x72 = 13488U;
	volatile int32_t t16 = 12;

	t16 = (((x69^x70)/x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	int64_t x75 = -150LL;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t17 = 1;

	t17 = (((x73^x74)/x75)<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x79 = -11;
	int32_t t18 = 8753216;

	t18 = (((x77^x78)/x79)<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = 1071341455381717358LL;
	static int32_t x83 = INT32_MAX;
	static int16_t x84 = INT16_MIN;
	static volatile int32_t t19 = 6;

	t19 = (((x81^x82)/x83)<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MAX;

	t20 = (((x85^x86)/x87)<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = INT32_MIN;
	volatile uint32_t x92 = 1650926607U;
	volatile int32_t t21 = 178249;

	t21 = (((x89^x90)/x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 25;
	volatile int64_t x94 = 15505LL;
	int16_t x95 = -1971;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 1;

	t22 = (((x93^x94)/x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = -1;
	int8_t x100 = -1;
	volatile int32_t t23 = 354400063;

	t23 = (((x97^x98)/x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x102 = INT32_MIN;
	uint64_t x103 = 125297072475128LLU;
	int8_t x104 = -1;

	t24 = (((x101^x102)/x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x106 = 116U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t25 = -185716202;

	t25 = (((x105^x106)/x107)<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	uint64_t x110 = 2835210744608861LLU;
	static int16_t x111 = INT16_MAX;

	t26 = (((x109^x110)/x111)<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x114 = INT64_MIN;
	int8_t x115 = -1;
	int32_t t27 = -1;

	t27 = (((x113^x114)/x115)<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = UINT8_MAX;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int32_t t28 = 5095331;

	t28 = (((x117^x118)/x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 1078295324037LL;
	int8_t x122 = 0;
	int16_t x124 = INT16_MAX;
	volatile int32_t t29 = -1286597;

	t29 = (((x121^x122)/x123)<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = INT16_MIN;
	volatile uint64_t x127 = UINT64_MAX;
	static int8_t x128 = INT8_MIN;
	int32_t t30 = -3635314;

	t30 = (((x125^x126)/x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = 6872369064LLU;
	int32_t x131 = -1;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t31 = 16452185;

	t31 = (((x129^x130)/x131)<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = 66827013819LLU;
	volatile uint32_t x135 = 197717320U;
	int32_t x136 = 1631;
	volatile int32_t t32 = -174657;

	t32 = (((x133^x134)/x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	volatile int16_t x139 = INT16_MIN;
	int8_t x140 = -1;

	t33 = (((x137^x138)/x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = 1;
	uint16_t x142 = UINT16_MAX;
	volatile uint32_t x143 = 199639U;
	int32_t t34 = -1402;

	t34 = (((x141^x142)/x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = -45641;
	int32_t x146 = INT32_MAX;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = 282218774702340LL;
	int32_t t35 = 1754;

	t35 = (((x145^x146)/x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = 31;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 186949363LLU;
	int32_t t36 = 80169608;

	t36 = (((x149^x150)/x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x154 = 215282U;
	static volatile uint8_t x155 = 15U;
	uint16_t x156 = UINT16_MAX;

	t37 = (((x153^x154)/x155)<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 95U;
	uint64_t x158 = 61237550LLU;
	volatile int16_t x159 = -1;
	volatile int32_t t38 = 48449728;

	t38 = (((x157^x158)/x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x161 = 258U;
	int32_t x162 = INT32_MAX;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = -22812470573358LL;

	t39 = (((x161^x162)/x163)<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = 13086647271511882LL;
	int64_t x166 = 1LL;
	int8_t x167 = -1;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t40 = -342447369;

	t40 = (((x165^x166)/x167)<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t t41 = -9170;

	t41 = (((x169^x170)/x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MAX;
	static int64_t x174 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	uint64_t x176 = UINT64_MAX;
	int32_t t42 = -6;

	t42 = (((x173^x174)/x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x180 = 29578909591193560LL;
	volatile int32_t t43 = -24613485;

	t43 = (((x177^x178)/x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x182 = 3803U;
	int8_t x183 = -6;
	uint16_t x184 = 19941U;
	volatile int32_t t44 = 1549414;

	t44 = (((x181^x182)/x183)<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 6U;
	int64_t x186 = INT64_MAX;
	uint16_t x187 = 567U;
	static int32_t x188 = 1;
	volatile int32_t t45 = 42131;

	t45 = (((x185^x186)/x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t t46 = 3407345;

	t46 = (((x189^x190)/x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = -1;

	t47 = (((x193^x194)/x195)<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	static int64_t x199 = -1941185102622LL;
	int32_t x200 = -1;
	static int32_t t48 = -234;

	t48 = (((x197^x198)/x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x201 = 89548183448254LLU;
	volatile int8_t x202 = INT8_MAX;
	int16_t x203 = -1;
	volatile int32_t t49 = 15392566;

	t49 = (((x201^x202)/x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MAX;
	static uint64_t x206 = 1291400926787LLU;
	volatile uint64_t x207 = 2867836514117LLU;
	volatile int16_t x208 = INT16_MAX;

	t50 = (((x205^x206)/x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x209 = 194525U;
	int8_t x211 = -1;
	static volatile int8_t x212 = INT8_MIN;
	static volatile int32_t t51 = 105;

	t51 = (((x209^x210)/x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x215 = UINT64_MAX;
	int16_t x216 = -29;

	t52 = (((x213^x214)/x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 107U;
	int32_t x218 = 38553;
	volatile int32_t t53 = -824606880;

	t53 = (((x217^x218)/x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x221 = UINT32_MAX;
	int64_t x222 = -1LL;
	static uint8_t x223 = UINT8_MAX;
	int8_t x224 = 0;
	int32_t t54 = 7028;

	t54 = (((x221^x222)/x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -1;
	volatile uint16_t x226 = 21073U;
	int16_t x227 = INT16_MAX;
	uint8_t x228 = 40U;
	int32_t t55 = -86046276;

	t55 = (((x225^x226)/x227)<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x230 = 14U;
	uint8_t x231 = UINT8_MAX;
	volatile int16_t x232 = INT16_MAX;
	volatile int32_t t56 = -225651;

	t56 = (((x229^x230)/x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MIN;
	static volatile uint16_t x235 = 4U;
	uint64_t x236 = 17896874657924LLU;
	static volatile int32_t t57 = -308;

	t57 = (((x233^x234)/x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = 3383;
	int16_t x239 = 1;
	int8_t x240 = INT8_MAX;
	int32_t t58 = 100;

	t58 = (((x237^x238)/x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x241 = 1019892363065961760LLU;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = 73LLU;
	static volatile int32_t t59 = 1524;

	t59 = (((x241^x242)/x243)<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = UINT32_MAX;
	volatile uint32_t x246 = 12U;
	volatile int16_t x247 = -1;
	static volatile int8_t x248 = -1;
	int32_t t60 = -830;

	t60 = (((x245^x246)/x247)<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	static uint32_t x250 = 1389720124U;
	int64_t x251 = INT64_MAX;
	uint16_t x252 = 19U;

	t61 = (((x249^x250)/x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	volatile int8_t x255 = -60;
	int16_t x256 = INT16_MIN;
	int32_t t62 = -198207096;

	t62 = (((x253^x254)/x255)<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -55;
	int16_t x260 = -1;
	int32_t t63 = -1912;

	t63 = (((x257^x258)/x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	volatile int8_t x263 = INT8_MIN;

	t64 = (((x261^x262)/x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x265 = 2363U;
	static int64_t x266 = INT64_MIN;
	static uint64_t x268 = 58004214408636LLU;

	t65 = (((x265^x266)/x267)<=x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = 0LL;
	int64_t x271 = INT64_MIN;
	volatile int16_t x272 = 0;
	volatile int32_t t66 = -70;

	t66 = (((x269^x270)/x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = INT64_MAX;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MIN;

	t67 = (((x277^x278)/x279)<=x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	static int32_t x283 = INT32_MAX;
	static uint8_t x284 = UINT8_MAX;
	static volatile int32_t t68 = 107;

	t68 = (((x281^x282)/x283)<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x286 = INT8_MIN;
	int32_t t69 = -510825943;

	t69 = (((x285^x286)/x287)<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 31;
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 217581210U;
	int16_t x292 = INT16_MIN;
	volatile int32_t t70 = -1454346;

	t70 = (((x289^x290)/x291)<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x294 = 50098073609357LLU;
	int32_t x295 = -1;
	uint8_t x296 = UINT8_MAX;
	int32_t t71 = -29238;

	t71 = (((x293^x294)/x295)<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = 172359423LLU;
	int32_t x299 = -74;
	int8_t x300 = -9;
	int32_t t72 = 5856;

	t72 = (((x297^x298)/x299)<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;
	static uint8_t x302 = 8U;
	int64_t x303 = INT64_MAX;
	volatile uint8_t x304 = 3U;
	int32_t t73 = -2;

	t73 = (((x301^x302)/x303)<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x307 = INT16_MAX;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t74 = 7506;

	t74 = (((x305^x306)/x307)<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x310 = -27;
	int32_t x311 = INT32_MIN;
	int8_t x312 = -18;
	int32_t t75 = -623105;

	t75 = (((x309^x310)/x311)<=x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 59LL;
	uint16_t x314 = 13U;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t76 = -536760102;

	t76 = (((x313^x314)/x315)<=x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 4U;
	volatile int64_t x319 = INT64_MIN;
	static int32_t t77 = -43;

	t77 = (((x317^x318)/x319)<=x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = -1;
	int8_t x323 = -1;
	int32_t x324 = 10;
	volatile int32_t t78 = -112191;

	t78 = (((x321^x322)/x323)<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 234308LL;
	uint16_t x326 = 0U;
	static uint64_t x327 = 2545319LLU;
	uint64_t x328 = 1186115LLU;
	int32_t t79 = 7724;

	t79 = (((x325^x326)/x327)<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x331 = INT32_MIN;
	int64_t x332 = -2333LL;
	volatile int32_t t80 = -11;

	t80 = (((x329^x330)/x331)<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 1U;
	uint64_t x334 = 209317452557767170LLU;
	int16_t x335 = 2112;
	int16_t x336 = INT16_MAX;
	int32_t t81 = -19153456;

	t81 = (((x333^x334)/x335)<=x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	int64_t x339 = -1LL;
	static volatile int8_t x340 = 1;
	int32_t t82 = 7;

	t82 = (((x337^x338)/x339)<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = UINT16_MAX;
	int64_t x346 = -1LL;
	static uint8_t x347 = UINT8_MAX;
	int32_t x348 = -39511967;
	volatile int32_t t83 = -110;

	t83 = (((x345^x346)/x347)<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x351 = -1;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t84 = 0;

	t84 = (((x349^x350)/x351)<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = -1;
	int8_t x354 = -1;
	volatile int8_t x355 = 1;
	int32_t t85 = -1;

	t85 = (((x353^x354)/x355)<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = 1;
	volatile int16_t x358 = 1837;
	uint16_t x359 = UINT16_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t86 = 511391260;

	t86 = (((x357^x358)/x359)<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = 10142;
	volatile int16_t x363 = INT16_MIN;
	uint8_t x364 = 15U;
	static volatile int32_t t87 = 0;

	t87 = (((x361^x362)/x363)<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MIN;
	volatile int64_t x367 = -17LL;
	int16_t x368 = 219;
	volatile int32_t t88 = 148256;

	t88 = (((x365^x366)/x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x370 = INT32_MIN;
	int64_t x371 = -4144LL;
	volatile int64_t x372 = 660713892LL;

	t89 = (((x369^x370)/x371)<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x373 = 4896692U;
	static volatile int64_t x374 = INT64_MAX;
	volatile int8_t x375 = INT8_MIN;
	volatile int32_t t90 = 96259;

	t90 = (((x373^x374)/x375)<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x377 = -1;
	static int16_t x378 = -1;
	int32_t x379 = 212;
	int32_t x380 = INT32_MAX;
	static int32_t t91 = -132114917;

	t91 = (((x377^x378)/x379)<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MIN;
	int8_t x384 = -7;
	volatile int32_t t92 = 32994;

	t92 = (((x381^x382)/x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 12U;
	volatile int16_t x388 = 453;
	static volatile int32_t t93 = -1;

	t93 = (((x385^x386)/x387)<=x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = -1;
	int64_t x391 = -1LL;
	uint64_t x392 = 3583262119501LLU;
	int32_t t94 = 1;

	t94 = (((x389^x390)/x391)<=x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	static int32_t x394 = INT32_MIN;
	volatile int32_t t95 = 207;

	t95 = (((x393^x394)/x395)<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x397 = UINT16_MAX;
	uint8_t x400 = 37U;
	volatile int32_t t96 = -1;

	t96 = (((x397^x398)/x399)<=x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MAX;
	uint64_t x402 = 1347848855880213LLU;
	int16_t x403 = -1;
	int64_t x404 = INT64_MIN;
	int32_t t97 = 5;

	t97 = (((x401^x402)/x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = -1;
	int32_t x406 = -13333;
	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;
	volatile int32_t t98 = -1792;

	t98 = (((x405^x406)/x407)<=x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x410 = 118U;
	int16_t x411 = INT16_MIN;
	uint16_t x412 = 1U;
	volatile int32_t t99 = -18514;

	t99 = (((x409^x410)/x411)<=x412);

	if (t99 != 1) { NG(); } else { ; }
	
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

