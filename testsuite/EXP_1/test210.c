#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 53231U;
static uint32_t t1 = 1U;
int32_t x22 = -14947430;
int64_t x25 = -685856641708073LL;
int16_t x28 = -84;
volatile int16_t x35 = 163;
uint64_t t4 = 50780LLU;
volatile uint32_t t5 = 0U;
int32_t x53 = INT32_MAX;
int8_t x54 = 63;
int8_t x56 = INT8_MAX;
static int8_t x60 = 0;
int8_t x61 = 1;
int8_t x70 = -12;
volatile int8_t x71 = -31;
static int64_t t13 = -1LL;
int16_t x84 = INT16_MAX;
int16_t x94 = -1;
uint16_t x96 = 4749U;
int32_t t17 = 7919;
int8_t x99 = -38;
static uint16_t x105 = 3694U;
int16_t x111 = -1;
uint8_t x112 = UINT8_MAX;
static int32_t t21 = 1044155019;
int16_t x116 = 5;
uint32_t t23 = 197445U;
static int8_t x135 = -1;
int16_t x136 = INT16_MIN;
volatile int32_t t25 = -3232711;
uint16_t x143 = 1U;
int32_t x149 = -1778;
int32_t x151 = INT32_MIN;
uint64_t x153 = 0LLU;
int32_t x158 = INT32_MIN;
int32_t x163 = 2;
uint16_t x177 = 112U;
int16_t x178 = INT16_MIN;
volatile int32_t t33 = -3336;
uint32_t x192 = 1U;
int64_t t36 = -751LL;
int16_t x197 = -1;
int8_t x201 = -1;
volatile uint32_t t39 = 801291808U;
static volatile int64_t t40 = -12312LL;
uint16_t x215 = UINT16_MAX;
int8_t x245 = 0;
int16_t x258 = INT16_MIN;
static int64_t x266 = -1LL;
volatile uint8_t x267 = 51U;
static volatile int64_t t50 = 4LL;
uint16_t x274 = UINT16_MAX;
int8_t x276 = INT8_MIN;
volatile int16_t x287 = INT16_MAX;
static volatile uint16_t x299 = 2929U;
static volatile int32_t t56 = -6000;
int16_t x306 = INT16_MIN;
static int8_t x307 = 4;
uint16_t x309 = UINT16_MAX;
int64_t x311 = INT64_MIN;
uint8_t x312 = 37U;
int16_t x313 = -1;
uint64_t x318 = UINT64_MAX;
int64_t x321 = -238809LL;
uint8_t x324 = 1U;
int16_t x329 = 0;
uint8_t x332 = 99U;
volatile int16_t x341 = 2795;
uint8_t x343 = 30U;
int16_t x346 = 15532;
int32_t x347 = INT32_MIN;
uint16_t x349 = 0U;
uint16_t x351 = 542U;
static uint64_t x359 = UINT64_MAX;
volatile int32_t x360 = INT32_MIN;
uint64_t t70 = 1516330899354801804LLU;
int8_t x362 = INT8_MIN;
volatile int64_t t71 = -1504406373925362LL;
int16_t x377 = INT16_MIN;
int16_t x387 = INT16_MAX;
static int64_t t77 = -3047730180293114LL;
int32_t x398 = -1;
volatile uint64_t t78 = 28290687LLU;
volatile int64_t t84 = -641652112908LL;
uint16_t x442 = UINT16_MAX;
volatile int64_t t86 = 16214762LL;
int64_t t87 = 0LL;
int16_t x461 = INT16_MIN;
int16_t x463 = -1;
int32_t x465 = 0;
uint16_t x467 = UINT16_MAX;
static uint64_t t93 = 1752621053LLU;
static volatile int32_t t94 = 27454;
int16_t x481 = -1;
volatile int64_t x489 = -532436925319136972LL;
static uint32_t x490 = 79786899U;
volatile int32_t x505 = -1;
uint64_t t99 = 7144565406170LLU;


void f0(void) {
	int8_t x1 = 31;
	volatile int8_t x2 = -1;
	volatile uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;

	t0 = (((x1-x2)/x3)-x4);

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x13 = -1;
	static uint32_t x14 = UINT32_MAX;
	int32_t x15 = -1;
	int8_t x16 = -1;

	t1 = (((x13-x14)/x15)-x16);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x21 = INT8_MIN;
	int64_t x23 = -1LL;
	volatile int32_t x24 = INT32_MIN;
	static int64_t t2 = -261105599657644738LL;

	t2 = (((x21-x22)/x23)-x24);

	if (t2 != 2132536346LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x26 = -1;
	int8_t x27 = 15;
	int64_t t3 = -261LL;

	t3 = (((x25-x26)/x27)-x28);

	if (t3 != -45723776113787LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x33 = 11961122134601LLU;
	uint64_t x34 = 14737190LLU;
	static uint16_t x36 = 499U;

	t4 = (((x33-x34)/x35)-x36);

	if (t4 != 73381026478LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 7U;
	int8_t x38 = -4;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MIN;

	t5 = (((x37-x38)/x39)-x40);

	if (t5 != 128U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x45 = INT16_MIN;
	uint8_t x46 = UINT8_MAX;
	static uint64_t x47 = 3549222136LLU;
	volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t6 = 506549LLU;

	t6 = (((x45-x46)/x47)-x48);

	if (t6 != 5197404775LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile uint16_t x52 = 27567U;
	int32_t t7 = -4075833;

	t7 = (((x49-x50)/x51)-x52);

	if (t7 != -27312) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x55 = INT16_MAX;
	volatile int32_t t8 = 72;

	t8 = (((x53-x54)/x55)-x56);

	if (t8 != 65410) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -63597464068526LL;
	int8_t x58 = -1;
	volatile uint64_t x59 = 40641583LLU;
	static uint64_t t9 = 40423755747LLU;

	t9 = (((x57-x58)/x59)-x60);

	if (t9 != 453886859580LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x62 = 3910954752810967LLU;
	static uint64_t x63 = 5727567868975LLU;
	static int8_t x64 = INT8_MAX;
	uint64_t t10 = 13970LLU;

	t10 = (((x61-x62)/x63)-x64);

	if (t10 != 3219884LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MIN;
	volatile uint16_t x66 = 3U;
	volatile int64_t x67 = -1LL;
	volatile int16_t x68 = INT16_MAX;
	int64_t t11 = -17688857387022702LL;

	t11 = (((x65-x66)/x67)-x68);

	if (t11 != -32636LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x69 = 57U;
	int16_t x72 = -1;
	static volatile int32_t t12 = 3920;

	t12 = (((x69-x70)/x71)-x72);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = -1LL;
	static int16_t x74 = 7034;
	volatile int64_t x75 = -1LL;
	static int16_t x76 = -7000;

	t13 = (((x73-x74)/x75)-x76);

	if (t13 != 14035LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x77 = 3091U;
	int64_t x78 = -97631549239242697LL;
	static volatile int16_t x79 = 10291;
	int64_t x80 = -1LL;
	volatile int64_t t14 = 136483698LL;

	t14 = (((x77-x78)/x79)-x80);

	if (t14 != 9487080870591LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = 108U;
	static int8_t x83 = -28;
	volatile int32_t t15 = 2197;

	t15 = (((x81-x82)/x83)-x84);

	if (t15 != -32759) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = -116;
	int8_t x91 = -1;
	int8_t x92 = -1;
	int32_t t16 = -31480022;

	t16 = (((x89-x90)/x91)-x92);

	if (t16 != 13) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x93 = 30U;
	static int8_t x95 = INT8_MIN;

	t17 = (((x93-x94)/x95)-x96);

	if (t17 != -4749) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x98 = UINT32_MAX;
	int8_t x100 = 16;
	volatile uint32_t t18 = 26045963U;

	t18 = (((x97-x98)/x99)-x100);

	if (t18 != 4294967280U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	int16_t x103 = -1;
	uint64_t x104 = 72198LLU;
	volatile uint64_t t19 = 13497852515019707LLU;

	t19 = (((x101-x102)/x103)-x104);

	if (t19 != 18446744073709545081LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x106 = -1;
	int32_t x107 = -1;
	volatile uint32_t x108 = 720304U;
	uint32_t t20 = 92611U;

	t20 = (((x105-x106)/x107)-x108);

	if (t20 != 4294243297U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x109 = 299;
	int8_t x110 = INT8_MIN;

	t21 = (((x109-x110)/x111)-x112);

	if (t21 != -682) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = -1LL;
	static int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	int64_t t22 = -79138679LL;

	t22 = (((x113-x114)/x115)-x116);

	if (t22 != 36170086419038331LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x117 = -1;
	static int16_t x118 = -11;
	int16_t x119 = -5;
	uint32_t x120 = 4U;

	t23 = (((x117-x118)/x119)-x120);

	if (t23 != 4294967290U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x129 = -1;
	int32_t x130 = -257857;
	static int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t24 = -2821;

	t24 = (((x129-x130)/x131)-x132);

	if (t24 != -1886) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x133 = 2U;
	int8_t x134 = INT8_MIN;

	t25 = (((x133-x134)/x135)-x136);

	if (t25 != 32638) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	volatile int16_t x144 = -1;
	volatile int64_t t26 = 462519987186839549LL;

	t26 = (((x141-x142)/x143)-x144);

	if (t26 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	static uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = 0;
	int32_t t27 = -44;

	t27 = (((x145-x146)/x147)-x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x150 = -1;
	int16_t x152 = 1;
	volatile int32_t t28 = 271847719;

	t28 = (((x149-x150)/x151)-x152);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x154 = -1;
	uint16_t x155 = 2U;
	int64_t x156 = -1421102651288LL;
	uint64_t t29 = 659910997955114847LLU;

	t29 = (((x153-x154)/x155)-x156);

	if (t29 != 1421102651288LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = 796204U;
	static int64_t x159 = INT64_MIN;
	uint64_t x160 = 12610LLU;
	uint64_t t30 = 7182284900690151LLU;

	t30 = (((x157-x158)/x159)-x160);

	if (t30 != 18446744073709539006LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x161 = INT32_MIN;
	static int16_t x162 = -730;
	uint8_t x164 = UINT8_MAX;
	int32_t t31 = -681422324;

	t31 = (((x161-x162)/x163)-x164);

	if (t31 != -1073741714) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = -1;
	uint8_t x166 = 11U;
	int16_t x167 = INT16_MIN;
	static uint32_t x168 = 596329605U;
	static volatile uint32_t t32 = 28318U;

	t32 = (((x165-x166)/x167)-x168);

	if (t32 != 3698637691U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x179 = 9805U;
	int8_t x180 = INT8_MAX;

	t33 = (((x177-x178)/x179)-x180);

	if (t33 != -124) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 13U;
	int32_t x182 = -1;
	static volatile int64_t x183 = -1LL;
	int16_t x184 = INT16_MIN;
	volatile int64_t t34 = 1416857817875915LL;

	t34 = (((x181-x182)/x183)-x184);

	if (t34 != 32754LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x189 = 515235037U;
	volatile int8_t x190 = INT8_MAX;
	int16_t x191 = -29;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x189-x190)/x191)-x192);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = 0;
	static volatile int8_t x194 = -3;
	int64_t x195 = 79049961LL;
	int8_t x196 = -1;

	t36 = (((x193-x194)/x195)-x196);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x198 = 0U;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = 972034LL;
	int64_t t37 = -135903869LL;

	t37 = (((x197-x198)/x199)-x200);

	if (t37 != -972034LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MAX;
	int64_t t38 = -793987496680017LL;

	t38 = (((x201-x202)/x203)-x204);

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x205 = INT32_MIN;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	volatile uint8_t x208 = UINT8_MAX;

	t39 = (((x205-x206)/x207)-x208);

	if (t39 != 4294967041U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x209 = 2U;
	int64_t x210 = 10LL;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;

	t40 = (((x209-x210)/x211)-x212);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = 0;
	int32_t x214 = -947726204;
	int8_t x216 = -10;
	static volatile int32_t t41 = 334455911;

	t41 = (((x213-x214)/x215)-x216);

	if (t41 != 14471) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = INT64_MIN;
	volatile int64_t x218 = INT64_MIN;
	int8_t x219 = -1;
	volatile uint32_t x220 = UINT32_MAX;
	static volatile int64_t t42 = -1012684398711825LL;

	t42 = (((x217-x218)/x219)-x220);

	if (t42 != -4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	static uint16_t x235 = 19U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t43 = -1;

	t43 = (((x233-x234)/x235)-x236);

	if (t43 != 1852) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x237 = INT16_MIN;
	static int64_t x238 = INT64_MIN;
	static int8_t x239 = 14;
	uint64_t x240 = 12367LLU;
	volatile uint64_t t44 = 846087068897341LLU;

	t44 = (((x237-x238)/x239)-x240);

	if (t44 != 658812288346754993LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	volatile int8_t x244 = -1;
	static uint32_t t45 = 643U;

	t45 = (((x241-x242)/x243)-x244);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x246 = 33199202U;
	static int32_t x247 = INT32_MAX;
	uint32_t x248 = 85225U;
	volatile uint32_t t46 = 2U;

	t46 = (((x245-x246)/x247)-x248);

	if (t46 != 4294882072U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x249 = -3;
	uint64_t x250 = 283358199LLU;
	uint8_t x251 = 2U;
	uint32_t x252 = UINT32_MAX;
	uint64_t t47 = 88296936LLU;

	t47 = (((x249-x250)/x251)-x252);

	if (t47 != 9223372032418129412LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 80430749U;
	volatile int8_t x259 = -10;
	volatile uint32_t x260 = UINT32_MAX;
	volatile uint32_t t48 = 21U;

	t48 = (((x257-x258)/x259)-x260);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x261 = 5867848LLU;
	static volatile uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MIN;
	int16_t x264 = -1;
	static volatile uint64_t t49 = 483781145660815796LLU;

	t49 = (((x261-x262)/x263)-x264);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x265 = 616U;
	volatile int64_t x268 = -1LL;

	t50 = (((x265-x266)/x267)-x268);

	if (t50 != 13LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x269 = 2293U;
	uint32_t x270 = 103U;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -6227764831005LL;
	int64_t t51 = -90LL;

	t51 = (((x269-x270)/x271)-x272);

	if (t51 != 6227764831005LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x273 = 32870936LL;
	uint16_t x275 = 1U;
	static volatile int64_t t52 = -865789895230LL;

	t52 = (((x273-x274)/x275)-x276);

	if (t52 != 32805529LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x281 = 28356308U;
	uint64_t x282 = 47587632996530799LLU;
	uint16_t x283 = 14U;
	volatile int8_t x284 = -57;
	static volatile uint64_t t53 = 2228869171235398LLU;

	t53 = (((x281-x282)/x283)-x284);

	if (t53 != 1314225460052955565LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x285 = 4058U;
	static int8_t x286 = 1;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t54 = 21781029292LLU;

	t54 = (((x285-x286)/x287)-x288);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -1LL;
	uint16_t x296 = UINT16_MAX;
	int64_t t55 = -12618588359LL;

	t55 = (((x293-x294)/x295)-x296);

	if (t55 != -65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static uint16_t x300 = 60U;

	t56 = (((x297-x298)/x299)-x300);

	if (t56 != -49) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x305 = 5U;
	uint64_t x308 = 5LLU;
	uint64_t t57 = 818014398667571180LLU;

	t57 = (((x305-x306)/x307)-x308);

	if (t57 != 8188LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x310 = 203U;
	int64_t t58 = 2068421266579507058LL;

	t58 = (((x309-x310)/x311)-x312);

	if (t58 != -37LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x314 = 5U;
	int64_t x315 = -66180955873155LL;
	volatile int8_t x316 = INT8_MIN;
	static int64_t t59 = -836367LL;

	t59 = (((x313-x314)/x315)-x316);

	if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = INT64_MAX;
	int8_t x319 = 3;
	uint16_t x320 = 31992U;
	uint64_t t60 = 175214276662LLU;

	t60 = (((x317-x318)/x319)-x320);

	if (t60 != 3074457345618226610LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = 1;
	int64_t t61 = -8051296LL;

	t61 = (((x321-x322)/x323)-x324);

	if (t61 != -271577LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = 91000226U;
	volatile uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;
	uint64_t t62 = 1852711876448LLU;

	t62 = (((x325-x326)/x327)-x328);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x330 = -2;
	volatile uint16_t x331 = 916U;
	int32_t t63 = -12120981;

	t63 = (((x329-x330)/x331)-x332);

	if (t63 != -99) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x333 = -67379;
	uint32_t x334 = 515858336U;
	int16_t x335 = INT16_MIN;
	volatile int32_t x336 = 8031923;
	volatile uint32_t t64 = 84663U;

	t64 = (((x333-x334)/x335)-x336);

	if (t64 != 4286935373U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x337 = 3290319LL;
	uint16_t x338 = UINT16_MAX;
	volatile int16_t x339 = INT16_MAX;
	static uint64_t x340 = UINT64_MAX;
	static uint64_t t65 = 69066525216LLU;

	t65 = (((x337-x338)/x339)-x340);

	if (t65 != 99LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x342 = -49339446707293LL;
	volatile uint16_t x344 = UINT16_MAX;
	int64_t t66 = 62LL;

	t66 = (((x341-x342)/x343)-x344);

	if (t66 != 1644648158134LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x345 = INT8_MAX;
	static uint16_t x348 = 3139U;
	static int32_t t67 = 123;

	t67 = (((x345-x346)/x347)-x348);

	if (t67 != -3139) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x350 = UINT16_MAX;
	int32_t x352 = -1;
	int32_t t68 = -260235;

	t68 = (((x349-x350)/x351)-x352);

	if (t68 != -119) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x353 = 454937634647828LL;
	uint8_t x354 = UINT8_MAX;
	volatile int16_t x355 = INT16_MIN;
	uint8_t x356 = 10U;
	int64_t t69 = -81514735868LL;

	t69 = (((x353-x354)/x355)-x356);

	if (t69 != -13883594817LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = -1;
	static uint32_t x358 = 963292U;

	t70 = (((x357-x358)/x359)-x360);

	if (t70 != 2147483648LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x361 = INT32_MIN;
	volatile int64_t x363 = 322362544694LL;
	static uint32_t x364 = 1194152808U;

	t71 = (((x361-x362)/x363)-x364);

	if (t71 != -1194152808LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x365 = -1011389626668LL;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MAX;
	volatile int64_t t72 = -18075368947638LL;

	t72 = (((x365-x366)/x367)-x368);

	if (t72 != -127LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x369 = 3481U;
	int64_t x370 = 373460614225LL;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MIN;
	int64_t t73 = 14934LL;

	t73 = (((x369-x370)/x371)-x372);

	if (t73 != 2158880761LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = -51829856LL;
	static uint32_t x374 = 730035370U;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	static int64_t t74 = -27757753038705LL;

	t74 = (((x373-x374)/x375)-x376);

	if (t74 != 128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x378 = INT16_MIN;
	volatile int8_t x379 = INT8_MIN;
	volatile uint8_t x380 = 31U;
	int32_t t75 = -9529;

	t75 = (((x377-x378)/x379)-x380);

	if (t75 != -31) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	volatile int16_t x383 = -1;
	int8_t x384 = INT8_MIN;
	uint32_t t76 = 28U;

	t76 = (((x381-x382)/x383)-x384);

	if (t76 != 128U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x385 = 69651U;
	volatile int64_t x386 = -3678870010966061810LL;
	volatile int16_t x388 = INT16_MIN;

	t77 = (((x385-x386)/x387)-x388);

	if (t77 != 112273629323399LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = 25584U;

	t78 = (((x397-x398)/x399)-x400);

	if (t78 != 18446744073709526032LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x405 = INT32_MIN;
	int32_t x406 = -126;
	static int64_t x407 = -435LL;
	uint64_t x408 = 0LLU;
	static uint64_t t79 = 552133308LLU;

	t79 = (((x405-x406)/x407)-x408);

	if (t79 != 4936743LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = INT32_MIN;
	static int32_t x410 = -898528872;
	uint32_t x411 = UINT32_MAX;
	static uint8_t x412 = 38U;
	volatile uint32_t t80 = 57U;

	t80 = (((x409-x410)/x411)-x412);

	if (t80 != 4294967258U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x417 = 5U;
	int8_t x418 = INT8_MIN;
	static int8_t x419 = 3;
	volatile uint16_t x420 = UINT16_MAX;
	int32_t t81 = 180;

	t81 = (((x417-x418)/x419)-x420);

	if (t81 != -65491) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = -54;
	uint32_t x430 = 1665861U;
	static int32_t x431 = INT32_MIN;
	volatile uint64_t x432 = 54676825670517LLU;
	static uint64_t t82 = 2359573713LLU;

	t82 = (((x429-x430)/x431)-x432);

	if (t82 != 18446689396883881100LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x433 = 308LLU;
	volatile int8_t x434 = 5;
	uint16_t x435 = UINT16_MAX;
	int8_t x436 = 0;
	volatile uint64_t t83 = 53004834638LLU;

	t83 = (((x433-x434)/x435)-x436);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = INT16_MAX;
	static int64_t x438 = 655899510910072123LL;
	uint16_t x439 = UINT16_MAX;
	volatile int16_t x440 = INT16_MIN;

	t84 = (((x437-x438)/x439)-x440);

	if (t84 != -10008384966240LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x441 = INT16_MIN;
	volatile int16_t x443 = 1;
	int16_t x444 = -1;
	int32_t t85 = 993000;

	t85 = (((x441-x442)/x443)-x444);

	if (t85 != -98302) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x445 = 15753171381724905LL;
	uint16_t x446 = UINT16_MAX;
	uint8_t x447 = 1U;
	static int32_t x448 = INT32_MIN;

	t86 = (((x445-x446)/x447)-x448);

	if (t86 != 15753173529143018LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x449 = 0;
	uint16_t x450 = 4U;
	int64_t x451 = -1LL;
	uint32_t x452 = UINT32_MAX;

	t87 = (((x449-x450)/x451)-x452);

	if (t87 != -4294967291LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x453 = INT32_MIN;
	static int64_t x454 = -1LL;
	int16_t x455 = INT16_MIN;
	uint64_t x456 = 60LLU;
	static volatile uint64_t t88 = 1207499845780339672LLU;

	t88 = (((x453-x454)/x455)-x456);

	if (t88 != 65475LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x457 = -1;
	static int64_t x458 = INT64_MAX;
	static uint64_t x459 = UINT64_MAX;
	uint8_t x460 = 0U;
	uint64_t t89 = 316152LLU;

	t89 = (((x457-x458)/x459)-x460);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x462 = 139792LL;
	int64_t x464 = INT64_MAX;
	volatile int64_t t90 = -108795635522LL;

	t90 = (((x461-x462)/x463)-x464);

	if (t90 != -9223372036854603247LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x466 = UINT32_MAX;
	uint32_t x468 = UINT32_MAX;
	uint32_t t91 = 5U;

	t91 = (((x465-x466)/x467)-x468);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x469 = INT16_MAX;
	static int64_t x470 = -112975322273176566LL;
	static int64_t x471 = INT64_MIN;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t92 = 3345013160497949499LLU;

	t92 = (((x469-x470)/x471)-x472);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x473 = INT32_MIN;
	uint64_t x474 = 3383669174LLU;
	static int64_t x475 = INT64_MIN;
	int8_t x476 = INT8_MIN;

	t93 = (((x473-x474)/x475)-x476);

	if (t93 != 129LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x477 = 1800772;
	int32_t x478 = -58629433;
	static int8_t x479 = INT8_MAX;
	int8_t x480 = INT8_MAX;

	t94 = (((x477-x478)/x479)-x480);

	if (t94 != 475701) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x482 = UINT16_MAX;
	uint16_t x483 = UINT16_MAX;
	volatile int8_t x484 = -26;
	int32_t t95 = -886775;

	t95 = (((x481-x482)/x483)-x484);

	if (t95 != 25) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x491 = 37U;
	int8_t x492 = 0;
	int64_t t96 = 3784798LL;

	t96 = (((x489-x490)/x491)-x492);

	if (t96 != -14390187172943888LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x493 = INT16_MAX;
	int64_t x494 = INT64_MAX;
	int64_t x495 = INT64_MIN;
	static int64_t x496 = -1LL;
	volatile int64_t t97 = -3850323LL;

	t97 = (((x493-x494)/x495)-x496);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x501 = 77152U;
	int32_t x502 = 785406367;
	uint32_t x503 = UINT32_MAX;
	volatile int8_t x504 = INT8_MIN;
	uint32_t t98 = 53213U;

	t98 = (((x501-x502)/x503)-x504);

	if (t98 != 128U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x506 = 662756912999LLU;
	volatile int8_t x507 = -1;
	volatile int8_t x508 = 29;

	t99 = (((x505-x506)/x507)-x508);

	if (t99 != 18446744073709551587LLU) { NG(); } else { ; }
	
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

