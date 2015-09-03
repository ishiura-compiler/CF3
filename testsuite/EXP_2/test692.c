#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = UINT8_MAX;
int8_t x18 = -1;
volatile uint64_t t4 = 70040917617366LLU;
uint32_t x29 = UINT32_MAX;
uint8_t x37 = UINT8_MAX;
static int16_t x38 = INT16_MAX;
int16_t x46 = -1;
volatile int32_t x47 = INT32_MIN;
volatile uint16_t x48 = UINT16_MAX;
int32_t t8 = -2;
uint16_t x66 = UINT16_MAX;
volatile uint64_t t12 = 4722402746585976LLU;
volatile int32_t x77 = -1;
volatile uint32_t t14 = 6U;
static int16_t x83 = INT16_MIN;
static uint16_t x85 = UINT16_MAX;
volatile int64_t x86 = INT64_MIN;
int8_t x90 = 1;
int32_t x96 = INT32_MIN;
volatile int64_t t18 = -211557LL;
int8_t x108 = 1;
uint64_t t22 = 335072473565861574LLU;
uint32_t x117 = UINT32_MAX;
volatile int64_t t23 = 410137LL;
volatile uint16_t x129 = 31U;
volatile int64_t x131 = INT64_MIN;
int64_t x132 = 13LL;
int64_t x133 = -50786380407LL;
uint16_t x155 = UINT16_MAX;
int8_t x162 = -1;
int64_t x163 = INT64_MIN;
static volatile uint32_t x168 = UINT32_MAX;
static int64_t t32 = 379387434LL;
static int64_t x178 = INT64_MIN;
int64_t x183 = -34173350368LL;
volatile uint64_t t35 = 4LLU;
static volatile uint64_t x198 = 218478792100491LLU;
uint64_t t38 = 6092258246587631190LLU;
static int8_t x201 = INT8_MAX;
uint64_t x204 = 0LLU;
int32_t x208 = -1;
int16_t x213 = INT16_MIN;
int64_t x215 = INT64_MIN;
uint64_t t42 = 2380442853286828744LLU;
uint8_t x217 = 17U;
int32_t t43 = -14697;
int16_t x222 = -1;
int32_t x227 = INT32_MIN;
int32_t x228 = 1340;
volatile int64_t t46 = 137LL;
volatile int32_t x249 = 425;
static int32_t t51 = -5596;
int8_t x254 = INT8_MIN;
volatile int8_t x257 = INT8_MIN;
static uint64_t x274 = 1360793187LLU;
static uint32_t x281 = 178U;
int16_t x284 = 16;
uint16_t x286 = UINT16_MAX;
volatile uint64_t t60 = 758662627621803LLU;
volatile int64_t x289 = INT64_MIN;
int16_t x291 = INT16_MIN;
int16_t x300 = -1;
int8_t x310 = -1;
int8_t x321 = -1;
static int16_t x322 = -13628;
int16_t x324 = 45;
int64_t x330 = -1004431783573332LL;
volatile int64_t t70 = -103783622LL;
volatile int32_t x346 = -1;
int64_t t72 = -303447499740LL;
int16_t x365 = INT16_MIN;
int32_t t78 = -30479;
int64_t t79 = -487731641087LL;
static uint8_t x389 = 14U;
static volatile int16_t x390 = -1;
int16_t x394 = -1;
volatile int64_t t81 = -18LL;
static int8_t x401 = INT8_MAX;
uint8_t x405 = UINT8_MAX;
int16_t x409 = INT16_MIN;
static int32_t x420 = -1;
volatile uint64_t t87 = 78LLU;
volatile int64_t x423 = 9730LL;
int8_t x428 = 8;
static uint64_t x433 = UINT64_MAX;
static int8_t x436 = INT8_MIN;
static uint32_t x443 = 128730U;
volatile uint32_t t92 = 1531U;
int64_t x445 = -14087103LL;
volatile int16_t x446 = INT16_MIN;
volatile uint64_t x447 = 8878962180241418039LLU;
uint64_t t93 = 11571681503LLU;
int16_t x449 = 5;
int8_t x451 = INT8_MAX;
static volatile int64_t t94 = 62850445LL;
uint16_t x457 = UINT16_MAX;
int16_t x464 = INT16_MIN;
static volatile uint64_t t99 = 1072443083275LLU;


void f0(void) {
	static volatile int8_t x5 = -1;
	static int32_t x7 = INT32_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t0 = 1546;

	t0 = ((x5-(x6%x7))*x8);

	if (t0 != -65280) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = -1;
	volatile int8_t x11 = -1;
	volatile int8_t x12 = INT8_MIN;
	uint32_t t1 = 294339195U;

	t1 = ((x9-(x10%x11))*x12);

	if (t1 != 128U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -4;
	static volatile uint16_t x14 = 225U;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t2 = 1460302;

	t2 = ((x13-(x14%x15))*x16);

	if (t2 != -15007515) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -929396142763LL;
	static uint64_t x19 = UINT64_MAX;
	volatile int16_t x20 = -1;
	static volatile uint64_t t3 = 1515740LLU;

	t3 = ((x17-(x18%x19))*x20);

	if (t3 != 929396142763LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = INT32_MIN;
	volatile int64_t x26 = INT64_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	uint64_t x28 = UINT64_MAX;

	t4 = ((x25-(x26%x27))*x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = -1LL;
	int64_t x31 = 6874910189963LL;
	volatile uint32_t x32 = 22U;
	int64_t t5 = -1816335425934859LL;

	t5 = ((x29-(x30%x31))*x32);

	if (t5 != 94489280512LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = -1;
	static uint32_t x34 = UINT32_MAX;
	int8_t x35 = 21;
	int8_t x36 = -39;
	static uint32_t t6 = 1457U;

	t6 = ((x33-(x34%x35))*x36);

	if (t6 != 156U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x39 = 121096629017LLU;
	uint64_t x40 = 1337714685023LLU;
	uint64_t t7 = 1030785796264996049LLU;

	t7 = ((x37-(x38%x39))*x40);

	if (t7 != 18403252293870083840LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = -135;

	t8 = ((x45-(x46%x47))*x48);

	if (t8 != -8781690) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = 2;
	static int16_t x55 = INT16_MIN;
	int64_t x56 = 347LL;
	int64_t t9 = -208160989224238LL;

	t9 = ((x53-(x54%x55))*x56);

	if (t9 != 11369455LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x57 = 195897694894294LLU;
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = 31674718;
	int32_t x60 = INT32_MAX;
	static uint64_t t10 = 88617616LLU;

	t10 = ((x57-(x58%x59))*x60);

	if (t10 != 9097739914178152234LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = -3;
	int8_t x67 = INT8_MIN;
	int8_t x68 = -4;
	static volatile int32_t t11 = 363;

	t11 = ((x65-(x66%x67))*x68);

	if (t11 != 520) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 13486079228LLU;
	volatile uint16_t x70 = 1297U;
	int32_t x71 = 42;
	uint16_t x72 = 250U;

	t12 = ((x69-(x70%x71))*x72);

	if (t12 != 3371519797750LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -64918667;
	int16_t x74 = INT16_MIN;
	int8_t x75 = -1;
	static uint64_t x76 = UINT64_MAX;
	static volatile uint64_t t13 = 26653369379051800LLU;

	t13 = ((x73-(x74%x75))*x76);

	if (t13 != 64918667LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x78 = 121866756U;
	int32_t x79 = -1;
	volatile int8_t x80 = -1;

	t14 = ((x77-(x78%x79))*x80);

	if (t14 != 121866757U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = 194;
	uint16_t x82 = UINT16_MAX;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t15 = -117384;

	t15 = ((x81-(x82%x83))*x84);

	if (t15 != -2134671555) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x87 = -198247;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t16 = 1424384701LLU;

	t16 = ((x85-(x86%x87))*x88);

	if (t16 != 18446744073709327838LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	uint32_t x92 = 104737U;
	static volatile int64_t t17 = 28196468812261LL;

	t17 = ((x89-(x90%x91))*x92);

	if (t17 != -3432126753LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = 75468LL;
	int8_t x94 = INT8_MIN;
	volatile int16_t x95 = -14590;

	t18 = ((x93-(x94%x95))*x96);

	if (t18 != -162341173854208LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	int64_t x103 = INT64_MAX;
	int8_t x104 = INT8_MIN;
	static volatile int64_t t19 = 111115LL;

	t19 = ((x101-(x102%x103))*x104);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	int16_t x106 = INT16_MAX;
	int64_t x107 = -1LL;
	static int64_t t20 = -51515101LL;

	t20 = ((x105-(x106%x107))*x108);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = 90U;
	int32_t x111 = -6113;
	static uint8_t x112 = UINT8_MAX;
	int32_t t21 = 4098229;

	t21 = ((x109-(x110%x111))*x112);

	if (t21 != -8378790) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MAX;
	uint64_t x114 = 17385119133112278LLU;
	int8_t x115 = -13;
	int64_t x116 = -1LL;

	t22 = ((x113-(x114%x115))*x116);

	if (t22 != 17385116985628631LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x118 = INT64_MAX;
	static int32_t x119 = 397438573;
	int64_t x120 = -1LL;

	t23 = ((x117-(x118%x119))*x120);

	if (t23 != -3909072513LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = UINT64_MAX;
	volatile uint64_t x122 = 126674067LLU;
	int8_t x123 = 2;
	uint32_t x124 = 232723U;
	uint64_t t24 = 141427498485341208LLU;

	t24 = ((x121-(x122%x123))*x124);

	if (t24 != 18446744073709086170LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x130 = INT64_MIN;
	int64_t t25 = -24509LL;

	t25 = ((x129-(x130%x131))*x132);

	if (t25 != 403LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = INT32_MIN;
	int16_t x136 = -1;
	int64_t t26 = 1859LL;

	t26 = ((x133-(x134%x135))*x136);

	if (t26 != 50786347639LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = 32;
	int16_t x144 = INT16_MIN;
	static int32_t t27 = -100;

	t27 = ((x141-(x142%x143))*x144);

	if (t27 != 1074757632) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	static int8_t x150 = INT8_MIN;
	int16_t x151 = -3;
	static int16_t x152 = -1;
	int32_t t28 = 28;

	t28 = ((x149-(x150%x151))*x152);

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x153 = -1;
	int64_t x154 = -134120095LL;
	uint8_t x156 = 0U;
	volatile int64_t t29 = 8400061304LL;

	t29 = ((x153-(x154%x155))*x156);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = -1;
	volatile int16_t x164 = INT16_MIN;
	int64_t t30 = 3718463LL;

	t30 = ((x161-(x162%x163))*x164);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x165 = 5U;
	uint64_t x166 = 30895817LLU;
	int8_t x167 = INT8_MAX;
	volatile uint64_t t31 = 401991558244949LLU;

	t31 = ((x165-(x166%x167))*x168);

	if (t31 != 18446744013580009486LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x170 = INT32_MIN;
	static int64_t x171 = INT64_MIN;
	int32_t x172 = 8414776;

	t32 = ((x169-(x170%x171))*x172);

	if (t32 != 54211781576333768LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x173 = 1;
	volatile int8_t x174 = -1;
	static int64_t x175 = -1LL;
	int8_t x176 = -54;
	volatile int64_t t33 = -746LL;

	t33 = ((x173-(x174%x175))*x176);

	if (t33 != -54LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = 106U;
	uint64_t x179 = 88346153126210LLU;
	static int16_t x180 = INT16_MIN;
	uint64_t t34 = 84LLU;

	t34 = ((x177-(x178%x179))*x180);

	if (t34 != 1102658877905371136LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	static int64_t x182 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;

	t35 = ((x181-(x182%x183))*x184);

	if (t35 != 18446744059863646145LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = 48U;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = -1;
	volatile uint64_t t36 = 64LLU;

	t36 = ((x185-(x186%x187))*x188);

	if (t36 != 79LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x193 = UINT8_MAX;
	static int32_t x194 = 4;
	uint8_t x195 = 18U;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t37 = -2;

	t37 = ((x193-(x194%x195))*x196);

	if (t37 != -8224768) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = INT8_MIN;
	int8_t x199 = -1;
	uint16_t x200 = 1U;

	t38 = ((x197-(x198%x199))*x200);

	if (t38 != 18446525594917450997LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x202 = INT32_MAX;
	static volatile int64_t x203 = INT64_MIN;
	static uint64_t t39 = 274LLU;

	t39 = ((x201-(x202%x203))*x204);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = 1052003920;
	volatile int16_t x206 = 1845;
	static uint16_t x207 = UINT16_MAX;
	int32_t t40 = -1102;

	t40 = ((x205-(x206%x207))*x208);

	if (t40 != -1052002075) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = 0U;
	int32_t x210 = -56218516;
	int16_t x211 = -1;
	int32_t x212 = -6818220;
	volatile int32_t t41 = -2485878;

	t41 = ((x209-(x210%x211))*x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x214 = -1;
	uint64_t x216 = 6094626808720LLU;

	t42 = ((x213-(x214%x215))*x216);

	if (t42 != 18247041437068223376LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x218 = -107;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;

	t43 = ((x217-(x218%x219))*x220);

	if (t43 != -4063232) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MAX;
	int32_t x223 = -59649;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t44 = 12;

	t44 = ((x221-(x222%x223))*x224);

	if (t44 != 32640) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 9U;
	uint32_t t45 = 58089U;

	t45 = ((x225-(x226%x227))*x228);

	if (t45 != 4294955236U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x229 = -1;
	volatile int64_t x230 = -166473218LL;
	int32_t x231 = -100;
	int16_t x232 = INT16_MAX;

	t46 = ((x229-(x230%x231))*x232);

	if (t46 != 557039LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = -122LL;
	static volatile int16_t x235 = -60;
	uint16_t x236 = 574U;
	volatile int64_t t47 = -1023LL;

	t47 = ((x233-(x234%x235))*x236);

	if (t47 != 37618238LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x237 = -6;
	int64_t x238 = INT64_MIN;
	static int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;
	int64_t t48 = 6LL;

	t48 = ((x237-(x238%x239))*x240);

	if (t48 != 6LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -1;
	int16_t x243 = INT16_MIN;
	int16_t x244 = 87;
	static int32_t t49 = 75;

	t49 = ((x241-(x242%x243))*x244);

	if (t49 != 5701632) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x245 = -72777736652LL;
	static uint16_t x246 = 6U;
	int64_t x247 = -4423221360337LL;
	int8_t x248 = -12;
	int64_t t50 = 17829309096042LL;

	t50 = ((x245-(x246%x247))*x248);

	if (t50 != 873332839896LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x250 = -62;
	int32_t x251 = -908121;
	int16_t x252 = -1;

	t51 = ((x249-(x250%x251))*x252);

	if (t51 != -487) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x253 = -1LL;
	int16_t x255 = INT16_MAX;
	uint16_t x256 = 12053U;
	volatile int64_t t52 = 84102191LL;

	t52 = ((x253-(x254%x255))*x256);

	if (t52 != 1530731LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x258 = 15U;
	volatile int16_t x259 = INT16_MAX;
	static int16_t x260 = -1;
	volatile int32_t t53 = -11656;

	t53 = ((x257-(x258%x259))*x260);

	if (t53 != 143) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x261 = INT32_MIN;
	uint64_t x262 = 2225529629880603LLU;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = -492728382;
	uint64_t t54 = 1218297183474831LLU;

	t54 = ((x261-(x262%x263))*x264);

	if (t54 != 15970288607324058762LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = 2948096371780530204LLU;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 46062824070034LLU;
	static volatile uint64_t t55 = 2379985LLU;

	t55 = ((x265-(x266%x267))*x268);

	if (t55 != 1402222622575722614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = 50;
	static int16_t x271 = INT16_MIN;
	static volatile uint8_t x272 = 0U;
	volatile uint64_t t56 = 83801513361711862LLU;

	t56 = ((x269-(x270%x271))*x272);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x273 = INT16_MAX;
	int32_t x275 = INT32_MAX;
	uint16_t x276 = 6U;
	volatile uint64_t t57 = 14LLU;

	t57 = ((x273-(x274%x275))*x276);

	if (t57 != 18446744065544989096LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -1;
	int8_t x278 = -7;
	uint8_t x279 = 15U;
	static volatile int16_t x280 = INT16_MAX;
	volatile int32_t t58 = 54898;

	t58 = ((x277-(x278%x279))*x280);

	if (t58 != 196602) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MAX;
	uint32_t t59 = 7U;

	t59 = ((x281-(x282%x283))*x284);

	if (t59 != 2864U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = 783;
	uint64_t x287 = 3752585896LLU;
	static volatile uint64_t x288 = 628024739386854LLU;

	t60 = ((x285-(x286%x287))*x288);

	if (t60 != 14674374296351084640LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x290 = 34051313LLU;
	int8_t x292 = INT8_MIN;
	volatile uint64_t t61 = 14875014679674LLU;

	t61 = ((x289-(x290%x291))*x292);

	if (t61 != 4358568064LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x297 = -4;
	int8_t x298 = INT8_MAX;
	volatile int32_t x299 = -57331688;
	static int32_t t62 = -133803;

	t62 = ((x297-(x298%x299))*x300);

	if (t62 != 131) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	volatile uint64_t x307 = 10LLU;
	volatile int8_t x308 = 14;
	volatile uint64_t t63 = 15459LLU;

	t63 = ((x305-(x306%x307))*x308);

	if (t63 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x309 = -15;
	uint8_t x311 = 5U;
	int8_t x312 = INT8_MIN;
	volatile int32_t t64 = -4710;

	t64 = ((x309-(x310%x311))*x312);

	if (t64 != 1792) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x313 = INT16_MIN;
	static int32_t x314 = INT32_MAX;
	volatile int64_t x315 = INT64_MIN;
	static volatile uint64_t x316 = 12036764620956LLU;
	volatile uint64_t t65 = 23LLU;

	t65 = ((x313-(x314%x315))*x316);

	if (t65 != 13185584346528372892LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x317 = 66U;
	int8_t x318 = 4;
	int8_t x319 = -4;
	uint8_t x320 = 2U;
	static uint32_t t66 = 20751U;

	t66 = ((x317-(x318%x319))*x320);

	if (t66 != 132U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x323 = UINT64_MAX;
	static uint64_t t67 = 43006658LLU;

	t67 = ((x321-(x322%x323))*x324);

	if (t67 != 613215LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x325 = INT8_MIN;
	uint64_t x326 = 38LLU;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = INT16_MAX;
	static volatile uint64_t t68 = 26351433LLU;

	t68 = ((x325-(x326%x327))*x328);

	if (t68 != 18446744073704112294LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = -1201;
	static int16_t x331 = -1;
	uint64_t x332 = 2927559114803LLU;
	uint64_t t69 = 11809424552LLU;

	t69 = ((x329-(x330%x331))*x332);

	if (t69 != 18443228075212673213LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = INT16_MIN;
	static uint8_t x334 = UINT8_MAX;
	int64_t x335 = -30572781LL;
	int64_t x336 = -59LL;

	t70 = ((x333-(x334%x335))*x336);

	if (t70 != 1948357LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = 30LL;
	static int64_t x342 = INT64_MIN;
	int16_t x343 = -1;
	int8_t x344 = INT8_MIN;
	volatile int64_t t71 = 1LL;

	t71 = ((x341-(x342%x343))*x344);

	if (t71 != -3840LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x345 = 43;
	int64_t x347 = INT64_MAX;
	int32_t x348 = INT32_MIN;

	t72 = ((x345-(x346%x347))*x348);

	if (t72 != -94489280512LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x353 = 0;
	int8_t x354 = INT8_MAX;
	volatile int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	uint64_t t73 = 0LLU;

	t73 = ((x353-(x354%x355))*x356);

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x357 = -1;
	int16_t x358 = INT16_MAX;
	static int8_t x359 = INT8_MIN;
	volatile int16_t x360 = INT16_MIN;
	volatile int32_t t74 = 478;

	t74 = ((x357-(x358%x359))*x360);

	if (t74 != 4194304) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x361 = 7363U;
	int64_t x362 = 238861589509LL;
	int64_t x363 = -529LL;
	uint16_t x364 = 23901U;
	volatile int64_t t75 = -106902949798LL;

	t75 = ((x361-(x362%x363))*x364);

	if (t75 != 167522109LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = 42U;
	volatile int64_t t76 = 6113148385LL;

	t76 = ((x365-(x366%x367))*x368);

	if (t76 != -1386966LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = -1;
	int16_t x370 = -1;
	static int64_t x371 = -1LL;
	volatile int16_t x372 = -1;
	int64_t t77 = 52217779215977938LL;

	t77 = ((x369-(x370%x371))*x372);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int8_t x374 = INT8_MIN;
	int16_t x375 = -1;
	int32_t x376 = -1;

	t78 = ((x373-(x374%x375))*x376);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x385 = 13LL;
	int16_t x386 = INT16_MAX;
	int64_t x387 = INT64_MIN;
	static int16_t x388 = -1835;

	t79 = ((x385-(x386%x387))*x388);

	if (t79 != 60103590LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x391 = INT32_MAX;
	int8_t x392 = 4;
	int32_t t80 = -8228;

	t80 = ((x389-(x390%x391))*x392);

	if (t80 != 60) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = -1;
	int32_t x395 = INT32_MAX;
	static int64_t x396 = INT64_MIN;

	t81 = ((x393-(x394%x395))*x396);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MIN;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 66369936781977118LLU;
	volatile uint64_t t82 = 852LLU;

	t82 = ((x397-(x398%x399))*x400);

	if (t82 != 8495351908093071104LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = INT64_MAX;
	static int32_t x404 = INT32_MIN;
	volatile int64_t t83 = -839976281133506LL;

	t83 = ((x401-(x402%x403))*x404);

	if (t83 != 140462610448384LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x406 = -29;
	volatile int64_t x407 = -991620410188584LL;
	int8_t x408 = 0;
	int64_t t84 = -777LL;

	t84 = ((x405-(x406%x407))*x408);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x410 = INT32_MIN;
	uint8_t x411 = 61U;
	volatile uint16_t x412 = UINT16_MAX;
	int32_t t85 = 60374;

	t85 = ((x409-(x410%x411))*x412);

	if (t85 != -2143584315) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = INT8_MIN;
	volatile int64_t x414 = -23080487LL;
	int16_t x415 = -1686;
	int8_t x416 = INT8_MIN;
	static int64_t t86 = -34459LL;

	t86 = ((x413-(x414%x415))*x416);

	if (t86 != -90240LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x417 = -614787;
	uint64_t x418 = 3082667327LLU;
	volatile int32_t x419 = INT32_MIN;

	t87 = ((x417-(x418%x419))*x420);

	if (t87 != 3083282114LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x421 = INT16_MAX;
	int16_t x422 = 11495;
	int32_t x424 = -16;
	volatile int64_t t88 = 759LL;

	t88 = ((x421-(x422%x423))*x424);

	if (t88 != -496032LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x425 = INT16_MIN;
	uint8_t x426 = 3U;
	volatile int64_t x427 = INT64_MIN;
	static int64_t t89 = 229417283LL;

	t89 = ((x425-(x426%x427))*x428);

	if (t89 != -262168LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x434 = INT32_MIN;
	uint32_t x435 = UINT32_MAX;
	volatile uint64_t t90 = 3937530LLU;

	t90 = ((x433-(x434%x435))*x436);

	if (t90 != 274877907072LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x437 = -3;
	static int8_t x438 = INT8_MIN;
	int32_t x439 = -1;
	volatile int8_t x440 = -1;
	volatile int32_t t91 = 333086481;

	t91 = ((x437-(x438%x439))*x440);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x441 = 6U;
	uint16_t x442 = 410U;
	uint8_t x444 = UINT8_MAX;

	t92 = ((x441-(x442%x443))*x444);

	if (t92 != 4294864276U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x448 = -1;

	t93 = ((x445-(x446%x447))*x448);

	if (t93 != 688819713240769873LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x450 = -1LL;
	int64_t x452 = -2417676LL;

	t94 = ((x449-(x450%x451))*x452);

	if (t94 != -14506056LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x453 = 1315048LLU;
	int64_t x454 = INT64_MAX;
	int32_t x455 = INT32_MAX;
	uint32_t x456 = UINT32_MAX;
	uint64_t t95 = 9584LLU;

	t95 = ((x453-(x454%x455))*x456);

	if (t95 != 5648083856387865LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = 1858474U;
	uint16_t x459 = UINT16_MAX;
	int32_t x460 = INT32_MIN;
	volatile uint32_t t96 = 21U;

	t96 = ((x457-(x458%x459))*x460);

	if (t96 != 2147483648U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x461 = INT16_MAX;
	uint64_t x462 = UINT64_MAX;
	static int64_t x463 = -1LL;
	volatile uint64_t t97 = 113LLU;

	t97 = ((x461-(x462%x463))*x464);

	if (t97 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x469 = -1LL;
	static int8_t x470 = INT8_MIN;
	int16_t x471 = -1;
	static volatile uint32_t x472 = 1121U;
	volatile int64_t t98 = 32LL;

	t98 = ((x469-(x470%x471))*x472);

	if (t98 != -1121LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x473 = 6987474776076640LLU;
	static volatile int16_t x474 = 38;
	int32_t x475 = INT32_MAX;
	uint8_t x476 = UINT8_MAX;

	t99 = ((x473-(x474%x475))*x476);

	if (t99 != 1781806067899533510LLU) { NG(); } else { ; }
	
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

