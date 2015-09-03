#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x19 = 6;
int8_t x20 = -1;
uint32_t t5 = 590117U;
volatile uint64_t t6 = 192516LLU;
uint8_t x47 = 3U;
uint64_t x54 = UINT64_MAX;
volatile int32_t x64 = -1;
static int8_t x66 = INT8_MIN;
int64_t x67 = INT64_MAX;
int64_t t11 = 8LL;
volatile int64_t x70 = INT64_MIN;
int16_t x81 = -1;
uint8_t x83 = UINT8_MAX;
uint64_t t13 = 6967LLU;
int64_t x98 = INT64_MIN;
static uint16_t x99 = 3993U;
static uint16_t x100 = 31255U;
int16_t x109 = INT16_MAX;
volatile int32_t t16 = 7900;
int64_t x120 = INT64_MIN;
int16_t x149 = INT16_MIN;
int16_t x150 = 1;
uint8_t x151 = 1U;
int8_t x153 = 1;
int8_t x158 = -1;
uint16_t x160 = 5U;
volatile uint64_t x161 = 5543380419LLU;
int64_t x164 = -1083332368816944LL;
static uint64_t t22 = 0LLU;
volatile int32_t x169 = INT32_MAX;
int64_t x172 = INT64_MIN;
int8_t x175 = INT8_MAX;
int64_t x176 = -1LL;
volatile int8_t x188 = -1;
int64_t t27 = -133057437080LL;
int16_t x193 = -3747;
int32_t x194 = INT32_MIN;
uint64_t x202 = 179161859443828LLU;
uint64_t t30 = 860151801093664LLU;
uint32_t x205 = UINT32_MAX;
uint64_t t31 = 6221220609196LLU;
volatile int16_t x210 = -1;
volatile int64_t x216 = -59013104557397227LL;
uint64_t x227 = UINT64_MAX;
static int8_t x233 = -8;
int64_t x243 = -701252LL;
static int8_t x244 = 58;
uint32_t x253 = 1U;
uint16_t x256 = UINT16_MAX;
uint64_t x265 = 30517515LLU;
int8_t x267 = -48;
int64_t x269 = -3983LL;
uint16_t x280 = UINT16_MAX;
int8_t x285 = 6;
uint32_t x286 = 328831U;
int32_t x288 = -172953539;
uint16_t x289 = 757U;
int64_t x291 = 240245451249692489LL;
int64_t t45 = -72LL;
int32_t x295 = INT32_MAX;
static int8_t x296 = INT8_MIN;
uint32_t x301 = 6U;
uint16_t x304 = 27294U;
int64_t x308 = -1LL;
volatile int8_t x327 = -50;
volatile int8_t x334 = 61;
volatile int64_t x336 = INT64_MIN;
uint32_t x342 = 288017U;
uint16_t x350 = UINT16_MAX;
static uint32_t t58 = 13U;
uint8_t x355 = UINT8_MAX;
uint8_t x357 = UINT8_MAX;
int64_t x358 = INT64_MIN;
int8_t x360 = -23;
volatile uint16_t x363 = 48U;
int16_t x367 = -1;
volatile uint8_t x378 = 28U;
uint64_t x387 = 53455325672108851LLU;
static volatile int16_t x400 = INT16_MAX;
static volatile int32_t t67 = -149390;
volatile uint8_t x410 = 21U;
static volatile uint64_t t69 = 2076190117803787064LLU;
static uint8_t x437 = 65U;
int64_t x440 = INT64_MIN;
static int8_t x446 = INT8_MIN;
uint32_t x449 = UINT32_MAX;
static volatile uint8_t x455 = UINT8_MAX;
int8_t x459 = INT8_MIN;
static int32_t x470 = 313;
static volatile uint32_t t77 = 4U;
volatile uint64_t t78 = 88780587008LLU;
uint64_t x484 = 36188877444381260LLU;
int32_t x485 = INT32_MAX;
int8_t x501 = INT8_MAX;
int32_t x502 = INT32_MIN;
int8_t x507 = 3;
int8_t x517 = INT8_MAX;
volatile int8_t x519 = -1;
static uint32_t t84 = 20U;
uint16_t x524 = UINT16_MAX;
static uint64_t x525 = 1610LLU;
volatile uint64_t t86 = 814LLU;
uint64_t x534 = 287330840LLU;
volatile int8_t x535 = 0;
int64_t x544 = -1LL;
static uint64_t x555 = UINT64_MAX;
volatile int16_t x558 = INT16_MIN;
int32_t x561 = INT32_MAX;
static uint8_t x562 = UINT8_MAX;
uint64_t x567 = 1532313716LLU;
int64_t x576 = INT64_MAX;
uint32_t x579 = UINT32_MAX;
static int64_t x580 = -450386263431514LL;
static int16_t x584 = -484;
uint32_t t96 = 7314U;
int16_t x597 = -1;
static volatile int8_t x601 = INT8_MIN;
volatile uint32_t x603 = 127U;


void f0(void) {
	int8_t x5 = INT8_MIN;
	uint32_t x6 = 21U;
	static int32_t x7 = -1;
	volatile int16_t x8 = INT16_MIN;
	uint32_t t0 = 701U;

	t0 = (x5*((x6+x7)|x8));

	if (t0 != 4191744U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static uint16_t x10 = UINT16_MAX;
	volatile uint32_t x11 = UINT32_MAX;
	int64_t x12 = -1LL;
	int64_t t1 = 987823996LL;

	t1 = (x9*((x10+x11)|x12));

	if (t1 != 2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = -117991LL;
	int16_t x18 = 0;
	int64_t t2 = -93LL;

	t2 = (x17*((x18+x19)|x20));

	if (t2 != 117991LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -1LL;
	uint16_t x26 = 1U;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = UINT16_MAX;
	int64_t t3 = 1613123500717LL;

	t3 = (x25*((x26+x27)|x28));

	if (t3 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 28U;
	uint32_t x34 = 671U;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = 3817U;
	static uint32_t t4 = 14315522U;

	t4 = (x33*((x34+x35)|x36));

	if (t4 != 107492U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	static uint32_t x38 = 190200U;
	int8_t x39 = INT8_MAX;
	volatile int8_t x40 = INT8_MAX;

	t5 = (x37*((x38+x39)|x40));

	if (t5 != 4294776961U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = -103;
	int8_t x42 = INT8_MIN;
	volatile int64_t x43 = -1LL;
	uint64_t x44 = UINT64_MAX;

	t6 = (x41*((x42+x43)|x44));

	if (t6 != 103LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MAX;
	uint32_t x46 = UINT32_MAX;
	int64_t x48 = -1LL;
	int64_t t7 = 59834LL;

	t7 = (x45*((x46+x47)|x48));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int64_t x55 = -1LL;
	int16_t x56 = 156;
	volatile uint64_t t8 = 7533LLU;

	t8 = (x53*((x54+x55)|x56));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = INT32_MAX;
	uint8_t x58 = 1U;
	uint64_t x59 = 7080LLU;
	uint64_t x60 = 11916295669LLU;
	uint64_t t9 = 274171460727LLU;

	t9 = (x57*((x58+x59)|x60));

	if (t9 != 7143307124976369667LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 53U;
	int8_t x62 = -7;
	volatile int32_t x63 = -1;
	static int32_t t10 = 1;

	t10 = (x61*((x62+x63)|x64));

	if (t10 != -53) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	static int32_t x68 = -44922325;

	t11 = (x65*((x66+x67)|x68));

	if (t11 != -32895LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int64_t x71 = 9246LL;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t12 = -111528644070LL;

	t12 = (x69*((x70+x71)|x72));

	if (t12 != -65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x82 = 6214545LLU;
	uint16_t x84 = 7796U;

	t13 = (x81*((x82+x83)|x84));

	if (t13 != 18446744073703334156LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = -1;
	int64_t t14 = 11662936253387095LL;

	t14 = (x97*((x98+x99)|x100));

	if (t14 != 9223372036854743137LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x110 = 101U;
	int32_t x111 = -256;
	uint16_t x112 = 3U;
	int32_t t15 = -501971768;

	t15 = (x109*((x110+x111)|x112));

	if (t15 != -5013351) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x113 = -1;
	volatile int8_t x114 = INT8_MAX;
	uint8_t x115 = 5U;
	int32_t x116 = -14735243;

	t16 = (x113*((x114+x115)|x116));

	if (t16 != 14735115) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x117 = UINT64_MAX;
	static int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile uint64_t t17 = 16453065320966953LLU;

	t17 = (x117*((x118+x119)|x120));

	if (t17 != 2147483393LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x133 = -450LL;
	volatile int32_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = -559;
	static volatile uint64_t t18 = 157949LLU;

	t18 = (x133*((x134+x135)|x136));

	if (t18 != 450LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x152 = -863;
	static int32_t t19 = 978;

	t19 = (x149*((x150+x151)|x152));

	if (t19 != 28213248) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x154 = -1;
	volatile uint16_t x155 = UINT16_MAX;
	static int8_t x156 = INT8_MIN;
	int32_t t20 = -57402;

	t20 = (x153*((x154+x155)|x156));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x157 = 149630306639518LLU;
	volatile int16_t x159 = INT16_MIN;
	static uint64_t t21 = 5636982697LLU;

	t21 = (x157*((x158+x159)|x160));

	if (t21 != 13543508555439186274LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x162 = -1LL;
	volatile uint64_t x163 = 2171139LLU;

	t22 = (x161*((x162+x163)|x164));

	if (t22 != 14092628841155717366LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x165 = INT8_MAX;
	static int16_t x166 = 2;
	int16_t x167 = -1204;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t23 = -7;

	t23 = (x165*((x166+x167)|x168));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x170 = 26655;
	int32_t x171 = -280696;
	int64_t t24 = -2186170229329329428LL;

	t24 = (x169*((x170+x171)|x172));

	if (t24 != -545548893167527LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x173 = INT8_MAX;
	int8_t x174 = -6;
	int64_t t25 = 3710742842LL;

	t25 = (x173*((x174+x175)|x176));

	if (t25 != -127LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x181 = 41967096U;
	static int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MIN;
	volatile int32_t x184 = INT32_MAX;
	volatile uint32_t t26 = 63U;

	t26 = (x181*((x182+x183)|x184));

	if (t26 != 4253000200U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = INT8_MAX;
	int64_t x186 = -1LL;
	static volatile int8_t x187 = INT8_MAX;

	t27 = (x185*((x186+x187)|x188));

	if (t27 != -127LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x189 = INT64_MAX;
	uint64_t x190 = UINT64_MAX;
	volatile int64_t x191 = INT64_MIN;
	volatile int32_t x192 = INT32_MIN;
	volatile uint64_t t28 = 168856375326LLU;

	t28 = (x189*((x190+x191)|x192));

	if (t28 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x195 = INT16_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t29 = 772809LL;

	t29 = (x193*((x194+x195)|x196));

	if (t29 != 8046498451107LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x201 = -1;
	int16_t x203 = -63;
	int64_t x204 = -6430560676488339LL;

	t30 = (x201*((x202+x203)|x204));

	if (t30 != 6289264492945539LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x206 = 2;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = INT16_MAX;

	t31 = (x205*((x206+x207)|x208));

	if (t31 != 140733193355265LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x209 = INT16_MIN;
	volatile int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	int32_t t32 = 13899;

	t32 = (x209*((x210+x211)|x212));

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	static volatile uint16_t x215 = 0U;
	static volatile int64_t t33 = -4118LL;

	t33 = (x213*((x214+x215)|x216));

	if (t33 != 64932705664LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x225 = INT32_MAX;
	int16_t x226 = -1;
	uint16_t x228 = 15119U;
	static volatile uint64_t t34 = 6047891860331638LLU;

	t34 = (x225*((x226+x227)|x228));

	if (t34 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x234 = 1233113811588094LLU;
	static volatile uint8_t x235 = 22U;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t35 = 95623453315135LLU;

	t35 = (x233*((x234+x235)|x236));

	if (t35 != 18436879163216846688LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = 13U;
	int64_t x240 = -1LL;
	volatile int64_t t36 = -6643214844996LL;

	t36 = (x237*((x238+x239)|x240));

	if (t36 != 128LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x241 = 27919218U;
	int16_t x242 = -23;
	volatile int64_t t37 = -98LL;

	t37 = (x241*((x242+x243)|x244));

	if (t37 != -19578323703282LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x249 = 1U;
	uint32_t x250 = 64674948U;
	uint8_t x251 = 77U;
	static volatile int8_t x252 = INT8_MIN;
	volatile uint32_t t38 = 1831U;

	t38 = (x249*((x250+x251)|x252));

	if (t38 != 4294967249U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x254 = UINT16_MAX;
	static uint64_t x255 = 473713635752LLU;
	uint64_t t39 = 454LLU;

	t39 = (x253*((x254+x255)|x256));

	if (t39 != 473713737727LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x257 = 1700U;
	int16_t x258 = 3;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;
	volatile int32_t t40 = 58367951;

	t40 = (x257*((x258+x259)|x260));

	if (t40 != -1700) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x266 = INT16_MIN;
	static int64_t x268 = -1LL;
	uint64_t t41 = 1494594505478611948LLU;

	t41 = (x265*((x266+x267)|x268));

	if (t41 != 18446744073679034101LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x270 = 2943U;
	int16_t x271 = INT16_MIN;
	static int64_t x272 = INT64_MIN;
	volatile int64_t t42 = -35142855425296101LL;

	t42 = (x269*((x270+x271)|x272));

	if (t42 != 118792975LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = -1LL;
	volatile int64_t t43 = 3899843028LL;

	t43 = (x277*((x278+x279)|x280));

	if (t43 != -32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x287 = INT16_MAX;
	volatile uint32_t t44 = 40791U;

	t44 = (x285*((x286+x287)|x288));

	if (t44 != 3259218682U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x290 = INT32_MIN;
	static int8_t x292 = -1;

	t45 = (x289*((x290+x291)|x292));

	if (t45 != -757LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x293 = UINT32_MAX;
	uint32_t x294 = 773518U;
	static volatile uint32_t t46 = 2469U;

	t46 = (x293*((x294+x295)|x296));

	if (t46 != 115U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = -1;
	uint32_t x300 = 34U;
	volatile uint32_t t47 = 17085U;

	t47 = (x297*((x298+x299)|x300));

	if (t47 != 32769U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x302 = 4U;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t t48 = 762605LLU;

	t48 = (x301*((x302+x303)|x304));

	if (t48 != 163770LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t49 = 28300108LLU;

	t49 = (x305*((x306+x307)|x308));

	if (t49 != 128LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x313 = -1LL;
	volatile uint16_t x314 = UINT16_MAX;
	volatile uint16_t x315 = UINT16_MAX;
	static int32_t x316 = INT32_MIN;
	int64_t t50 = 68928897LL;

	t50 = (x313*((x314+x315)|x316));

	if (t50 != 2147352578LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x321 = 43LLU;
	uint32_t x322 = 3U;
	int8_t x323 = INT8_MIN;
	int16_t x324 = -1;
	static volatile uint64_t t51 = 8377349877706309LLU;

	t51 = (x321*((x322+x323)|x324));

	if (t51 != 184683593685LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x325 = 7;
	int16_t x326 = 4263;
	volatile int64_t x328 = 829963298154767192LL;
	static volatile int64_t t52 = 925011249403LL;

	t52 = (x325*((x326+x327)|x328));

	if (t52 != 5809743087083399275LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x329 = 3772;
	int16_t x330 = 0;
	int8_t x331 = INT8_MIN;
	static volatile int8_t x332 = 57;
	static int32_t t53 = 6;

	t53 = (x329*((x330+x331)|x332));

	if (t53 != -267812) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x333 = 1;
	static volatile int16_t x335 = INT16_MIN;
	int64_t t54 = 15687105253LL;

	t54 = (x333*((x334+x335)|x336));

	if (t54 != -32707LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x337 = 787U;
	static uint64_t x338 = 63474LLU;
	static int32_t x339 = INT32_MAX;
	uint8_t x340 = 60U;
	volatile uint64_t t55 = 1869174LLU;

	t55 = (x337*((x338+x339)|x340));

	if (t55 != 1690119593671LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x341 = -6561;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;
	volatile uint32_t t56 = 300382613U;

	t56 = (x341*((x342+x343)|x344));

	if (t56 != 45244656U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x345 = INT16_MAX;
	volatile uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	volatile int8_t x348 = INT8_MAX;
	volatile int32_t t57 = -7;

	t57 = (x345*((x346+x347)|x348));

	if (t57 != 1073676289) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x349 = 15;
	uint32_t x351 = 10U;
	uint16_t x352 = 1U;

	t58 = (x349*((x350+x351)|x352));

	if (t58 != 983175U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x353 = 30607U;
	int32_t x354 = -166202;
	uint16_t x356 = UINT16_MAX;
	static volatile uint32_t t59 = 1830U;

	t59 = (x353*((x354+x355)|x356));

	if (t59 != 283215985U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x359 = INT16_MAX;
	volatile int64_t t60 = 31744LL;

	t60 = (x357*((x358+x359)|x360));

	if (t60 != -255LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x361 = -1LL;
	int64_t x362 = -1LL;
	int8_t x364 = INT8_MAX;
	volatile int64_t t61 = -9880934235LL;

	t61 = (x361*((x362+x363)|x364));

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x365 = 5476541LLU;
	int64_t x366 = -1LL;
	int32_t x368 = -7359194;
	volatile uint64_t t62 = 3191397353877594843LLU;

	t62 = (x365*((x366+x367)|x368));

	if (t62 != 18446744073698598534LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x377 = -1;
	int32_t x379 = INT32_MIN;
	volatile uint8_t x380 = 24U;
	static int32_t t63 = -81;

	t63 = (x377*((x378+x379)|x380));

	if (t63 != 2147483620) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	int8_t x383 = -3;
	static uint64_t x384 = 4537775LLU;
	volatile uint64_t t64 = 555650714322756700LLU;

	t64 = (x381*((x382+x383)|x384));

	if (t64 != 32768LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x385 = -1LL;
	int8_t x386 = -27;
	static int32_t x388 = 10543;
	uint64_t t65 = 17876LLU;

	t65 = (x385*((x386+x387)|x388));

	if (t65 != 18393288748037440705LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x393 = 9U;
	volatile int64_t x394 = INT64_MIN;
	uint64_t x395 = 4537049LLU;
	uint16_t x396 = 7U;
	static volatile uint64_t t66 = 1358548212LLU;

	t66 = (x393*((x394+x395)|x396));

	if (t66 != 9223372036895609303LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x397 = 1;
	uint16_t x398 = UINT16_MAX;
	static uint16_t x399 = UINT16_MAX;

	t67 = (x397*((x398+x399)|x400));

	if (t67 != 131071) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x401 = 52;
	uint16_t x402 = 3207U;
	int16_t x403 = -1;
	static uint64_t x404 = UINT64_MAX;
	volatile uint64_t t68 = 10LLU;

	t68 = (x401*((x402+x403)|x404));

	if (t68 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x409 = 7541888474LLU;
	int16_t x411 = -1;
	volatile int64_t x412 = 45LL;

	t69 = (x409*((x410+x411)|x412));

	if (t69 != 460055196914LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x421 = INT8_MAX;
	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MAX;
	volatile int8_t x424 = -1;
	int64_t t70 = -339LL;

	t70 = (x421*((x422+x423)|x424));

	if (t70 != -127LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x438 = -2420395598LL;
	static int32_t x439 = -1;
	volatile int64_t t71 = 43381556403327721LL;

	t71 = (x437*((x438+x439)|x440));

	if (t71 != -157325713935LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x445 = -7;
	volatile uint16_t x447 = UINT16_MAX;
	volatile int64_t x448 = 5709LL;
	static volatile int64_t t72 = 8059692412087LL;

	t72 = (x445*((x446+x447)|x448));

	if (t72 != -457849LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x450 = INT32_MAX;
	int16_t x451 = -1;
	int16_t x452 = -1;
	volatile uint32_t t73 = 4689U;

	t73 = (x449*((x450+x451)|x452));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x453 = 0U;
	static uint16_t x454 = 29738U;
	int16_t x456 = INT16_MIN;
	int32_t t74 = 1960885;

	t74 = (x453*((x454+x455)|x456));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x457 = INT16_MAX;
	int8_t x458 = 3;
	volatile int32_t x460 = INT32_MIN;
	int32_t t75 = 110;

	t75 = (x457*((x458+x459)|x460));

	if (t75 != -4095875) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x461 = 2224340738518195976LLU;
	uint32_t x462 = 215U;
	int64_t x463 = INT64_MIN;
	volatile int64_t x464 = -621747576842420LL;
	volatile uint64_t t76 = 270137148649814616LLU;

	t76 = (x461*((x462+x463)|x464));

	if (t76 != 3615992184368283640LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x469 = INT8_MIN;
	static int32_t x471 = 1343913;
	uint32_t x472 = 217794U;

	t77 = (x469*((x470+x471)|x472));

	if (t77 != 4095119104U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x473 = -1;
	volatile uint64_t x474 = 118LLU;
	int8_t x475 = -1;
	int8_t x476 = INT8_MIN;

	t78 = (x473*((x474+x475)|x476));

	if (t78 != 11LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x481 = INT32_MIN;
	volatile int64_t x482 = INT64_MAX;
	int8_t x483 = INT8_MIN;
	uint64_t t79 = 14599195373LLU;

	t79 = (x481*((x482+x483)|x484));

	if (t79 != 277025390592LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x486 = 1716677LL;
	static volatile int16_t x487 = 116;
	int8_t x488 = INT8_MIN;
	volatile int64_t t80 = -3807183244768269676LL;

	t80 = (x485*((x486+x487)|x488));

	if (t80 != -152471338937LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x489 = INT8_MIN;
	uint16_t x490 = 24U;
	int16_t x491 = -1;
	uint64_t x492 = 1LLU;
	uint64_t t81 = 14LLU;

	t81 = (x489*((x490+x491)|x492));

	if (t81 != 18446744073709548672LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x503 = 29580316;
	int64_t x504 = INT64_MAX;
	static volatile int64_t t82 = -541489661836032540LL;

	t82 = (x501*((x502+x503)|x504));

	if (t82 != -127LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x505 = 14064U;
	int8_t x506 = 1;
	static int8_t x508 = INT8_MIN;
	int32_t t83 = -745;

	t83 = (x505*((x506+x507)|x508));

	if (t83 != -1743936) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x518 = -1;
	uint32_t x520 = 991U;

	t84 = (x517*((x518+x519)|x520));

	if (t84 != 4294967169U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x521 = -1LL;
	int64_t x522 = -21LL;
	volatile uint32_t x523 = UINT32_MAX;
	static int64_t t85 = 50717588671LL;

	t85 = (x521*((x522+x523)|x524));

	if (t85 != -4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x526 = 1286;
	int16_t x527 = 7274;
	volatile int16_t x528 = -1;

	t86 = (x525*((x526+x527)|x528));

	if (t86 != 18446744073709550006LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x529 = -1;
	int64_t x530 = 222837798LL;
	int8_t x531 = -50;
	static uint32_t x532 = UINT32_MAX;
	volatile int64_t t87 = 2761196139676073LL;

	t87 = (x529*((x530+x531)|x532));

	if (t87 != -4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x533 = -617;
	int8_t x536 = -1;
	static volatile uint64_t t88 = 849151727537383762LLU;

	t88 = (x533*((x534+x535)|x536));

	if (t88 != 617LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x541 = 0U;
	uint32_t x542 = 167450085U;
	int8_t x543 = -1;
	volatile int64_t t89 = 296531179039697LL;

	t89 = (x541*((x542+x543)|x544));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x553 = -1;
	int32_t x554 = 12338632;
	int64_t x556 = INT64_MIN;
	volatile uint64_t t90 = 10282058069811320LLU;

	t90 = (x553*((x554+x555)|x556));

	if (t90 != 9223372036842437177LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x557 = 1U;
	volatile int16_t x559 = -1;
	int16_t x560 = INT16_MIN;
	volatile int32_t t91 = 576;

	t91 = (x557*((x558+x559)|x560));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x563 = 5;
	uint64_t x564 = 1433LLU;
	uint64_t t92 = 894696499210860LLU;

	t92 = (x561*((x562+x563)|x564));

	if (t92 != 3085934000739LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x565 = INT16_MIN;
	volatile int32_t x566 = INT32_MIN;
	int16_t x568 = INT16_MIN;
	volatile uint64_t t93 = 6925494LLU;

	t93 = (x565*((x566+x567)|x568));

	if (t93 != 533069824LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x573 = -1;
	int8_t x574 = -1;
	static uint64_t x575 = UINT64_MAX;
	static uint64_t t94 = 3887629LLU;

	t94 = (x573*((x574+x575)|x576));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x577 = INT8_MIN;
	static uint32_t x578 = 790486440U;
	volatile int64_t t95 = 0LL;

	t95 = (x577*((x578+x579)|x580));

	if (t95 != 57649353434606720LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x581 = UINT8_MAX;
	static uint32_t x582 = 921859U;
	static int16_t x583 = INT16_MIN;

	t96 = (x581*((x582+x583)|x584));

	if (t96 != 4294909921U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x585 = 129U;
	int8_t x586 = 0;
	uint16_t x587 = 19U;
	uint16_t x588 = UINT16_MAX;
	static int32_t t97 = 1;

	t97 = (x585*((x586+x587)|x588));

	if (t97 != 8454015) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x598 = 34U;
	static volatile int32_t x599 = INT32_MIN;
	int16_t x600 = INT16_MAX;
	int32_t t98 = -7009;

	t98 = (x597*((x598+x599)|x600));

	if (t98 != 2147450881) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x602 = -1;
	uint64_t x604 = 1774LLU;
	static volatile uint64_t t99 = 66471392900073LLU;

	t99 = (x601*((x602+x603)|x604));

	if (t99 != 18446744073709322496LLU) { NG(); } else { ; }
	
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

