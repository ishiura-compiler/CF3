#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = UINT16_MAX;
static int8_t x13 = -5;
uint64_t x18 = 982743LLU;
volatile int32_t x24 = 10;
int16_t x25 = INT16_MIN;
static uint8_t x27 = 4U;
volatile int32_t t7 = -308708;
static volatile int16_t x34 = INT16_MIN;
static int32_t x35 = 1;
int64_t x43 = -804266558950LL;
static int8_t x44 = INT8_MIN;
volatile int8_t x47 = INT8_MIN;
uint16_t x49 = UINT16_MAX;
volatile int32_t t12 = -26371766;
int8_t x53 = -1;
volatile int32_t t13 = -2440621;
volatile int8_t x57 = INT8_MIN;
int8_t x63 = INT8_MIN;
uint32_t x64 = 11554566U;
int16_t x67 = INT16_MAX;
int32_t t17 = -537;
static uint16_t x73 = 677U;
int16_t x75 = 52;
int32_t x78 = INT32_MIN;
int8_t x81 = 5;
int32_t x83 = -1309;
int32_t t20 = -5822;
volatile uint32_t x94 = 1974442441U;
static int8_t x99 = -1;
static int32_t t25 = -4388;
int32_t x106 = INT32_MAX;
uint32_t x109 = UINT32_MAX;
static volatile uint16_t x111 = UINT16_MAX;
int8_t x123 = INT8_MAX;
static uint16_t x138 = 709U;
int64_t x154 = INT64_MAX;
uint64_t x161 = UINT64_MAX;
static int16_t x164 = -1;
int32_t t40 = -11;
uint64_t x169 = UINT64_MAX;
volatile int32_t t44 = 60504468;
int64_t x184 = -1LL;
uint16_t x187 = UINT16_MAX;
volatile int32_t t47 = 4;
volatile int32_t t48 = 48585399;
int64_t x210 = -274037402403005053LL;
int64_t x221 = -1LL;
int16_t x223 = INT16_MAX;
static uint16_t x227 = 2199U;
volatile int16_t x228 = 1809;
int8_t x232 = -9;
uint32_t x246 = UINT32_MAX;
uint8_t x249 = 103U;
uint8_t x256 = 3U;
uint64_t x262 = UINT64_MAX;
int64_t x266 = -13171050178LL;
int32_t t66 = 11070;
volatile uint8_t x272 = 103U;
static int32_t t67 = -26;
uint32_t x274 = UINT32_MAX;
volatile int32_t t68 = 220;
uint8_t x277 = 38U;
volatile int32_t x279 = INT32_MAX;
int8_t x284 = 7;
static uint32_t x287 = 247U;
int32_t t73 = 1150475;
volatile int32_t x297 = INT32_MIN;
int32_t x301 = -2037430;
uint32_t x302 = UINT32_MAX;
volatile int32_t t76 = 321050;
int16_t x313 = INT16_MAX;
volatile uint16_t x322 = 88U;
volatile int32_t t80 = -82262249;
int8_t x336 = -1;
static int8_t x339 = INT8_MIN;
volatile int32_t t86 = 6541;
int32_t t88 = -146662324;
static int64_t x357 = INT64_MIN;
int16_t x358 = INT16_MAX;
int8_t x360 = INT8_MAX;
volatile int64_t x365 = INT64_MIN;
uint64_t x372 = 4421714LLU;
static int8_t x373 = -1;
uint64_t x382 = 6744230LLU;
int32_t t94 = 9462166;
int64_t x387 = INT64_MIN;
volatile int32_t t96 = -7662;
static uint32_t x393 = 1321712715U;
static int32_t x395 = INT32_MIN;
int32_t t98 = -5511;
static volatile uint8_t x403 = 9U;


void f0(void) {
	uint8_t x1 = 1U;
	int32_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	uint32_t x4 = 913403U;
	int32_t t0 = 195262695;

	t0 = (((x1|x2)/x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1U;
	volatile int32_t x6 = -3;
	int8_t x7 = -10;
	static int32_t x8 = INT32_MIN;
	static int32_t t1 = -151993;

	t1 = (((x5|x6)/x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint16_t x11 = 16004U;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = 9997225;

	t2 = (((x9|x10)/x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static int8_t x15 = INT8_MAX;
	int32_t x16 = -1;
	volatile int32_t t3 = -32356;

	t3 = (((x13|x14)/x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = -1LL;
	int8_t x19 = -2;
	uint32_t x20 = 12670U;
	volatile int32_t t4 = -30;

	t4 = (((x17|x18)/x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	int32_t x23 = 311673760;
	static int32_t t5 = 10218;

	t5 = (((x21|x22)/x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = -1;
	static uint32_t x28 = 12032622U;
	static int32_t t6 = -727460;

	t6 = (((x25|x26)/x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -69343785402LL;
	uint64_t x30 = 6562447313085257177LLU;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = 12324078072LLU;

	t7 = (((x29|x30)/x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 992;

	t8 = (((x33|x34)/x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = -1LL;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 62;

	t9 = (((x37|x38)/x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int8_t x42 = -1;
	volatile int32_t t10 = 980548;

	t10 = (((x41|x42)/x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = -1;
	int64_t x48 = -1LL;
	int32_t t11 = -30485;

	t11 = (((x45|x46)/x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 35130U;
	uint8_t x51 = 9U;
	volatile uint8_t x52 = 10U;

	t12 = (((x49|x50)/x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	static uint16_t x55 = 50U;
	int64_t x56 = INT64_MIN;

	t13 = (((x53|x54)/x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 7U;
	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = -16327;

	t14 = (((x57|x58)/x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MIN;
	int32_t t15 = -1546753;

	t15 = (((x61|x62)/x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint8_t x66 = 2U;
	int32_t x68 = 93;
	static volatile int32_t t16 = 4;

	t16 = (((x65|x66)/x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 32U;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = 16633577610612890LLU;
	int8_t x72 = -1;

	t17 = (((x69|x70)/x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = 13U;
	uint8_t x76 = 105U;
	static volatile int32_t t18 = -6066416;

	t18 = (((x73|x74)/x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x79 = INT16_MIN;
	static int8_t x80 = INT8_MAX;
	int32_t t19 = -96411129;

	t19 = (((x77|x78)/x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1;
	int8_t x84 = INT8_MIN;

	t20 = (((x81|x82)/x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	static int16_t x86 = -1;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = -1;
	static volatile int32_t t21 = -209701472;

	t21 = (((x85|x86)/x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 6LLU;
	volatile int16_t x90 = INT16_MAX;
	uint8_t x91 = 14U;
	int64_t x92 = 93698967LL;
	int32_t t22 = -1558;

	t22 = (((x89|x90)/x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	static uint8_t x96 = 2U;
	volatile int32_t t23 = -3;

	t23 = (((x93|x94)/x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -4861LL;
	int64_t x98 = -17458164603LL;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 8303297;

	t24 = (((x97|x98)/x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	volatile int8_t x102 = -1;
	uint16_t x103 = 22U;
	static int8_t x104 = -1;

	t25 = (((x101|x102)/x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 1U;
	int8_t x107 = -1;
	volatile int8_t x108 = 1;
	int32_t t26 = 246803608;

	t26 = (((x105|x106)/x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -1;
	static uint16_t x112 = 74U;
	volatile int32_t t27 = 13124062;

	t27 = (((x109|x110)/x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = -1LL;
	volatile int8_t x114 = -1;
	static uint8_t x115 = 31U;
	int32_t x116 = -1;
	volatile int32_t t28 = 490079073;

	t28 = (((x113|x114)/x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static int16_t x118 = -1783;
	int64_t x119 = INT64_MAX;
	volatile int8_t x120 = -1;
	int32_t t29 = -446;

	t29 = (((x117|x118)/x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = 238U;
	int16_t x124 = -237;
	int32_t t30 = 41532;

	t30 = (((x121|x122)/x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 17;
	volatile int32_t x126 = -1;
	int8_t x127 = -1;
	uint16_t x128 = 1U;
	static volatile int32_t t31 = 210;

	t31 = (((x125|x126)/x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -4;
	static volatile int16_t x130 = INT16_MIN;
	uint8_t x131 = 3U;
	uint16_t x132 = 4U;
	volatile int32_t t32 = -24924;

	t32 = (((x129|x130)/x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	uint32_t x134 = 1429U;
	int32_t x135 = -1;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -134;

	t33 = (((x133|x134)/x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x139 = -1;
	uint16_t x140 = 4U;
	int32_t t34 = 3372;

	t34 = (((x137|x138)/x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 934U;
	static int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MAX;
	int64_t x144 = INT64_MAX;
	int32_t t35 = 1224;

	t35 = (((x141|x142)/x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static uint64_t x146 = UINT64_MAX;
	int8_t x147 = -62;
	volatile int32_t x148 = 629295014;
	static int32_t t36 = -30698;

	t36 = (((x145|x146)/x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -3;

	t37 = (((x149|x150)/x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x155 = 1LLU;
	volatile int64_t x156 = INT64_MIN;
	static int32_t t38 = -7959;

	t38 = (((x153|x154)/x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	int8_t x158 = INT8_MAX;
	int16_t x159 = -19;
	int16_t x160 = 539;
	volatile int32_t t39 = -35987;

	t39 = (((x157|x158)/x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MIN;
	uint16_t x163 = UINT16_MAX;

	t40 = (((x161|x162)/x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 44U;
	volatile int16_t x166 = -7;
	int64_t x167 = -1LL;
	volatile int64_t x168 = INT64_MAX;
	int32_t t41 = -12191;

	t41 = (((x165|x166)/x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	static int16_t x172 = INT16_MIN;
	static int32_t t42 = 1;

	t42 = (((x169|x170)/x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static uint16_t x174 = 30701U;
	static uint8_t x175 = 43U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -96689;

	t43 = (((x173|x174)/x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	static int32_t x178 = INT32_MIN;
	static volatile int64_t x179 = INT64_MIN;
	int64_t x180 = -1LL;

	t44 = (((x177|x178)/x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 2U;
	static volatile uint64_t x182 = UINT64_MAX;
	static volatile uint32_t x183 = UINT32_MAX;
	int32_t t45 = -4;

	t45 = (((x181|x182)/x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = -1;
	int32_t x188 = -1;
	volatile int32_t t46 = 119;

	t46 = (((x185|x186)/x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 376304769LLU;
	static int32_t x192 = 1;

	t47 = (((x189|x190)/x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = UINT32_MAX;
	static volatile int8_t x194 = INT8_MIN;
	volatile int32_t x195 = -1;
	static uint16_t x196 = UINT16_MAX;

	t48 = (((x193|x194)/x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 93230U;
	static int8_t x198 = -1;
	static volatile int32_t x199 = -5205;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 59679;

	t49 = (((x197|x198)/x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 1774963691U;
	static int8_t x202 = -1;
	uint8_t x203 = UINT8_MAX;
	static uint64_t x204 = UINT64_MAX;
	int32_t t50 = -1;

	t50 = (((x201|x202)/x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 124U;
	uint32_t x206 = 7U;
	uint8_t x207 = UINT8_MAX;
	static int64_t x208 = -4793LL;
	volatile int32_t t51 = 599;

	t51 = (((x205|x206)/x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x211 = -1LL;
	int64_t x212 = INT64_MIN;
	int32_t t52 = -4695;

	t52 = (((x209|x210)/x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 22323U;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 3U;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 161184;

	t53 = (((x213|x214)/x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 78817377U;
	int16_t x218 = 1;
	uint8_t x219 = 52U;
	int64_t x220 = 385LL;
	volatile int32_t t54 = -315362;

	t54 = (((x217|x218)/x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x222 = -1LL;
	int16_t x224 = 1;
	static int32_t t55 = -1;

	t55 = (((x221|x222)/x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	int32_t x226 = INT32_MIN;
	volatile int32_t t56 = 0;

	t56 = (((x225|x226)/x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int16_t x230 = 54;
	int32_t x231 = INT32_MIN;
	volatile int32_t t57 = -8092100;

	t57 = (((x229|x230)/x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	volatile uint8_t x234 = UINT8_MAX;
	int16_t x235 = -13355;
	int64_t x236 = -1LL;
	volatile int32_t t58 = 0;

	t58 = (((x233|x234)/x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 2U;
	static int32_t x238 = INT32_MAX;
	int8_t x239 = -1;
	static uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = 496914177;

	t59 = (((x237|x238)/x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 36302U;
	static uint16_t x242 = 4U;
	static int64_t x243 = INT64_MIN;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -786;

	t60 = (((x241|x242)/x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	int8_t x247 = -14;
	volatile int16_t x248 = -68;
	static volatile int32_t t61 = 52088244;

	t61 = (((x245|x246)/x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -865;
	int16_t x251 = -1;
	uint64_t x252 = 169485274LLU;
	int32_t t62 = 0;

	t62 = (((x249|x250)/x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 11167;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 1;
	volatile int32_t t63 = -5;

	t63 = (((x253|x254)/x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = 569;
	static int16_t x258 = INT16_MIN;
	volatile int8_t x259 = INT8_MIN;
	static volatile int16_t x260 = INT16_MIN;
	int32_t t64 = -535;

	t64 = (((x257|x258)/x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x263 = 4U;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = -1670;

	t65 = (((x261|x262)/x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 1207035685LLU;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MAX;

	t66 = (((x265|x266)/x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	int16_t x270 = 206;
	static volatile int64_t x271 = -290LL;

	t67 = (((x269|x270)/x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	volatile int16_t x275 = -1;
	int16_t x276 = -1;

	t68 = (((x273|x274)/x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = 21U;
	volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = 4066;

	t69 = (((x277|x278)/x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 72LLU;
	static int16_t x282 = -1;
	int64_t x283 = INT64_MAX;
	int32_t t70 = 5016967;

	t70 = (((x281|x282)/x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1095U;
	int8_t x286 = INT8_MIN;
	static int8_t x288 = 22;
	static int32_t t71 = -4739;

	t71 = (((x285|x286)/x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	uint8_t x290 = 117U;
	uint8_t x291 = 97U;
	int16_t x292 = INT16_MIN;
	static int32_t t72 = -12179842;

	t72 = (((x289|x290)/x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 3893;
	uint8_t x294 = 68U;
	int64_t x295 = -1LL;
	static uint16_t x296 = 655U;

	t73 = (((x293|x294)/x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x298 = 6U;
	static uint32_t x299 = UINT32_MAX;
	uint32_t x300 = 6U;
	int32_t t74 = 26272;

	t74 = (((x297|x298)/x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x303 = 1290161752LLU;
	uint16_t x304 = 6306U;
	int32_t t75 = 0;

	t75 = (((x301|x302)/x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	uint16_t x306 = 1U;
	int64_t x307 = INT64_MIN;
	int32_t x308 = 187155180;

	t76 = (((x305|x306)/x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -7;
	int16_t x310 = INT16_MAX;
	uint16_t x311 = 4U;
	int8_t x312 = INT8_MIN;
	int32_t t77 = 2;

	t77 = (((x309|x310)/x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 141533689LLU;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 0;

	t78 = (((x313|x314)/x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static uint64_t x318 = 727660974LLU;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 63U;
	volatile int32_t t79 = -16747;

	t79 = (((x317|x318)/x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int64_t x323 = 56LL;
	volatile int32_t x324 = INT32_MIN;

	t80 = (((x321|x322)/x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	static volatile int16_t x326 = 11527;
	static volatile int8_t x327 = INT8_MIN;
	int16_t x328 = 3;
	int32_t t81 = 2;

	t81 = (((x325|x326)/x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 7U;
	volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	static volatile uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -3;

	t82 = (((x329|x330)/x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 1;
	int64_t x334 = -1LL;
	int32_t x335 = -146494;
	static volatile int32_t t83 = -35541;

	t83 = (((x333|x334)/x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = 1087414;
	int8_t x338 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 2021830;

	t84 = (((x337|x338)/x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -8;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 28881U;
	static int32_t t85 = 258923998;

	t85 = (((x341|x342)/x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	volatile int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;

	t86 = (((x345|x346)/x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 30201560LLU;
	static int16_t x350 = INT16_MIN;
	uint8_t x351 = 26U;
	static int32_t x352 = -94;
	static int32_t t87 = -508707;

	t87 = (((x349|x350)/x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint32_t x354 = 898746U;
	static uint64_t x355 = 63951354288157666LLU;
	uint32_t x356 = UINT32_MAX;

	t88 = (((x353|x354)/x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x359 = INT8_MIN;
	int32_t t89 = -27;

	t89 = (((x357|x358)/x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x366 = INT16_MAX;
	int8_t x367 = -1;
	int32_t x368 = -2731580;
	volatile int32_t t90 = -2992;

	t90 = (((x365|x366)/x367)<x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = INT16_MIN;
	static uint8_t x370 = UINT8_MAX;
	static int8_t x371 = INT8_MAX;
	volatile int32_t t91 = -9203;

	t91 = (((x369|x370)/x371)<x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x374 = -12362;
	volatile int8_t x375 = -5;
	uint16_t x376 = UINT16_MAX;
	int32_t t92 = -21537;

	t92 = (((x373|x374)/x375)<x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MIN;
	int16_t x379 = 3;
	int16_t x380 = INT16_MAX;
	static volatile int32_t t93 = 447;

	t93 = (((x377|x378)/x379)<x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = 303U;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MAX;

	t94 = (((x381|x382)/x383)<x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = -67;
	static int64_t x386 = INT64_MAX;
	uint64_t x388 = 4LLU;
	static int32_t t95 = 26;

	t95 = (((x385|x386)/x387)<x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	static int8_t x391 = -1;
	uint32_t x392 = 30821301U;

	t96 = (((x389|x390)/x391)<x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x394 = INT16_MIN;
	volatile int64_t x396 = -2559426668LL;
	int32_t t97 = -253;

	t97 = (((x393|x394)/x395)<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MIN;
	static int16_t x398 = -12;
	volatile int16_t x399 = INT16_MIN;
	static int8_t x400 = INT8_MIN;

	t98 = (((x397|x398)/x399)<x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = 237333;
	static int64_t x404 = INT64_MAX;
	volatile int32_t t99 = 1984410;

	t99 = (((x401|x402)/x403)<x404);

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
