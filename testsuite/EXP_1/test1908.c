#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
int8_t x2 = 21;
static volatile int32_t t0 = -27090690;
static int32_t x6 = 17842153;
int64_t x8 = INT64_MIN;
int16_t x11 = -1;
int16_t x18 = INT16_MIN;
uint16_t x24 = UINT16_MAX;
volatile int32_t t7 = -97554;
volatile uint8_t x36 = UINT8_MAX;
static int32_t t8 = 1727;
int64_t x38 = INT64_MAX;
uint16_t x50 = UINT16_MAX;
static volatile int32_t t12 = 252;
int8_t x53 = -3;
uint16_t x65 = UINT16_MAX;
int8_t x73 = INT8_MIN;
volatile int8_t x76 = -2;
static int16_t x85 = -1;
int16_t x92 = INT16_MIN;
static int64_t x103 = -1LL;
int32_t x104 = INT32_MAX;
int32_t x112 = INT32_MAX;
uint32_t x116 = 7U;
volatile uint16_t x121 = UINT16_MAX;
uint8_t x122 = 38U;
volatile int32_t t30 = -31417;
uint64_t x128 = 689388714220345LLU;
int64_t x132 = -25669344449LL;
int32_t t32 = -15;
int64_t x134 = INT64_MIN;
static volatile int32_t t34 = 767286;
int16_t x141 = INT16_MAX;
static int32_t t36 = -49;
volatile int16_t x151 = INT16_MIN;
int32_t x155 = INT32_MIN;
uint8_t x157 = 3U;
int8_t x163 = INT8_MIN;
int8_t x164 = INT8_MIN;
static volatile int32_t t40 = 26;
volatile int32_t x170 = INT32_MIN;
uint32_t x189 = 5984U;
int32_t x195 = INT32_MIN;
static uint64_t x196 = UINT64_MAX;
int8_t x197 = 29;
static uint32_t x202 = 144U;
volatile int32_t t50 = 3;
uint8_t x205 = 92U;
int32_t x211 = -1;
static uint8_t x212 = 0U;
static int8_t x215 = INT8_MIN;
int8_t x217 = INT8_MIN;
uint32_t x225 = UINT32_MAX;
static uint16_t x227 = 10899U;
uint16_t x234 = UINT16_MAX;
volatile uint8_t x238 = UINT8_MAX;
int8_t x245 = 56;
int16_t x252 = INT16_MIN;
static int64_t x256 = -17012615308255642LL;
int32_t t63 = -1;
uint16_t x259 = UINT16_MAX;
int32_t t64 = -166447;
int64_t x261 = INT64_MAX;
static int32_t t65 = -199849;
uint16_t x265 = UINT16_MAX;
volatile uint16_t x266 = 570U;
int32_t x267 = -1;
int64_t x271 = -1LL;
static int32_t x293 = 801;
volatile int16_t x294 = 10;
volatile int32_t t72 = 98303;
volatile uint16_t x300 = UINT16_MAX;
static volatile int16_t x310 = INT16_MIN;
uint64_t x311 = 22635679LLU;
volatile int32_t t76 = -1205399;
int64_t x315 = INT64_MIN;
static int32_t t77 = -6127;
int8_t x321 = INT8_MIN;
volatile int8_t x322 = INT8_MIN;
int32_t t79 = -320176;
static uint8_t x330 = UINT8_MAX;
int8_t x333 = -15;
uint64_t x336 = 713302164403LLU;
int8_t x337 = INT8_MIN;
int64_t x340 = INT64_MAX;
int8_t x350 = INT8_MIN;
volatile int64_t x351 = INT64_MIN;
static int32_t t86 = 84592;
int16_t x360 = -6005;
static int8_t x368 = -6;
int16_t x369 = -1;
static uint16_t x371 = 4582U;
volatile int32_t t94 = 458;
int64_t x390 = INT64_MIN;
int64_t x394 = -1920499538LL;


void f0(void) {
	volatile int16_t x3 = INT16_MIN;
	int32_t x4 = -1591;

	t0 = (((x1|x2)/x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -25763;

	t1 = (((x5|x6)/x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -52228843;

	t2 = (((x9|x10)/x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint32_t x14 = 1590620628U;
	static uint64_t x15 = UINT64_MAX;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 111729779;

	t3 = (((x13|x14)/x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int8_t x19 = INT8_MAX;
	uint8_t x20 = 1U;
	int32_t t4 = 0;

	t4 = (((x17|x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	volatile uint32_t x22 = 625U;
	static uint8_t x23 = UINT8_MAX;
	int32_t t5 = 472;

	t5 = (((x21|x22)/x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static volatile int32_t x26 = -817;
	static volatile uint32_t x27 = UINT32_MAX;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -204;

	t6 = (((x25|x26)/x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	volatile int8_t x30 = -5;
	volatile uint8_t x31 = 49U;
	uint64_t x32 = 17450413279943LLU;

	t7 = (((x29|x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = 7114U;
	uint8_t x35 = 1U;

	t8 = (((x33|x34)/x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 0;
	static int32_t x39 = -1;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -12410522;

	t9 = (((x37|x38)/x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 28272U;
	static uint32_t x42 = 509U;
	volatile int16_t x43 = -7;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -79;

	t10 = (((x41|x42)/x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = 6034451LL;
	int64_t x46 = -536506LL;
	uint16_t x47 = 9832U;
	int8_t x48 = 30;
	int32_t t11 = -14;

	t11 = (((x45|x46)/x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = -208;

	t12 = (((x49|x50)/x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	static uint8_t x55 = UINT8_MAX;
	volatile int64_t x56 = INT64_MIN;
	static int32_t t13 = 105150547;

	t13 = (((x53|x54)/x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 4;
	int8_t x58 = -1;
	uint32_t x59 = 1U;
	int16_t x60 = INT16_MIN;
	static int32_t t14 = -15019181;

	t14 = (((x57|x58)/x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 1630;
	static int32_t x64 = 754;
	volatile int32_t t15 = -1951278;

	t15 = (((x61|x62)/x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -828446422;
	int16_t x67 = -98;
	volatile int64_t x68 = -1LL;
	int32_t t16 = 10537750;

	t16 = (((x65|x66)/x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int32_t x71 = INT32_MAX;
	volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = -9;

	t17 = (((x69|x70)/x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x74 = 0U;
	volatile int8_t x75 = INT8_MIN;
	volatile int32_t t18 = -56083550;

	t18 = (((x73|x74)/x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 1691043;

	t19 = (((x77|x78)/x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile int16_t x84 = -407;
	volatile int32_t t20 = -40931766;

	t20 = (((x81|x82)/x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	int16_t x87 = INT16_MAX;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -32523586;

	t21 = (((x85|x86)/x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -15671;
	volatile int64_t x90 = INT64_MIN;
	static int64_t x91 = 253818635LL;
	int32_t t22 = 3679;

	t22 = (((x89|x90)/x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = -1;
	volatile int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MIN;
	int32_t t23 = 759483;

	t23 = (((x93|x94)/x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile int32_t x98 = INT32_MIN;
	volatile int64_t x99 = INT64_MAX;
	static volatile uint32_t x100 = UINT32_MAX;
	int32_t t24 = 450;

	t24 = (((x97|x98)/x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -175095915520723346LL;
	uint64_t x102 = UINT64_MAX;
	volatile int32_t t25 = -53159863;

	t25 = (((x101|x102)/x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x106 = 114817617648LLU;
	int32_t x107 = 170358974;
	uint64_t x108 = 9LLU;
	volatile int32_t t26 = -1;

	t26 = (((x105|x106)/x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 2U;
	int16_t x110 = INT16_MAX;
	int16_t x111 = INT16_MIN;
	int32_t t27 = -98982642;

	t27 = (((x109|x110)/x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = 182;
	volatile int8_t x115 = INT8_MAX;
	int32_t t28 = 2;

	t28 = (((x113|x114)/x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x118 = UINT16_MAX;
	uint64_t x119 = 363216076179LLU;
	static uint32_t x120 = 7223953U;
	volatile int32_t t29 = 111709331;

	t29 = (((x117|x118)/x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MAX;

	t30 = (((x121|x122)/x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = 12U;
	int32_t t31 = -705857090;

	t31 = (((x125|x126)/x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = -1;
	int64_t x131 = 85LL;

	t32 = (((x129|x130)/x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x135 = -1;
	volatile int64_t x136 = -1LL;
	int32_t t33 = 11889;

	t33 = (((x133|x134)/x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -3;
	uint16_t x138 = 19U;
	uint64_t x139 = UINT64_MAX;
	static volatile int64_t x140 = 16127243147040LL;

	t34 = (((x137|x138)/x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -3298581LL;
	uint16_t x143 = 8U;
	int8_t x144 = -1;
	static volatile int32_t t35 = -1;

	t35 = (((x141|x142)/x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MAX;
	uint8_t x147 = 33U;
	int32_t x148 = INT32_MIN;

	t36 = (((x145|x146)/x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 24820179LLU;
	int8_t x150 = 1;
	int8_t x152 = -1;
	int32_t t37 = -693889854;

	t37 = (((x149|x150)/x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 231780798359LLU;
	uint64_t x154 = 18018059650LLU;
	volatile int64_t x156 = -1LL;
	int32_t t38 = -1;

	t38 = (((x153|x154)/x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = 10361;
	int32_t x159 = INT32_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t39 = 2336;

	t39 = (((x157|x158)/x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MAX;

	t40 = (((x161|x162)/x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int16_t x166 = -1;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = -1;
	int32_t t41 = 2;

	t41 = (((x165|x166)/x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	uint8_t x171 = 10U;
	int32_t x172 = -252420117;
	int32_t t42 = 2297;

	t42 = (((x169|x170)/x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = 0;
	int8_t x174 = -1;
	uint8_t x175 = 83U;
	int64_t x176 = 380787290193037141LL;
	int32_t t43 = -1;

	t43 = (((x173|x174)/x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int32_t x178 = -1;
	volatile uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 107U;
	int32_t t44 = 4;

	t44 = (((x177|x178)/x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = -13;
	int32_t x183 = 1007;
	uint64_t x184 = UINT64_MAX;
	int32_t t45 = -3638833;

	t45 = (((x181|x182)/x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MAX;
	static uint16_t x186 = UINT16_MAX;
	uint64_t x187 = 6LLU;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -1499612;

	t46 = (((x185|x186)/x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1715;
	uint64_t x191 = UINT64_MAX;
	volatile int16_t x192 = INT16_MIN;
	int32_t t47 = -12;

	t47 = (((x189|x190)/x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 1;
	int16_t x194 = 419;
	int32_t t48 = -13394993;

	t48 = (((x193|x194)/x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x198 = 36786090492534LLU;
	int16_t x199 = INT16_MIN;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = 31347886;

	t49 = (((x197|x198)/x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int8_t x203 = -1;
	static int16_t x204 = -1;

	t50 = (((x201|x202)/x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MAX;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = 0;

	t51 = (((x205|x206)/x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 328937073U;
	int64_t x210 = INT64_MAX;
	int32_t t52 = 48;

	t52 = (((x209|x210)/x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 224009529U;
	int8_t x214 = INT8_MIN;
	static int8_t x216 = INT8_MAX;
	int32_t t53 = -1322256;

	t53 = (((x213|x214)/x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = 479;
	int8_t x219 = INT8_MIN;
	volatile int64_t x220 = INT64_MIN;
	static volatile int32_t t54 = -53513;

	t54 = (((x217|x218)/x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 129580866U;
	int8_t x222 = INT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	uint16_t x224 = 10805U;
	int32_t t55 = -109;

	t55 = (((x221|x222)/x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = -1;
	uint16_t x228 = UINT16_MAX;
	static int32_t t56 = 26;

	t56 = (((x225|x226)/x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 3668870896398LL;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile uint16_t x232 = 70U;
	int32_t t57 = 0;

	t57 = (((x229|x230)/x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 3U;
	uint8_t x235 = 2U;
	static uint16_t x236 = 3058U;
	int32_t t58 = -230;

	t58 = (((x233|x234)/x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	uint64_t x239 = 194150962030014933LLU;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -10271;

	t59 = (((x237|x238)/x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = 14686473;
	int32_t x243 = -1;
	int64_t x244 = -1LL;
	int32_t t60 = 2;

	t60 = (((x241|x242)/x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -1LL;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = 1629;
	int32_t t61 = 2873;

	t61 = (((x245|x246)/x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 51;
	volatile uint32_t x250 = 23132844U;
	int16_t x251 = -2;
	int32_t t62 = 40140;

	t62 = (((x249|x250)/x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	int8_t x254 = INT8_MIN;
	int16_t x255 = -1;

	t63 = (((x253|x254)/x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 13U;
	static uint16_t x258 = 1U;
	volatile int64_t x260 = 536041618LL;

	t64 = (((x257|x258)/x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MIN;

	t65 = (((x261|x262)/x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x268 = -257315886108LL;
	int32_t t66 = -3114;

	t66 = (((x265|x266)/x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static uint16_t x270 = 7U;
	int32_t x272 = INT32_MAX;
	int32_t t67 = -189530311;

	t67 = (((x269|x270)/x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x277 = 6U;
	int32_t x278 = -60;
	int16_t x279 = -1;
	int16_t x280 = INT16_MIN;
	volatile int32_t t68 = -10545717;

	t68 = (((x277|x278)/x279)<=x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x282 = 391U;
	uint64_t x283 = 1473185032LLU;
	int8_t x284 = INT8_MIN;
	volatile int32_t t69 = 0;

	t69 = (((x281|x282)/x283)<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MAX;
	int16_t x286 = 5;
	static int32_t x287 = -20;
	static int32_t x288 = INT32_MAX;
	int32_t t70 = 22809;

	t70 = (((x285|x286)/x287)<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	uint32_t x290 = 1529U;
	uint16_t x291 = 11260U;
	static volatile int16_t x292 = -1;
	volatile int32_t t71 = 10513471;

	t71 = (((x289|x290)/x291)<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x295 = -1;
	static int64_t x296 = INT64_MAX;

	t72 = (((x293|x294)/x295)<=x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = 38350944739LL;
	int8_t x298 = 0;
	static int32_t x299 = 350419;
	volatile int32_t t73 = 7668;

	t73 = (((x297|x298)/x299)<=x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = -4;
	int16_t x303 = -1;
	uint8_t x304 = 1U;
	volatile int32_t t74 = 536;

	t74 = (((x301|x302)/x303)<=x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x305 = UINT16_MAX;
	uint8_t x306 = 18U;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 526U;
	volatile int32_t t75 = 0;

	t75 = (((x305|x306)/x307)<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = 26U;
	int32_t x312 = -11;

	t76 = (((x309|x310)/x311)<=x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = UINT64_MAX;
	uint16_t x314 = UINT16_MAX;
	volatile uint64_t x316 = 678190060890928LLU;

	t77 = (((x313|x314)/x315)<=x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t78 = 89775093;

	t78 = (((x321|x322)/x323)<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -11;
	uint64_t x326 = 7LLU;
	volatile uint8_t x327 = UINT8_MAX;
	int64_t x328 = INT64_MIN;

	t79 = (((x325|x326)/x327)<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x331 = UINT8_MAX;
	uint32_t x332 = 14U;
	int32_t t80 = -356178;

	t80 = (((x329|x330)/x331)<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x334 = UINT8_MAX;
	static int16_t x335 = 37;
	int32_t t81 = 20;

	t81 = (((x333|x334)/x335)<=x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x338 = INT32_MAX;
	uint32_t x339 = UINT32_MAX;
	int32_t t82 = 3711304;

	t82 = (((x337|x338)/x339)<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x341 = -88932LL;
	static int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	int32_t x344 = 455419;
	int32_t t83 = 528699087;

	t83 = (((x341|x342)/x343)<=x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = -1;
	uint32_t x346 = 96477914U;
	uint16_t x347 = 3898U;
	static int64_t x348 = INT64_MAX;
	int32_t t84 = 1900377;

	t84 = (((x345|x346)/x347)<=x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = 641742339286LL;
	uint8_t x352 = 6U;
	static int32_t t85 = -3468622;

	t85 = (((x349|x350)/x351)<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x353 = INT16_MIN;
	int8_t x354 = -2;
	volatile int8_t x355 = INT8_MAX;
	int32_t x356 = -49;

	t86 = (((x353|x354)/x355)<=x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x357 = -1328;
	int8_t x358 = 1;
	static volatile uint32_t x359 = 1410555087U;
	int32_t t87 = 0;

	t87 = (((x357|x358)/x359)<=x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x361 = INT16_MAX;
	int32_t x362 = -1;
	volatile int16_t x363 = -1;
	int8_t x364 = 4;
	static int32_t t88 = 7156770;

	t88 = (((x361|x362)/x363)<=x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x365 = 11840305U;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int32_t t89 = 32712;

	t89 = (((x365|x366)/x367)<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x370 = INT64_MAX;
	volatile int32_t x372 = -1;
	int32_t t90 = 86;

	t90 = (((x369|x370)/x371)<=x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x373 = 842U;
	int64_t x374 = INT64_MAX;
	static int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t91 = 26;

	t91 = (((x373|x374)/x375)<=x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = 144412LL;
	int8_t x378 = INT8_MAX;
	static int16_t x379 = 75;
	uint32_t x380 = UINT32_MAX;
	static int32_t t92 = -622028;

	t92 = (((x377|x378)/x379)<=x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = -10532;
	int32_t x382 = -8118;
	uint8_t x383 = 22U;
	uint8_t x384 = 11U;
	static int32_t t93 = -7423480;

	t93 = (((x381|x382)/x383)<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;

	t94 = (((x385|x386)/x387)<=x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 2017874673LLU;
	int64_t x391 = INT64_MAX;
	volatile int32_t x392 = -1;
	volatile int32_t t95 = -261084678;

	t95 = (((x389|x390)/x391)<=x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x393 = 4231545861LL;
	int16_t x395 = -11;
	static uint8_t x396 = 3U;
	volatile int32_t t96 = -76565;

	t96 = (((x393|x394)/x395)<=x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MAX;
	static int32_t x398 = -1;
	uint16_t x399 = 23222U;
	uint64_t x400 = 10666LLU;
	volatile int32_t t97 = 57902788;

	t97 = (((x397|x398)/x399)<=x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = INT32_MIN;
	int64_t x402 = -1LL;
	int64_t x403 = -1LL;
	volatile uint16_t x404 = UINT16_MAX;
	static volatile int32_t t98 = -6;

	t98 = (((x401|x402)/x403)<=x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = 812U;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	uint16_t x408 = 6814U;
	volatile int32_t t99 = -3;

	t99 = (((x405|x406)/x407)<=x408);

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

