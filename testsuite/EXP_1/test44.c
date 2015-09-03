#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MIN;
volatile int32_t t1 = -655391463;
int8_t x9 = 4;
static uint8_t x13 = 0U;
volatile int32_t t3 = 203602;
volatile int32_t x18 = 131857163;
uint32_t x34 = 81417833U;
static uint64_t x35 = 63911085893LLU;
int64_t x44 = -1LL;
int8_t x46 = 1;
uint64_t t11 = 3894060290LLU;
uint32_t x58 = UINT32_MAX;
uint32_t t13 = 158092772U;
int64_t x65 = -1LL;
int32_t x67 = INT32_MIN;
uint16_t x75 = 4U;
int64_t t18 = 439141152LL;
int8_t x82 = 2;
int8_t x83 = 21;
int8_t x85 = INT8_MAX;
static uint8_t x87 = 1U;
uint64_t t21 = 170503644175LLU;
static uint16_t x94 = UINT16_MAX;
volatile int64_t x104 = INT64_MIN;
int64_t t23 = -63208489LL;
volatile int32_t x105 = 421480015;
static uint16_t x116 = 305U;
int64_t x121 = -196LL;
static int64_t t28 = 5LL;
uint32_t x128 = 326579615U;
volatile uint32_t t29 = 26277032U;
uint8_t x135 = 76U;
uint8_t x142 = 7U;
uint64_t x146 = UINT64_MAX;
volatile int8_t x150 = INT8_MAX;
volatile int64_t t36 = 261905973596038602LL;
int64_t x165 = -15078719LL;
volatile int32_t x171 = INT32_MIN;
uint16_t x182 = UINT16_MAX;
static int64_t t40 = 516182408992836783LL;
int64_t x185 = INT64_MIN;
int32_t x188 = 195;
uint8_t x189 = UINT8_MAX;
uint64_t t42 = 41051443446815LLU;
volatile uint8_t x194 = UINT8_MAX;
int8_t x198 = INT8_MAX;
volatile int8_t x211 = -1;
int8_t x212 = INT8_MIN;
int8_t x218 = -31;
static int16_t x219 = 10900;
static int16_t x226 = -1;
int64_t x228 = 3140490555LL;
int32_t x232 = -81458;
int32_t x234 = INT32_MIN;
volatile int8_t x244 = INT8_MAX;
volatile int64_t t53 = -610354035236LL;
static int32_t x254 = INT32_MIN;
int32_t x257 = 3236;
int8_t x258 = -1;
int64_t t59 = -375019032303341LL;
uint16_t x289 = 4618U;
uint8_t x300 = UINT8_MAX;
volatile int64_t t63 = 190LL;
uint32_t x317 = 50U;
int16_t x323 = INT16_MIN;
int32_t t69 = 311;
int8_t x325 = INT8_MIN;
uint32_t x327 = 11U;
volatile int64_t t70 = -2420446553382423LL;
volatile int16_t x329 = INT16_MIN;
volatile int8_t x332 = 4;
static int16_t x335 = INT16_MIN;
static int64_t x348 = INT64_MIN;
uint64_t x370 = 365096LLU;
uint8_t x381 = 1U;
volatile int64_t t80 = 1LL;
volatile uint64_t t81 = 1218416360LLU;
uint16_t x392 = 911U;
int64_t x403 = -1LL;
static uint64_t x404 = 32465305906627LLU;
volatile uint32_t t86 = 1705U;
uint64_t x418 = 27256995LLU;
static volatile int64_t x423 = INT64_MAX;
volatile int16_t x425 = INT16_MIN;
uint64_t x432 = 6216571997476111335LLU;
int16_t x437 = 66;
volatile uint32_t t93 = 1712U;
int8_t x451 = 1;
volatile int16_t x468 = INT16_MIN;
static int8_t x476 = INT8_MIN;
volatile int32_t t99 = -413488;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = -1;
	int8_t x3 = -3;
	int64_t t0 = 2LL;

	t0 = (((x1+x2)/x3)%x4);

	if (t0 != 10923LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -220272970;
	int16_t x6 = 376;
	int8_t x7 = INT8_MIN;
	volatile int8_t x8 = INT8_MIN;

	t1 = (((x5+x6)/x7)%x8);

	if (t1 != 47) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 88U;
	volatile int8_t x11 = INT8_MAX;
	static volatile int32_t x12 = 1;
	volatile int32_t t2 = -59406329;

	t2 = (((x9+x10)/x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = -1;
	int8_t x15 = INT8_MAX;
	int16_t x16 = INT16_MIN;

	t3 = (((x13+x14)/x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t x20 = 377445;
	static volatile int32_t t4 = 68696;

	t4 = (((x17+x18)/x19)%x20);

	if (t4 != 139641) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	uint32_t x26 = UINT32_MAX;
	static uint16_t x27 = 2U;
	uint16_t x28 = UINT16_MAX;
	uint32_t t5 = 18057802U;

	t5 = (((x25+x26)/x27)%x28);

	if (t5 != 16383U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 1050760961984LLU;
	static volatile uint32_t x30 = 374864U;
	static volatile int64_t x31 = -1LL;
	int64_t x32 = -468595975315391LL;
	static uint64_t t6 = 6009525131744984LLU;

	t6 = (((x29+x30)/x31)%x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 1U;
	uint32_t x36 = 3979U;
	uint64_t t7 = 836LLU;

	t7 = (((x33+x34)/x35)%x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t8 = 1226206448550333270LL;

	t8 = (((x37+x38)/x39)%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	volatile int8_t x42 = -1;
	int64_t x43 = 1981853947LL;
	volatile int64_t t9 = -15842608943147461LL;

	t9 = (((x41+x42)/x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int16_t x47 = 184;
	volatile int16_t x48 = -1;
	uint64_t t10 = 14813182454LLU;

	t10 = (((x45+x46)/x47)%x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	int32_t x50 = 507672129;
	int64_t x51 = 741888LL;
	int16_t x52 = -1;

	t11 = (((x49+x50)/x51)%x52);

	if (t11 != 684LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint8_t x54 = 1U;
	uint32_t x55 = 22299189U;
	static volatile int8_t x56 = -1;
	volatile uint32_t t12 = 262U;

	t12 = (((x53+x54)/x55)%x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -1;
	static int8_t x59 = 8;
	int8_t x60 = 56;

	t13 = (((x57+x58)/x59)%x60);

	if (t13 != 31U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = INT16_MAX;
	uint16_t x62 = UINT16_MAX;
	static uint16_t x63 = 5U;
	int8_t x64 = 2;
	int32_t t14 = 227;

	t14 = (((x61+x62)/x63)%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = UINT8_MAX;
	uint16_t x68 = 86U;
	static int64_t t15 = 1670856524LL;

	t15 = (((x65+x66)/x67)%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 4267U;
	int16_t x70 = -1;
	volatile int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MAX;
	uint32_t t16 = 309U;

	t16 = (((x69+x70)/x71)%x72);

	if (t16 != 33U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -6;
	static int8_t x74 = INT8_MAX;
	uint32_t x76 = 682131673U;
	volatile uint32_t t17 = 2U;

	t17 = (((x73+x74)/x75)%x76);

	if (t17 != 30U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	static int16_t x78 = INT16_MIN;
	volatile int64_t x79 = 29431873706LL;
	uint8_t x80 = UINT8_MAX;

	t18 = (((x77+x78)/x79)%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 2U;
	static volatile uint16_t x84 = 2U;
	volatile int32_t t19 = -103796053;

	t19 = (((x81+x82)/x83)%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	static int32_t x88 = INT32_MAX;
	volatile int64_t t20 = 0LL;

	t20 = (((x85+x86)/x87)%x88);

	if (t20 != -2147483522LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	volatile int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 620846561665LLU;

	t21 = (((x89+x90)/x91)%x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	int64_t x95 = 460587LL;
	static int32_t x96 = INT32_MIN;
	int64_t t22 = -994424LL;

	t22 = (((x93+x94)/x95)%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -254642378LL;
	int16_t x102 = 40;
	static int8_t x103 = 20;

	t23 = (((x101+x102)/x103)%x104);

	if (t23 != -12732116LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = 63U;
	int16_t x107 = INT16_MAX;
	uint8_t x108 = 2U;
	static uint32_t t24 = 12663584U;

	t24 = (((x105+x106)/x107)%x108);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x109 = 2024;
	static volatile int64_t x110 = -1LL;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = INT8_MAX;
	int64_t t25 = -2186298991659280LL;

	t25 = (((x109+x110)/x111)%x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile int8_t x114 = -6;
	static int64_t x115 = -1LL;
	volatile int64_t t26 = 548890342703LL;

	t26 = (((x113+x114)/x115)%x116);

	if (t26 != 134LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MAX;
	static uint32_t x118 = 169433U;
	uint64_t x119 = UINT64_MAX;
	int8_t x120 = -1;
	uint64_t t27 = 2199LLU;

	t27 = (((x117+x118)/x119)%x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = -95217;
	uint16_t x123 = 1U;
	int64_t x124 = INT64_MIN;

	t28 = (((x121+x122)/x123)%x124);

	if (t28 != -95413LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 44803798;
	int8_t x126 = -28;
	int8_t x127 = INT8_MIN;

	t29 = (((x125+x126)/x127)%x128);

	if (t29 != 49082272U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -62;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	static uint8_t x132 = 127U;
	volatile int32_t t30 = -10;

	t30 = (((x129+x130)/x131)%x132);

	if (t30 != 64) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t31 = 37662U;

	t31 = (((x133+x134)/x135)%x136);

	if (t31 != 56512727U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -1LL;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 109U;
	int32_t x140 = 361516;
	volatile int64_t t32 = 13023016099155LL;

	t32 = (((x137+x138)/x139)%x140);

	if (t32 != -179820LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	int64_t x143 = -116397509LL;
	int16_t x144 = INT16_MIN;
	static int64_t t33 = 1999730568968185LL;

	t33 = (((x141+x142)/x143)%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MAX;
	uint64_t x147 = UINT64_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile uint64_t t34 = 18200968342LLU;

	t34 = (((x145+x146)/x147)%x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = 1;
	static int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	int64_t t35 = 577LL;

	t35 = (((x149+x150)/x151)%x152);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 1048641U;
	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = -31242713LL;
	static int64_t x156 = INT64_MIN;

	t36 = (((x153+x154)/x155)%x156);

	if (t36 != -68LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x166 = INT16_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	volatile int16_t x168 = INT16_MIN;
	int64_t t37 = 58236480486402526LL;

	t37 = (((x165+x166)/x167)%x168);

	if (t37 != -229LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 8U;
	volatile uint16_t x170 = 0U;
	int64_t x172 = INT64_MAX;
	int64_t t38 = -19296803591LL;

	t38 = (((x169+x170)/x171)%x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = 2U;
	static int8_t x179 = INT8_MAX;
	static volatile int64_t x180 = -63035927052438464LL;
	int64_t t39 = -974944033LL;

	t39 = (((x177+x178)/x179)%x180);

	if (t39 != 33818639LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	int64_t x183 = -1LL;
	static uint8_t x184 = 96U;

	t40 = (((x181+x182)/x183)%x184);

	if (t40 != -31LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x186 = 60;
	volatile int8_t x187 = INT8_MIN;
	volatile int64_t t41 = -44178613072873LL;

	t41 = (((x185+x186)/x187)%x188);

	if (t41 != 60LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = 800;
	uint64_t x192 = 486178LLU;

	t42 = (((x189+x190)/x191)%x192);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 79U;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -2;
	uint32_t t43 = 236372U;

	t43 = (((x193+x194)/x195)%x196);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 1639718LLU;
	uint16_t x199 = 2461U;
	int32_t x200 = -124;
	uint64_t t44 = 467LLU;

	t44 = (((x197+x198)/x199)%x200);

	if (t44 != 666LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = -7657;
	volatile uint8_t x206 = 6U;
	static int64_t x207 = -638727LL;
	static uint16_t x208 = 445U;
	int64_t t45 = 1LL;

	t45 = (((x205+x206)/x207)%x208);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	int64_t t46 = 487264085479264LL;

	t46 = (((x209+x210)/x211)%x212);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x217 = 29;
	int16_t x220 = INT16_MAX;
	int32_t t47 = -341932;

	t47 = (((x217+x218)/x219)%x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MAX;
	int8_t x227 = INT8_MIN;
	int64_t t48 = 41LL;

	t48 = (((x225+x226)/x227)%x228);

	if (t48 != -2384053320LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MAX;
	static volatile int16_t x230 = -20;
	uint8_t x231 = 62U;
	volatile int32_t t49 = 21;

	t49 = (((x229+x230)/x231)%x232);

	if (t49 != 528) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = 4U;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = -1;
	volatile uint32_t t50 = 0U;

	t50 = (((x233+x234)/x235)%x236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x241 = 124392722927346081LL;
	int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	int64_t t51 = -19753LL;

	t51 = (((x241+x242)/x243)%x244);

	if (t51 != -42LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	static int32_t x248 = INT32_MIN;
	volatile uint32_t t52 = 364U;

	t52 = (((x245+x246)/x247)%x248);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x249 = INT64_MIN;
	uint8_t x250 = 7U;
	int8_t x251 = INT8_MIN;
	int16_t x252 = 1;

	t53 = (((x249+x250)/x251)%x252);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = INT16_MAX;
	int64_t x255 = INT64_MIN;
	static int32_t x256 = INT32_MAX;
	volatile int64_t t54 = 3076736641946104LL;

	t54 = (((x253+x254)/x255)%x256);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x259 = 67583092LLU;
	int32_t x260 = INT32_MIN;
	uint64_t t55 = 20LLU;

	t55 = (((x257+x258)/x259)%x260);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = 51;
	int32_t x262 = INT32_MIN;
	volatile uint16_t x263 = 23724U;
	int32_t x264 = -1;
	static volatile int32_t t56 = -40139711;

	t56 = (((x261+x262)/x263)%x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x269 = 215423LLU;
	uint64_t x270 = UINT64_MAX;
	static int32_t x271 = INT32_MIN;
	uint16_t x272 = 97U;
	volatile uint64_t t57 = 32078LLU;

	t57 = (((x269+x270)/x271)%x272);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = 509555182LL;
	int64_t t58 = -659555041374526LL;

	t58 = (((x277+x278)/x279)%x280);

	if (t58 != -8421504LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x281 = INT64_MIN;
	uint32_t x282 = 2345974U;
	int8_t x283 = INT8_MIN;
	static int32_t x284 = INT32_MIN;

	t59 = (((x281+x282)/x283)%x284);

	if (t59 != 2147465320LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = -1;
	int8_t x286 = -4;
	int32_t x287 = INT32_MIN;
	static uint64_t x288 = 17073331100LLU;
	uint64_t t60 = 2076855037363892LLU;

	t60 = (((x285+x286)/x287)%x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x290 = -2;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -1;
	int64_t t61 = -2101789736436LL;

	t61 = (((x289+x290)/x291)%x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x293 = 2U;
	int64_t x294 = -1LL;
	static int32_t x295 = INT32_MAX;
	int16_t x296 = 14774;
	static int64_t t62 = -50441302LL;

	t62 = (((x293+x294)/x295)%x296);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = -1;
	uint32_t x298 = 224U;
	int64_t x299 = INT64_MAX;

	t63 = (((x297+x298)/x299)%x300);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MIN;
	static uint64_t t64 = 18451836728097LLU;

	t64 = (((x301+x302)/x303)%x304);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 21713161658042601LLU;
	volatile int16_t x306 = -1;
	int32_t x307 = INT32_MAX;
	static int16_t x308 = -4;
	uint64_t t65 = 20715098LLU;

	t65 = (((x305+x306)/x307)%x308);

	if (t65 != 10110978LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MIN;
	volatile int64_t x310 = INT64_MAX;
	int8_t x311 = -9;
	uint64_t x312 = 7858017897798564LLU;
	volatile uint64_t t66 = 24153559LLU;

	t66 = (((x309+x310)/x311)%x312);

	if (t66 != 699279322658322LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = INT16_MIN;
	int64_t x314 = -561LL;
	int8_t x315 = INT8_MAX;
	int64_t x316 = -1LL;
	int64_t t67 = -14LL;

	t67 = (((x313+x314)/x315)%x316);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -520972LL;
	static int64_t t68 = 3569907495783415467LL;

	t68 = (((x317+x318)/x319)%x320);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 66U;
	int16_t x322 = INT16_MIN;
	int32_t x324 = -1;

	t69 = (((x321+x322)/x323)%x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x326 = INT8_MAX;
	int64_t x328 = INT64_MIN;

	t70 = (((x325+x326)/x327)%x328);

	if (t70 != 390451572LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x330 = INT8_MIN;
	static volatile int8_t x331 = INT8_MIN;
	int32_t t71 = -27657801;

	t71 = (((x329+x330)/x331)%x332);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x333 = 12110893533164776LL;
	uint32_t x334 = 16555079U;
	static int8_t x336 = -14;
	int64_t t72 = -761LL;

	t72 = (((x333+x334)/x335)%x336);

	if (t72 != -13LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x337 = INT64_MAX;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	static volatile int64_t t73 = -1651931405842LL;

	t73 = (((x337+x338)/x339)%x340);

	if (t73 != -32511LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = 0;
	static int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	static volatile int64_t t74 = 9062LL;

	t74 = (((x345+x346)/x347)%x348);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x349 = 914;
	static volatile uint64_t x350 = 257366280086567254LLU;
	uint64_t x351 = 5311886LLU;
	int64_t x352 = -3840009866LL;
	volatile uint64_t t75 = 17LLU;

	t75 = (((x349+x350)/x351)%x352);

	if (t75 != 48451017225LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MAX;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = 3;
	int16_t x356 = -1;
	static volatile uint64_t t76 = 39528250527LLU;

	t76 = (((x353+x354)/x355)%x356);

	if (t76 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x361 = 53022226386575784LL;
	int64_t x362 = INT64_MIN;
	int16_t x363 = -16;
	static uint64_t x364 = 416054140LLU;
	static uint64_t t77 = 3506498104LLU;

	t77 = (((x361+x362)/x363)%x364);

	if (t77 != 335106781LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = 1LL;
	static int32_t x371 = INT32_MIN;
	volatile int8_t x372 = INT8_MAX;
	volatile uint64_t t78 = 122229951198026848LLU;

	t78 = (((x369+x370)/x371)%x372);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x377 = INT16_MAX;
	int32_t x378 = -1257;
	uint32_t x379 = 751392U;
	volatile int32_t x380 = -499;
	volatile uint32_t t79 = 255486U;

	t79 = (((x377+x378)/x379)%x380);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x382 = 1;
	volatile uint32_t x383 = UINT32_MAX;
	static int64_t x384 = INT64_MAX;

	t80 = (((x381+x382)/x383)%x384);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x385 = INT8_MIN;
	static uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = -1LL;
	volatile int8_t x388 = INT8_MIN;

	t81 = (((x385+x386)/x387)%x388);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = INT8_MIN;
	volatile uint64_t x390 = 25395923180528LLU;
	int8_t x391 = INT8_MIN;
	uint64_t t82 = 42239659LLU;

	t82 = (((x389+x390)/x391)%x392);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x393 = 1U;
	volatile int16_t x394 = -1;
	volatile uint64_t x395 = 13936537LLU;
	int8_t x396 = INT8_MAX;
	uint64_t t83 = 285802787512LLU;

	t83 = (((x393+x394)/x395)%x396);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x401 = -1;
	uint8_t x402 = 59U;
	volatile uint64_t t84 = 127978LLU;

	t84 = (((x401+x402)/x403)%x404);

	if (t84 != 22188175903412LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x409 = -1;
	uint8_t x410 = 31U;
	int16_t x411 = INT16_MIN;
	int16_t x412 = 240;
	int32_t t85 = 479;

	t85 = (((x409+x410)/x411)%x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = 42067872U;
	static volatile int16_t x415 = INT16_MIN;
	volatile int8_t x416 = -3;

	t86 = (((x413+x414)/x415)%x416);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x417 = 253946286759LLU;
	int64_t x419 = -3231449759LL;
	int64_t x420 = INT64_MIN;
	static volatile uint64_t t87 = 266005340464803LLU;

	t87 = (((x417+x418)/x419)%x420);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x421 = UINT8_MAX;
	static int32_t x422 = INT32_MIN;
	int64_t x424 = INT64_MIN;
	int64_t t88 = 35271813087464768LL;

	t88 = (((x421+x422)/x423)%x424);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x426 = 496;
	int32_t x427 = -1;
	static int8_t x428 = INT8_MIN;
	int32_t t89 = -2;

	t89 = (((x425+x426)/x427)%x428);

	if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x429 = 859U;
	static uint64_t x430 = 12682LLU;
	int64_t x431 = INT64_MIN;
	volatile uint64_t t90 = 8066251619LLU;

	t90 = (((x429+x430)/x431)%x432);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x433 = 18306045024982694LL;
	volatile uint32_t x434 = 302U;
	int64_t x435 = INT64_MAX;
	volatile int64_t x436 = -2807033882134104502LL;
	volatile int64_t t91 = 5869147LL;

	t91 = (((x433+x434)/x435)%x436);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x438 = 1;
	int16_t x439 = -11;
	uint16_t x440 = 59U;
	volatile int32_t t92 = 0;

	t92 = (((x437+x438)/x439)%x440);

	if (t92 != -6) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x441 = 0U;
	uint32_t x442 = 7983969U;
	volatile uint16_t x443 = 3443U;
	int16_t x444 = INT16_MIN;

	t93 = (((x441+x442)/x443)%x444);

	if (t93 != 2318U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x449 = -1LL;
	int8_t x450 = -1;
	int32_t x452 = INT32_MAX;
	int64_t t94 = -495271906LL;

	t94 = (((x449+x450)/x451)%x452);

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x461 = INT16_MIN;
	uint64_t x462 = 59259LLU;
	int8_t x463 = INT8_MAX;
	int64_t x464 = INT64_MIN;
	uint64_t t95 = 1082131184549521LLU;

	t95 = (((x461+x462)/x463)%x464);

	if (t95 != 208LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = 206U;
	volatile uint64_t x466 = 123756677889490878LLU;
	int8_t x467 = -1;
	uint64_t t96 = 12078204279038991LLU;

	t96 = (((x465+x466)/x467)%x468);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = -27;
	int64_t x474 = -12LL;
	static volatile int64_t x475 = 1079393466724LL;
	volatile int64_t t97 = 130976672LL;

	t97 = (((x473+x474)/x475)%x476);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x477 = UINT64_MAX;
	volatile int32_t x478 = INT32_MIN;
	int8_t x479 = 19;
	int8_t x480 = -1;
	volatile uint64_t t98 = 3613828884LLU;

	t98 = (((x477+x478)/x479)%x480);

	if (t98 != 970881266924319366LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x481 = 240382872;
	int16_t x482 = INT16_MIN;
	int8_t x483 = 4;
	int16_t x484 = -1;

	t99 = (((x481+x482)/x483)%x484);

	if (t99 != 0) { NG(); } else { ; }
	
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

