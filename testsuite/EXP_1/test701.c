#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 8U;
int32_t x4 = INT32_MIN;
int8_t x8 = 1;
static volatile int16_t x9 = INT16_MIN;
static int32_t x18 = -8;
uint8_t x19 = UINT8_MAX;
int16_t x20 = INT16_MIN;
uint32_t x21 = 80U;
volatile uint16_t x24 = UINT16_MAX;
volatile int16_t x30 = -3843;
int8_t x31 = INT8_MAX;
uint64_t x44 = 199465754LLU;
int16_t x48 = -681;
static volatile int8_t x56 = 24;
int64_t t13 = 17528211734925LL;
static int16_t x58 = -4;
static int32_t x63 = -1;
volatile int64_t x64 = INT64_MIN;
uint32_t t16 = 22103U;
int8_t x73 = INT8_MIN;
int32_t x75 = 0;
uint32_t t18 = 7U;
int16_t x82 = INT16_MIN;
uint32_t x83 = 26855U;
volatile int32_t x85 = INT32_MIN;
uint8_t x95 = UINT8_MAX;
uint32_t t23 = 15U;
uint8_t x99 = UINT8_MAX;
int32_t x103 = -1;
volatile int32_t t25 = 218323;
uint16_t x111 = UINT16_MAX;
int32_t x119 = -1;
int64_t x123 = INT64_MAX;
static int16_t x126 = -1;
volatile int64_t x133 = INT64_MIN;
uint32_t x136 = UINT32_MAX;
volatile int64_t t32 = 198104404LL;
volatile int16_t x148 = INT16_MIN;
uint32_t x151 = 78855U;
uint64_t x154 = UINT64_MAX;
int64_t x155 = 9289LL;
static uint32_t x158 = UINT32_MAX;
uint64_t x161 = 2262963619394679727LLU;
int32_t x171 = -1;
volatile int16_t x172 = INT16_MIN;
uint32_t t38 = 99995002U;
volatile int32_t x176 = -1;
static int8_t x183 = INT8_MIN;
int32_t t43 = 49836;
int16_t x199 = INT16_MAX;
volatile int16_t x207 = -3;
int16_t x215 = 5251;
volatile int32_t x218 = 460267863;
int64_t x219 = INT64_MIN;
volatile uint64_t x224 = 4665730LLU;
int8_t x228 = -1;
volatile uint32_t t50 = UINT32_MAX;
static int8_t x230 = INT8_MIN;
static uint64_t x233 = 9140523679402LLU;
int64_t x237 = INT64_MAX;
static int64_t x246 = INT64_MIN;
volatile int16_t x248 = INT16_MIN;
uint32_t x249 = 38409U;
uint64_t x263 = 100277902521604759LLU;
int16_t x264 = -6;
static int64_t x266 = 63488497116118281LL;
int32_t x284 = -1906;
uint16_t x285 = 1233U;
int8_t x289 = INT8_MIN;
static int8_t x292 = INT8_MIN;
int64_t x293 = -29351920545LL;
static int64_t x298 = INT64_MIN;
volatile uint32_t t69 = 833U;
static volatile int32_t t70 = -120;
static uint64_t x317 = UINT64_MAX;
int16_t x319 = INT16_MIN;
uint64_t t74 = 378753446LLU;
int64_t t76 = -289495LL;
uint64_t t77 = UINT64_MAX;
uint16_t x347 = 14U;
volatile uint64_t t79 = 518846719798168LLU;
int16_t x350 = 101;
int32_t t80 = -417730615;
volatile int32_t x353 = 17;
static uint16_t x354 = 17556U;
int32_t x368 = -1;
volatile uint64_t t84 = UINT64_MAX;
static volatile int64_t x372 = INT64_MIN;
uint8_t x373 = UINT8_MAX;
volatile int16_t x374 = -163;
volatile uint8_t x376 = 7U;
volatile uint64_t x379 = UINT64_MAX;
volatile int16_t x400 = INT16_MAX;
volatile int32_t t91 = -15;
int32_t x401 = 74331;
int16_t x402 = INT16_MIN;
int64_t t92 = -22505693561LL;
uint64_t t95 = 31253711LLU;
int16_t x430 = -1315;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	int32_t t0 = 825457778;

	t0 = (((x1%x2)-x3)|x4);

	if (t0 != -2147450873) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int16_t x6 = -696;
	int32_t x7 = -1;
	int32_t t1 = -718615137;

	t1 = (((x5%x6)-x7)|x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 7309;
	int32_t x11 = INT32_MIN;
	uint64_t x12 = 3290184010631971072LLU;
	volatile uint64_t t2 = 4LLU;

	t2 = (((x9%x10)-x11)|x12);

	if (t2 != 3290184010910659380LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint32_t x14 = 192354766U;
	uint64_t x15 = 379409365604670LLU;
	uint16_t x16 = UINT16_MAX;
	uint64_t t3 = 248172888LLU;

	t3 = (((x13%x14)-x15)|x16);

	if (t3 != 18446364664502812671LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -58;
	int32_t t4 = 28693;

	t4 = (((x17%x18)-x19)|x20);

	if (t4 != -257) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 3570;
	static int16_t x23 = -1890;
	volatile uint32_t t5 = 81474232U;

	t5 = (((x21%x22)-x23)|x24);

	if (t5 != 65535U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -318;
	static volatile uint32_t x26 = 204U;
	int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	volatile int64_t t6 = -3513016668742300LL;

	t6 = (((x25%x26)-x27)|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	static int64_t x32 = -52LL;
	int64_t t7 = 8641LL;

	t7 = (((x29%x30)-x31)|x32);

	if (t7 != -20LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static int32_t x34 = 338567896;
	int16_t x35 = INT16_MIN;
	volatile int32_t x36 = -11;
	static volatile uint32_t t8 = UINT32_MAX;

	t8 = (((x33%x34)-x35)|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint16_t x38 = 39U;
	int8_t x39 = 52;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = -69;

	t9 = (((x37%x38)-x39)|x40);

	if (t9 != -63) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MAX;
	volatile uint64_t t10 = 50861234021636LLU;

	t10 = (((x41%x42)-x43)|x44);

	if (t10 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	static uint64_t x46 = UINT64_MAX;
	int8_t x47 = 16;
	uint64_t t11 = UINT64_MAX;

	t11 = (((x45%x46)-x47)|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int32_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -1;
	static int32_t t12 = 9;

	t12 = (((x49%x50)-x51)|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static int64_t x54 = -12363LL;
	uint8_t x55 = UINT8_MAX;

	t13 = (((x53%x54)-x55)|x56);

	if (t13 != -6053LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 46U;
	static volatile uint64_t x59 = 10105LLU;
	uint8_t x60 = UINT8_MAX;
	volatile uint64_t t14 = 395695712950LLU;

	t14 = (((x57%x58)-x59)|x60);

	if (t14 != 18446744073709541631LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 1LL;
	int64_t x62 = INT64_MAX;
	volatile int64_t t15 = -2101716LL;

	t15 = (((x61%x62)-x63)|x64);

	if (t15 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	static volatile uint16_t x68 = 33U;

	t16 = (((x65%x66)-x67)|x68);

	if (t16 != 2147516415U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -3;
	int16_t x70 = -2974;
	volatile uint8_t x71 = 4U;
	static int16_t x72 = -1;
	volatile int32_t t17 = -14;

	t17 = (((x69%x70)-x71)|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = UINT32_MAX;
	int32_t x76 = -65133163;

	t18 = (((x73%x74)-x75)|x76);

	if (t18 != 4294967189U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 3873481LLU;
	int64_t x78 = INT64_MAX;
	uint32_t x79 = 1634882U;
	uint8_t x80 = UINT8_MAX;
	volatile uint64_t t19 = 12287198380866LLU;

	t19 = (((x77%x78)-x79)|x80);

	if (t19 != 2238719LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int32_t x84 = 31073478;
	volatile uint32_t t20 = 16093U;

	t20 = (((x81%x82)-x83)|x84);

	if (t20 != 4294948831U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = -1;
	uint32_t x87 = 437544U;
	int64_t x88 = 391241656952954879LL;
	volatile int64_t t21 = -248903LL;

	t21 = (((x85%x86)-x87)|x88);

	if (t21 != 391241657757818879LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = 1;
	uint32_t x91 = UINT32_MAX;
	static volatile int16_t x92 = 1444;
	int64_t t22 = 408953698806LL;

	t22 = (((x89%x90)-x91)|x92);

	if (t22 != -4294965851LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int16_t x94 = INT16_MAX;
	volatile uint32_t x96 = 1564U;

	t23 = (((x93%x94)-x95)|x96);

	if (t23 != 4294967070U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	uint32_t x100 = UINT32_MAX;
	uint64_t t24 = 498350LLU;

	t24 = (((x97%x98)-x99)|x100);

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 15U;
	volatile uint16_t x102 = 1U;
	int16_t x104 = INT16_MAX;

	t25 = (((x101%x102)-x103)|x104);

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -2272LL;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (((x105%x106)-x107)|x108);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	volatile int32_t x110 = INT32_MAX;
	static int8_t x112 = -33;
	int32_t t27 = -192005;

	t27 = (((x109%x110)-x111)|x112);

	if (t27 != -33) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 20U;
	int16_t x114 = INT16_MAX;
	static int32_t x115 = 19355839;
	static int8_t x116 = -1;
	static int32_t t28 = 58466;

	t28 = (((x113%x114)-x115)|x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = 3;
	volatile int16_t x120 = INT16_MIN;
	int64_t t29 = -14694445799159LL;

	t29 = (((x117%x118)-x119)|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 5986720337LL;
	uint8_t x122 = 33U;
	int16_t x124 = -1;
	int64_t t30 = 12497795856LL;

	t30 = (((x121%x122)-x123)|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 149683734956LL;
	uint8_t x127 = 30U;
	int32_t x128 = INT32_MIN;
	volatile int64_t t31 = 774235854LL;

	t31 = (((x125%x126)-x127)|x128);

	if (t31 != -30LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x134 = INT8_MAX;
	volatile int8_t x135 = INT8_MIN;

	t32 = (((x133%x134)-x135)|x136);

	if (t32 != 4294967295LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = UINT8_MAX;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MIN;
	uint64_t t33 = 105LLU;

	t33 = (((x145%x146)-x147)|x148);

	if (t33 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	uint64_t x150 = 87136595LLU;
	int32_t x152 = -2201074;
	static uint64_t t34 = 738849572229LLU;

	t34 = (((x149%x150)-x151)|x152);

	if (t34 != 18446744073707421343LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t35 = 125194LLU;

	t35 = (((x153%x154)-x155)|x156);

	if (t35 != 18446744073709542327LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = -106321189713LL;
	static int32_t x159 = -1056;
	int64_t x160 = INT64_MIN;
	int64_t t36 = 509171709807014LL;

	t36 = (((x157%x158)-x159)|x160);

	if (t36 != -3241973577LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 3U;
	volatile int8_t x164 = INT8_MAX;
	static volatile uint64_t t37 = 97766844426228LLU;

	t37 = (((x161%x162)-x163)|x164);

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x169 = 5U;
	static int8_t x170 = INT8_MIN;

	t38 = (((x169%x170)-x171)|x172);

	if (t38 != 4294934534U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x174 = -670013961712134785LL;
	volatile uint8_t x175 = 2U;
	static int64_t t39 = -17686785535684466LL;

	t39 = (((x173%x174)-x175)|x176);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MAX;
	static uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MAX;
	volatile int64_t t40 = -106950004026157961LL;

	t40 = (((x177%x178)-x179)|x180);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x181 = 1LLU;
	volatile int32_t x182 = 3795238;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t41 = 0LLU;

	t41 = (((x181%x182)-x183)|x184);

	if (t41 != 18446744073709518977LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MAX;
	uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = 10092551;
	uint64_t x188 = 458LLU;
	volatile uint64_t t42 = 7875584LLU;

	t42 = (((x185%x186)-x187)|x188);

	if (t42 != 18446744073699459578LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MAX;
	static int16_t x194 = INT16_MIN;
	static int16_t x195 = 0;
	int16_t x196 = INT16_MAX;

	t43 = (((x193%x194)-x195)|x196);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x198 = INT8_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	uint32_t t44 = UINT32_MAX;

	t44 = (((x197%x198)-x199)|x200);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = -14479;
	volatile uint32_t x206 = UINT32_MAX;
	int32_t x208 = INT32_MIN;
	uint32_t t45 = 120U;

	t45 = (((x205%x206)-x207)|x208);

	if (t45 != 4294952820U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	uint8_t x211 = 51U;
	volatile int32_t x212 = 946542740;
	static volatile int64_t t46 = 10853LL;

	t46 = (((x209%x210)-x211)|x212);

	if (t46 != -35LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = 1097614307869LL;
	volatile uint16_t x214 = UINT16_MAX;
	int8_t x216 = INT8_MAX;
	volatile int64_t t47 = 1089340488734118LL;

	t47 = (((x213%x214)-x215)|x216);

	if (t47 != 44543LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x217 = -5124;
	uint8_t x220 = UINT8_MAX;
	int64_t t48 = -5571LL;

	t48 = (((x217%x218)-x219)|x220);

	if (t48 != 9223372036854770687LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MAX;
	static volatile int32_t x222 = INT32_MIN;
	volatile uint32_t x223 = UINT32_MAX;
	volatile uint64_t t49 = 6169LLU;

	t49 = (((x221%x222)-x223)|x224);

	if (t49 != 4665730LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = -2;
	volatile uint16_t x226 = 4142U;
	uint32_t x227 = UINT32_MAX;

	t50 = (((x225%x226)-x227)|x228);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x229 = 0U;
	volatile int32_t x231 = -8;
	static int64_t x232 = INT64_MIN;
	volatile int64_t t51 = -84639315516144797LL;

	t51 = (((x229%x230)-x231)|x232);

	if (t51 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x234 = 57361LL;
	static volatile int16_t x235 = -1;
	int32_t x236 = INT32_MIN;
	uint64_t t52 = 215447977571377LLU;

	t52 = (((x233%x234)-x235)|x236);

	if (t52 != 18446744071562099409LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x238 = 44043;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = 53754;
	uint64_t t53 = 11232836LLU;

	t53 = (((x237%x238)-x239)|x240);

	if (t53 != 63995LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	int32_t x243 = -1;
	volatile uint32_t x244 = 482U;
	static uint64_t t54 = 32927992LLU;

	t54 = (((x241%x242)-x243)|x244);

	if (t54 != 18446744073709519331LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 119U;
	static int32_t x247 = 14;
	int64_t t55 = 630277440889LL;

	t55 = (((x245%x246)-x247)|x248);

	if (t55 != -32663LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x250 = 6;
	volatile int16_t x251 = INT16_MIN;
	volatile int32_t x252 = -43704531;
	static volatile uint32_t t56 = 196U;

	t56 = (((x249%x250)-x251)|x252);

	if (t56 != 4251295535U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = -26;
	volatile uint8_t x254 = 3U;
	int64_t x255 = 99LL;
	int32_t x256 = INT32_MIN;
	int64_t t57 = -2187696LL;

	t57 = (((x253%x254)-x255)|x256);

	if (t57 != -101LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x257 = UINT16_MAX;
	static volatile int64_t x258 = INT64_MIN;
	uint8_t x259 = 28U;
	uint32_t x260 = UINT32_MAX;
	static volatile int64_t t58 = -1993155588996LL;

	t58 = (((x257%x258)-x259)|x260);

	if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x261 = INT8_MIN;
	uint16_t x262 = UINT16_MAX;
	volatile uint64_t t59 = 38782LLU;

	t59 = (((x261%x262)-x263)|x264);

	if (t59 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MIN;
	int16_t x267 = -46;
	volatile int64_t x268 = 239405826359LL;
	volatile int64_t t60 = 40557467229LL;

	t60 = (((x265%x266)-x267)|x268);

	if (t60 != -1112342209LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x269 = 111U;
	int32_t x270 = -2366;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t61 = 27657789;

	t61 = (((x269%x270)-x271)|x272);

	if (t61 != -32656) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = INT64_MIN;
	static int64_t x278 = -1LL;
	static int16_t x279 = 1;
	int64_t x280 = INT64_MIN;
	int64_t t62 = -124LL;

	t62 = (((x277%x278)-x279)|x280);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	uint16_t x283 = 42U;
	volatile uint64_t t63 = 527581741425LLU;

	t63 = (((x281%x282)-x283)|x284);

	if (t63 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = -1LL;
	int64_t t64 = -1378276312538LL;

	t64 = (((x285%x286)-x287)|x288);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x290 = INT8_MIN;
	static uint64_t x291 = 3127987831398114LLU;
	uint64_t t65 = 9914754157838351LLU;

	t65 = (((x289%x290)-x291)|x292);

	if (t65 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x294 = 22U;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 24U;
	int64_t t66 = 1LL;

	t66 = (((x293%x294)-x295)|x296);

	if (t66 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x297 = INT64_MAX;
	uint8_t x299 = 105U;
	int8_t x300 = -1;
	int64_t t67 = 2LL;

	t67 = (((x297%x298)-x299)|x300);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = INT8_MIN;
	static uint64_t x304 = 3677439054LLU;
	uint64_t t68 = 10416659497544LLU;

	t68 = (((x301%x302)-x303)|x304);

	if (t68 != 3677439103LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MAX;
	uint32_t x306 = 15219843U;
	volatile int16_t x307 = INT16_MIN;
	uint16_t x308 = 11U;

	t69 = (((x305%x306)-x307)|x308);

	if (t69 != 65535U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -10;
	int16_t x310 = -1;
	static volatile int32_t x311 = INT32_MAX;
	uint16_t x312 = 14U;

	t70 = (((x309%x310)-x311)|x312);

	if (t70 != -2147483633) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x313 = UINT8_MAX;
	uint64_t x314 = 1320LLU;
	int32_t x315 = INT32_MIN;
	int32_t x316 = -1;
	static volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x313%x314)-x315)|x316);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x318 = -1;
	static int8_t x320 = -1;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x317%x318)-x319)|x320);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int16_t x322 = INT16_MIN;
	uint8_t x323 = 20U;
	static uint16_t x324 = 6055U;
	uint64_t t73 = 229608179348351685LLU;

	t73 = (((x321%x322)-x323)|x324);

	if (t73 != 32751LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = 937530472LL;
	static uint64_t x326 = UINT64_MAX;
	int32_t x327 = -482613482;
	static int8_t x328 = INT8_MIN;

	t74 = (((x325%x326)-x327)|x328);

	if (t74 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = INT16_MIN;
	static int8_t x330 = 1;
	int16_t x331 = 7312;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t75 = 43;

	t75 = (((x329%x330)-x331)|x332);

	if (t75 != -7312) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	static int32_t x335 = 1885954;
	volatile uint8_t x336 = UINT8_MAX;

	t76 = (((x333%x334)-x335)|x336);

	if (t76 != -1885953LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x337 = -7;
	volatile int64_t x338 = 17308380462LL;
	int16_t x339 = -115;
	uint64_t x340 = UINT64_MAX;

	t77 = (((x337%x338)-x339)|x340);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x341 = UINT16_MAX;
	int16_t x342 = INT16_MIN;
	static int16_t x343 = -1;
	uint8_t x344 = 5U;
	int32_t t78 = -489;

	t78 = (((x341%x342)-x343)|x344);

	if (t78 != 32773) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MIN;
	static uint64_t x346 = 1474411511738180350LLU;
	int32_t x348 = -57347;

	t79 = (((x345%x346)-x347)|x348);

	if (t79 != 18446744073709543423LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x349 = UINT8_MAX;
	static int16_t x351 = INT16_MIN;
	static int32_t x352 = -98295;

	t80 = (((x349%x350)-x351)|x352);

	if (t80 != -98243) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x355 = -1;
	static int16_t x356 = 3;
	int32_t t81 = 1311;

	t81 = (((x353%x354)-x355)|x356);

	if (t81 != 19) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MAX;
	static int32_t x358 = INT32_MIN;
	int8_t x359 = -1;
	int16_t x360 = INT16_MIN;
	volatile int64_t t82 = -1989916340605LL;

	t82 = (((x357%x358)-x359)|x360);

	if (t82 != -32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x361 = INT64_MAX;
	volatile int32_t x362 = INT32_MIN;
	int16_t x363 = 0;
	int64_t x364 = INT64_MAX;
	int64_t t83 = INT64_MAX;

	t83 = (((x361%x362)-x363)|x364);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = 256560U;
	static uint64_t x366 = 10342978LLU;
	int32_t x367 = INT32_MIN;

	t84 = (((x365%x366)-x367)|x368);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = UINT16_MAX;
	uint16_t x370 = UINT16_MAX;
	static uint8_t x371 = 5U;
	int64_t t85 = -17LL;

	t85 = (((x369%x370)-x371)|x372);

	if (t85 != -5LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x375 = -29831;
	int32_t t86 = 726638;

	t86 = (((x373%x374)-x375)|x376);

	if (t86 != 29927) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x377 = INT32_MIN;
	volatile int8_t x378 = -1;
	uint32_t x380 = UINT32_MAX;
	volatile uint64_t t87 = 1115LLU;

	t87 = (((x377%x378)-x379)|x380);

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x385 = INT64_MAX;
	int32_t x386 = -259197658;
	uint64_t x387 = UINT64_MAX;
	volatile int32_t x388 = INT32_MAX;
	uint64_t t88 = 44703245699LLU;

	t88 = (((x385%x386)-x387)|x388);

	if (t88 != 2147483647LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	static uint8_t x390 = 1U;
	int16_t x391 = INT16_MAX;
	int32_t x392 = 0;
	int32_t t89 = 14977;

	t89 = (((x389%x390)-x391)|x392);

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MIN;
	static int16_t x394 = 2972;
	uint64_t x395 = 5940645514693LLU;
	int8_t x396 = INT8_MAX;
	uint64_t t90 = 46420853661193210LLU;

	t90 = (((x393%x394)-x395)|x396);

	if (t90 != 18446738133064036863LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 5U;
	int8_t x398 = -7;
	static volatile int16_t x399 = INT16_MIN;

	t91 = (((x397%x398)-x399)|x400);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x403 = -1LL;
	static uint32_t x404 = 8U;

	t92 = (((x401%x402)-x403)|x404);

	if (t92 != 8796LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MAX;
	uint64_t x407 = 22534601573637LLU;
	volatile int8_t x408 = INT8_MIN;
	uint64_t t93 = 302846221161LLU;

	t93 = (((x405%x406)-x407)|x408);

	if (t93 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MAX;
	uint32_t x410 = 820415U;
	static int8_t x411 = 0;
	static volatile uint8_t x412 = 1U;
	uint32_t t94 = 2U;

	t94 = (((x409%x410)-x411)|x412);

	if (t94 != 32767U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -1;
	int64_t x414 = INT64_MIN;
	uint32_t x415 = 221555958U;
	uint64_t x416 = 12LLU;

	t95 = (((x413%x414)-x415)|x416);

	if (t95 != 18446744073487995661LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x417 = INT16_MIN;
	static uint64_t x418 = 66489420LLU;
	uint16_t x419 = 5866U;
	int64_t x420 = -512LL;
	volatile uint64_t t96 = 21323319LLU;

	t96 = (((x417%x418)-x419)|x420);

	if (t96 != 18446744073709551454LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x421 = INT16_MIN;
	static uint64_t x422 = 45276LLU;
	int32_t x423 = 13;
	int64_t x424 = INT64_MIN;
	volatile uint64_t t97 = 23267LLU;

	t97 = (((x421%x422)-x423)|x424);

	if (t97 != 9223372036854816039LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	static volatile uint8_t x426 = 82U;
	int64_t x427 = -1023LL;
	uint16_t x428 = 29861U;
	volatile int64_t t98 = 23518159LL;

	t98 = (((x425%x426)-x427)|x428);

	if (t98 != 30709LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x429 = INT64_MIN;
	static volatile int32_t x431 = -1;
	uint8_t x432 = 14U;
	volatile int64_t t99 = -244284288892LL;

	t99 = (((x429%x430)-x431)|x432);

	if (t99 != -577LL) { NG(); } else { ; }
	
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

