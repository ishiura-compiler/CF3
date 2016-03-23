
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = INT8_MIN;
static int32_t x17 = -65249;
int16_t x28 = 30;
int32_t x47 = INT32_MIN;
volatile uint64_t x48 = 166888LLU;
uint64_t t6 = 26LLU;
int64_t t7 = 0LL;
uint8_t x53 = 18U;
volatile int8_t x56 = -1;
static int32_t x78 = INT32_MAX;
static int8_t x86 = -1;
int64_t x112 = -1LL;
static volatile int64_t t14 = 324371653291364LL;
static volatile uint64_t x116 = 13264LLU;
uint16_t x127 = 1251U;
int64_t x131 = 1011756585250881LL;
volatile int64_t x135 = 6644210LL;
int64_t t18 = 675LL;
volatile int16_t x137 = INT16_MIN;
static uint64_t x138 = 239542708LLU;
static volatile int16_t x152 = -1;
static int64_t x158 = INT64_MIN;
static int8_t x167 = -1;
int32_t x168 = -1;
int64_t x171 = INT64_MIN;
uint64_t t26 = 1048469119660LLU;
int64_t x191 = INT64_MIN;
uint64_t t29 = 44214LLU;
static int32_t x209 = INT32_MIN;
uint64_t x214 = 895LLU;
volatile uint64_t t31 = 6070LLU;
volatile uint16_t x217 = 2U;
uint8_t x219 = 13U;
uint16_t x222 = UINT16_MAX;
volatile uint64_t x233 = 18LLU;
int64_t x234 = -17527LL;
int8_t x247 = INT8_MIN;
uint64_t x248 = 277543916491573648LLU;
int8_t x252 = INT8_MIN;
int16_t x253 = -71;
volatile uint64_t t37 = 3721157283729467LLU;
static uint64_t x259 = 8333148957LLU;
int32_t x266 = -395611;
volatile uint64_t x271 = UINT64_MAX;
static int8_t x272 = 3;
volatile int32_t t41 = -40894;
uint32_t x283 = 2U;
int16_t x286 = INT16_MIN;
volatile int64_t x303 = -13LL;
static int64_t t45 = 374213492LL;
int64_t t46 = -46LL;
int8_t x326 = INT8_MAX;
static int16_t x327 = INT16_MIN;
uint64_t x330 = 11091670320644LLU;
static uint16_t x331 = 139U;
static int8_t x336 = 3;
int32_t x342 = -47353946;
int16_t x344 = 13;
int32_t x348 = 25954;
uint32_t t52 = 85U;
int32_t x360 = -1;
uint32_t t55 = 220128832U;
static uint8_t x362 = 54U;
volatile int64_t t56 = -160LL;
int64_t x372 = INT64_MIN;
int32_t x379 = 30489;
uint16_t x381 = UINT16_MAX;
uint16_t x384 = UINT16_MAX;
int8_t x385 = INT8_MAX;
uint64_t x387 = UINT64_MAX;
volatile int16_t x391 = INT16_MIN;
int32_t x399 = INT32_MAX;
volatile uint8_t x448 = UINT8_MAX;
int8_t x464 = INT8_MIN;
static uint32_t x478 = 615081006U;
static int8_t x486 = INT8_MIN;
uint32_t x493 = 3270U;
uint64_t x494 = UINT64_MAX;
volatile int8_t x496 = INT8_MIN;
uint8_t x497 = 41U;
static int16_t x502 = -1;
uint64_t t77 = 69222144059334368LLU;
int8_t x509 = INT8_MAX;
int16_t x511 = -1;
int8_t x532 = INT8_MAX;
static uint64_t t81 = 1518015860LLU;
volatile int8_t x547 = -6;
int16_t x562 = INT16_MIN;
uint64_t t84 = 0LLU;
static uint16_t x567 = UINT16_MAX;
static volatile uint32_t t85 = 127U;
int16_t x574 = -1;
static int32_t x590 = INT32_MIN;
uint64_t x594 = 2297LLU;
int16_t x595 = INT16_MAX;
volatile uint64_t t90 = 4316012174610748418LLU;
int8_t x597 = -1;
static int64_t t91 = 1LL;
int16_t x603 = INT16_MIN;
static uint16_t x610 = 72U;
volatile int64_t t94 = 479347112130LL;
static int8_t x614 = -1;
uint32_t x615 = UINT32_MAX;
volatile uint64_t x616 = 7929113379819096LLU;
static uint64_t x620 = 191227LLU;
uint16_t x625 = 373U;
int64_t t98 = -193331318794635258LL;
int16_t x661 = INT16_MIN;
int32_t t99 = -794084535;
int32_t x669 = INT32_MIN;
uint32_t x670 = UINT32_MAX;
uint64_t x671 = UINT64_MAX;
volatile int32_t t101 = -64713;
int16_t x681 = 9375;
volatile int64_t x684 = -1LL;
uint16_t x688 = 19913U;
volatile uint64_t t103 = 2471351026LLU;
int16_t x697 = INT16_MAX;
int8_t x698 = INT8_MAX;
uint16_t x714 = 845U;
volatile uint64_t t110 = 48250LLU;
int64_t t111 = 168568677991589LL;
uint64_t t112 = 452107427965610789LLU;
int32_t x789 = 7638144;
uint16_t x790 = 0U;
uint16_t x792 = UINT16_MAX;
uint64_t x794 = 371272917811637LLU;
uint32_t x796 = 484U;
static int32_t x802 = 20918;
uint64_t t117 = 3LLU;
int16_t x830 = -1;
static uint64_t x838 = 260207LLU;
static uint8_t x843 = 6U;
uint16_t x846 = 63U;
static int32_t x847 = 769298;
volatile int32_t t123 = 18055;
int16_t x850 = -1;
static uint8_t x853 = UINT8_MAX;
int64_t x854 = -1LL;
volatile uint16_t x865 = UINT16_MAX;
int16_t x866 = INT16_MIN;
int32_t t128 = -1091;
int8_t x875 = INT8_MIN;
uint8_t x876 = 15U;
int8_t x886 = 0;
uint8_t x887 = UINT8_MAX;
volatile uint64_t x906 = 153908195013657LLU;
uint8_t x907 = 0U;
static int8_t x912 = -1;
static int64_t x913 = -1LL;
static volatile int64_t x915 = -2476335185LL;
static volatile uint64_t t135 = 1329422LLU;
int64_t x922 = INT64_MIN;
volatile uint64_t t136 = 7LLU;
int32_t x939 = -424;
uint32_t x953 = 2149U;
int64_t x955 = INT64_MAX;
static uint64_t x959 = 40642LLU;
static int16_t x968 = INT16_MIN;
int32_t x975 = -1;
static volatile uint8_t x977 = UINT8_MAX;
volatile int32_t x984 = INT32_MIN;
int32_t x993 = -129265;
uint32_t x994 = 66588523U;
uint32_t x1012 = 27185220U;
uint64_t x1044 = 22LLU;
int8_t x1067 = INT8_MIN;
volatile uint8_t x1075 = UINT8_MAX;
volatile int32_t t157 = 309584;
int16_t x1086 = -1016;
static int8_t x1100 = INT8_MIN;
static volatile uint64_t t161 = 4503LLU;
static uint64_t x1115 = 2640042553381169LLU;
volatile uint64_t t164 = 73519908922LLU;
uint32_t x1119 = 1059662232U;
static uint64_t x1131 = 569997LLU;
static int8_t x1138 = INT8_MAX;
int64_t x1140 = INT64_MIN;
static volatile uint64_t t168 = 3774306681547341820LLU;
volatile int64_t x1146 = INT64_MIN;
volatile uint64_t x1149 = 20522862752304LLU;
int16_t x1151 = -532;
int8_t x1155 = INT8_MIN;
static int32_t x1157 = 180711829;
volatile uint32_t t173 = 30U;
int32_t x1180 = INT32_MAX;
uint64_t t174 = 54831794LLU;
static int64_t x1189 = 8381589437LL;
int64_t x1190 = -1LL;
uint32_t x1191 = UINT32_MAX;
uint32_t x1206 = 160U;
int32_t x1209 = -7;
int64_t x1210 = -1LL;
static volatile int64_t x1212 = -728428489LL;
int8_t x1219 = INT8_MIN;
static uint16_t x1222 = 4394U;
int32_t x1229 = INT32_MIN;
int32_t x1231 = -89498942;
uint32_t x1232 = 18U;
int16_t x1234 = -3;
uint32_t x1238 = UINT32_MAX;
int8_t x1239 = -1;
uint32_t t185 = 2U;
uint64_t x1257 = 225120008001146419LLU;
uint64_t t187 = 22402458763554759LLU;
volatile int16_t x1275 = INT16_MIN;
uint32_t x1278 = 5U;
uint64_t x1320 = 624038565677LLU;
volatile uint32_t t197 = 148877706U;
uint8_t x1371 = 3U;
static uint32_t t198 = 34516U;
static volatile int8_t x1374 = 28;


void f0(void) {
    	volatile int64_t x6 = INT64_MAX;
	static volatile int16_t x7 = -1;
	static uint64_t x8 = 5387LLU;
	volatile uint64_t t0 = 882006962LLU;

    t0 = (x5*(x6*(x7-x8)));

    if (t0 != 18446744073708861952LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x13 = UINT16_MAX;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = 144U;
	uint16_t x16 = 1018U;
	static volatile uint32_t t1 = 867U;

    t1 = (x13*(x14*(x15-x16)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x18 = 39U;
	int8_t x19 = -1;
	int32_t x20 = INT32_MAX;
	static volatile uint32_t t2 = 1U;

    t2 = (x17*(x18*(x19-x20)));

    if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = -1;
	uint32_t x22 = 12U;
	uint64_t x23 = 85071955265097358LLU;
	uint32_t x24 = 10120U;
	volatile uint64_t t3 = 2042770266835LLU;

    t3 = (x21*(x22*(x23-x24)));

    if (t3 != 17425880610528504760LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MAX;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 1U;
	static volatile int32_t t4 = 13111476;

    t4 = (x25*(x26*(x27-x28)));

    if (t4 != 121631104) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x37 = 3698280;
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	static uint64_t x40 = UINT64_MAX;
	static uint64_t t5 = 46LLU;

    t5 = (x37*(x38*(x39-x40)));

    if (t5 != 3970876727623680LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x45 = UINT64_MAX;
	int32_t x46 = INT32_MIN;

    t6 = (x45*(x46*(x47-x48)));

    if (t6 != 13834699666031116288LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MAX;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = -1;

    t7 = (x49*(x50*(x51-x52)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x54 = 136U;
	int32_t x55 = -1;
	static volatile int32_t t8 = 43631394;

    t8 = (x53*(x54*(x55-x56)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	int64_t x59 = 112LL;
	static uint32_t x60 = 235124U;
	int64_t t9 = 2332LL;

    t9 = (x57*(x58*(x59-x60)));

    if (t9 != 985681690112LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x65 = 3653LLU;
	volatile uint16_t x66 = 31834U;
	uint16_t x67 = 68U;
	int8_t x68 = 3;
	uint64_t t10 = 8360459436963655LLU;

    t10 = (x65*(x66*(x67-x68)));

    if (t10 != 7558824130LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x77 = INT32_MAX;
	uint16_t x79 = UINT16_MAX;
	volatile uint64_t x80 = 1LLU;
	uint64_t t11 = 7546386123LLU;

    t11 = (x77*(x78*(x79-x80)));

    if (t11 != 9223090570468065278LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = INT16_MAX;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 239225U;
	static volatile uint32_t t12 = 1U;

    t12 = (x85*(x86*(x87-x88)));

    if (t12 != 1396234631U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x101 = INT8_MIN;
	uint16_t x102 = 3U;
	int8_t x103 = 1;
	uint16_t x104 = UINT16_MAX;
	static int32_t t13 = 19;

    t13 = (x101*(x102*(x103-x104)));

    if (t13 != 25165056) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x109 = INT32_MAX;
	int32_t x110 = -1;
	int16_t x111 = 35;

    t14 = (x109*(x110*(x111-x112)));

    if (t14 != -77309411292LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x113 = 4738U;
	int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint64_t t15 = 212819LLU;

    t15 = (x113*(x114*(x115-x116)));

    if (t15 != 218099616LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x125 = 17;
	int64_t x126 = -55086521LL;
	static volatile uint64_t x128 = 2117869595LLU;
	volatile uint64_t t16 = 731010102210727487LLU;

    t16 = (x125*(x126*(x127-x128)));

    if (t16 != 1983321983118850808LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x129 = 234U;
	volatile int8_t x130 = -6;
	int8_t x132 = -29;
	volatile int64_t t17 = -4171287LL;

    t17 = (x129*(x130*(x131-x132)));

    if (t17 != -1420506245692277640LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x133 = -15456LL;
	volatile int16_t x134 = INT16_MIN;
	volatile uint8_t x136 = UINT8_MAX;

    t18 = (x133*(x134*(x135-x136)));

    if (t18 != 3364912119152640LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x139 = INT32_MIN;
	uint32_t x140 = 5296879U;
	uint64_t t19 = 35LLU;

    t19 = (x137*(x138*(x139-x140)));

    if (t19 != 8688036485729222656LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x145 = -1;
	volatile uint64_t x146 = UINT64_MAX;
	uint32_t x147 = 198938U;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t20 = 224171528060LLU;

    t20 = (x145*(x146*(x147-x148)));

    if (t20 != 2147682586LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x149 = UINT64_MAX;
	static int8_t x150 = -1;
	int64_t x151 = -1LL;
	volatile uint64_t t21 = 47573092959834LLU;

    t21 = (x149*(x150*(x151-x152)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x153 = 297;
	static int16_t x154 = 8367;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = 20878460U;
	uint32_t t22 = 364352888U;

    t22 = (x153*(x154*(x155-x156)));

    if (t22 != 4229601564U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x157 = 1U;
	static int32_t x159 = -1;
	volatile int16_t x160 = -1;
	static volatile int64_t t23 = 66710479949100387LL;

    t23 = (x157*(x158*(x159-x160)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x161 = UINT64_MAX;
	volatile int8_t x162 = 1;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	volatile uint64_t t24 = 17164081658140LLU;

    t24 = (x161*(x162*(x163-x164)));

    if (t24 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x165 = INT16_MAX;
	uint8_t x166 = 0U;
	int32_t t25 = 50059736;

    t25 = (x165*(x166*(x167-x168)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x169 = 123530339U;
	static volatile int64_t x170 = 459565150LL;
	uint64_t x172 = UINT64_MAX;

    t26 = (x169*(x170*(x171-x172)));

    if (t26 != 56770238772085850LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x185 = INT32_MIN;
	static int64_t x186 = INT64_MIN;
	uint64_t x187 = 988143LLU;
	int64_t x188 = INT64_MIN;
	uint64_t t27 = 392806032173LLU;

    t27 = (x185*(x186*(x187-x188)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = -40853LL;
	static uint64_t x192 = UINT64_MAX;
	volatile uint64_t t28 = 111792476558LLU;

    t28 = (x189*(x190*(x191-x192)));

    if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x205 = -1LL;
	uint64_t x206 = 17557LLU;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;

    t29 = (x205*(x206*(x207-x208)));

    if (t29 != 18446744073136491136LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x210 = UINT64_MAX;
	static volatile uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 1465U;
	uint64_t t30 = 5244131534561184087LLU;

    t30 = (x209*(x210*(x211-x212)));

    if (t30 != 9223368888643747840LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x215 = INT32_MAX;
	uint8_t x216 = 1U;

    t31 = (x213*(x214*(x215-x216)));

    if (t31 != 4611689862423117824LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x218 = -1;
	int64_t x220 = -1LL;
	static volatile int64_t t32 = 43LL;

    t32 = (x217*(x218*(x219-x220)));

    if (t32 != -28LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x221 = UINT8_MAX;
	int16_t x223 = INT16_MIN;
	uint32_t x224 = 6310U;
	uint32_t t33 = 183486913U;

    t33 = (x221*(x222*(x223-x224)));

    if (t33 != 4080930138U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x235 = 23032497219415LL;
	int32_t x236 = INT32_MAX;
	volatile uint64_t t34 = 81735610996154LLU;

    t34 = (x233*(x234*(x235-x236)));

    if (t34 != 11180991156971048368LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x245 = 586108076775744LLU;
	uint32_t x246 = 129561U;
	uint64_t t35 = 8385538423609299117LLU;

    t35 = (x245*(x246*(x247-x248)));

    if (t35 != 7665170131157519360LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x249 = -1;
	int64_t x250 = -1LL;
	static int64_t x251 = -23298031LL;
	volatile int64_t t36 = 500308079169781798LL;

    t36 = (x249*(x250*(x251-x252)));

    if (t36 != -23297903LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x254 = 249LLU;
	static uint64_t x255 = 559666341366168286LLU;
	int16_t x256 = INT16_MIN;

    t37 = (x253*(x254*(x255-x256)));

    if (t37 != 11560318568960784126LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x257 = 2U;
	static int8_t x258 = -3;
	volatile int16_t x260 = 0;
	uint64_t t38 = 1577LLU;

    t38 = (x257*(x258*(x259-x260)));

    if (t38 != 18446744023710657874LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x265 = UINT8_MAX;
	static int64_t x267 = -1LL;
	uint32_t x268 = 41755425U;
	static int64_t t39 = 50733LL;

    t39 = (x265*(x266*(x267-x268)));

    if (t39 != 4212320987997930LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x269 = 0U;
	int64_t x270 = INT64_MIN;
	static uint64_t t40 = 269998404462LLU;

    t40 = (x269*(x270*(x271-x272)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x273 = INT16_MAX;
	static int8_t x274 = INT8_MAX;
	static uint8_t x275 = 2U;
	int8_t x276 = -1;

    t41 = (x273*(x274*(x275-x276)));

    if (t41 != 12484227) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x281 = -24;
	uint64_t x282 = 1981199555135597LLU;
	volatile uint32_t x284 = UINT32_MAX;
	static volatile uint64_t t42 = 1363111041141LLU;

    t42 = (x281*(x282*(x283-x284)));

    if (t42 != 18304097705739788632LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x285 = -8;
	volatile uint64_t x287 = 149058975564219LLU;
	int8_t x288 = 1;
	uint64_t t43 = 3264760263323803619LLU;

    t43 = (x285*(x286*(x287-x288)));

    if (t43 != 2181427942887260160LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x297 = 917693U;
	int32_t x298 = INT32_MIN;
	int8_t x299 = 2;
	volatile uint64_t x300 = 277604340079286448LLU;
	volatile uint64_t t44 = 3803337063431LLU;

    t44 = (x297*(x298*(x299-x300)));

    if (t44 != 1879896856062853120LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	int16_t x304 = INT16_MAX;

    t45 = (x301*(x302*(x303-x304)));

    if (t45 != 17950601065267200LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x309 = 283U;
	uint16_t x310 = UINT16_MAX;
	int64_t x311 = -3225257585LL;
	volatile int32_t x312 = INT32_MIN;

    t46 = (x309*(x310*(x311-x312)));

    if (t46 != -19988831934046485LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x313 = -1;
	int16_t x314 = 7;
	int32_t x315 = -895646;
	static int16_t x316 = -1;
	int32_t t47 = 12965;

    t47 = (x313*(x314*(x315-x316)));

    if (t47 != 6269515) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x325 = INT16_MAX;
	uint64_t x328 = 5169824188763922LLU;
	static volatile uint64_t t48 = 151125153LLU;

    t48 = (x325*(x326*(x327-x328)));

    if (t48 != 13597426342801799662LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x329 = 4U;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t49 = 26143351939894616LLU;

    t49 = (x329*(x330*(x331-x332)));

    if (t49 != 15545340584554211520LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x333 = 12;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	int32_t t50 = 2038456;

    t50 = (x333*(x334*(x335-x336)));

    if (t50 != 1572864) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x341 = 0U;
	volatile int8_t x343 = 18;
	volatile int32_t t51 = -221;

    t51 = (x341*(x342*(x343-x344)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;

    t52 = (x345*(x346*(x347-x348)));

    if (t52 != 1709283870U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x349 = 60884659177830LLU;
	volatile uint64_t x350 = 19444852423442LLU;
	int8_t x351 = INT8_MAX;
	int8_t x352 = -1;
	volatile uint64_t t53 = 147151LLU;

    t53 = (x349*(x350*(x351-x352)));

    if (t53 != 9974720919036597760LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x353 = 3;
	static int64_t x354 = 421530497719LL;
	int64_t x355 = -2LL;
	static volatile int32_t x356 = -1;
	volatile int64_t t54 = -13837170321LL;

    t54 = (x353*(x354*(x355-x356)));

    if (t54 != -1264591493157LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MAX;
	int8_t x359 = -1;

    t55 = (x357*(x358*(x359-x360)));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x361 = INT16_MIN;
	int64_t x363 = 561068LL;
	int16_t x364 = INT16_MIN;

    t56 = (x361*(x362*(x363-x364)));

    if (t56 != -1050776174592LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	static volatile uint64_t t57 = 184965590796LLU;

    t57 = (x369*(x370*(x371-x372)));

    if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x377 = 1;
	uint8_t x378 = UINT8_MAX;
	static uint32_t x380 = 10U;
	uint32_t t58 = 1950273U;

    t58 = (x377*(x378*(x379-x380)));

    if (t58 != 7772145U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x382 = 51U;
	uint32_t x383 = UINT32_MAX;
	static uint32_t t59 = 15796454U;

    t59 = (x381*(x382*(x383-x384)));

    if (t59 != 3342336U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x386 = INT16_MIN;
	int16_t x388 = 365;
	uint64_t t60 = 3639LLU;

    t60 = (x385*(x386*(x387-x388)));

    if (t60 != 1523122176LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x389 = -43;
	volatile int16_t x390 = INT16_MIN;
	uint32_t x392 = 3682U;
	uint32_t t61 = 419047267U;

    t61 = (x389*(x390*(x391-x392)));

    if (t61 != 180682752U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 3U;
	uint64_t x400 = 541683319973097876LLU;
	volatile uint64_t t62 = 125594641LLU;

    t62 = (x397*(x398*(x399-x400)));

    if (t62 != 8308228252434994367LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x405 = UINT64_MAX;
	int16_t x406 = -1;
	int16_t x407 = INT16_MAX;
	static volatile int32_t x408 = -1;
	uint64_t t63 = 27459LLU;

    t63 = (x405*(x406*(x407-x408)));

    if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x417 = 55U;
	uint8_t x418 = 1U;
	int8_t x419 = 0;
	volatile uint8_t x420 = 47U;
	static volatile int32_t t64 = 13330;

    t64 = (x417*(x418*(x419-x420)));

    if (t64 != -2585) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x437 = 63U;
	volatile uint32_t x438 = UINT32_MAX;
	volatile int16_t x439 = 227;
	uint16_t x440 = UINT16_MAX;
	volatile uint32_t t65 = 58464U;

    t65 = (x437*(x438*(x439-x440)));

    if (t65 != 4114404U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	volatile uint8_t x443 = 97U;
	uint64_t x444 = 721436842266759LLU;
	uint64_t t66 = 15752623LLU;

    t66 = (x441*(x442*(x443-x444)));

    if (t66 != 18354400157899418880LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x445 = -7;
	volatile int64_t x446 = -1LL;
	uint32_t x447 = 913592U;
	volatile int64_t t67 = 7234627LL;

    t67 = (x445*(x446*(x447-x448)));

    if (t67 != 6393359LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x449 = INT16_MIN;
	volatile int64_t x450 = 119406134LL;
	uint32_t x451 = 776U;
	static int32_t x452 = -1;
	volatile int64_t t68 = 132111295500784LL;

    t68 = (x449*(x450*(x451-x452)));

    if (t68 != -3040168054554624LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x461 = 217352;
	volatile uint8_t x462 = 5U;
	static int8_t x463 = INT8_MIN;
	volatile int32_t t69 = -294415984;

    t69 = (x461*(x462*(x463-x464)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MAX;
	int64_t x471 = INT64_MIN;
	volatile int64_t x472 = INT64_MIN;
	int64_t t70 = -2810LL;

    t70 = (x469*(x470*(x471-x472)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x477 = -410182;
	int32_t x479 = 146;
	uint64_t x480 = 36725277218985935LLU;
	uint64_t t71 = 262197999LLU;

    t71 = (x477*(x478*(x479-x480)));

    if (t71 != 11059359246463184708LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x481 = -2;
	int64_t x482 = INT64_MIN;
	int16_t x483 = -1;
	static uint64_t x484 = 8710790692952119807LLU;
	volatile uint64_t t72 = 7LLU;

    t72 = (x481*(x482*(x483-x484)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x485 = 0U;
	int16_t x487 = 0;
	uint16_t x488 = 732U;
	int32_t t73 = 93169;

    t73 = (x485*(x486*(x487-x488)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x495 = 21644189;
	volatile uint64_t t74 = 289LLU;

    t74 = (x493*(x494*(x495-x496)));

    if (t74 != 18446744002932635026LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x498 = INT16_MAX;
	int64_t x499 = -1LL;
	int8_t x500 = INT8_MIN;
	int64_t t75 = -74694981688LL;

    t75 = (x497*(x498*(x499-x500)));

    if (t75 != 170617769LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x501 = -1;
	int32_t x503 = -1;
	uint32_t x504 = 13U;
	uint32_t t76 = 205667U;

    t76 = (x501*(x502*(x503-x504)));

    if (t76 != 4294967282U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x505 = 0;
	uint64_t x506 = 386977572LLU;
	static int64_t x507 = -1LL;
	int8_t x508 = INT8_MAX;

    t77 = (x505*(x506*(x507-x508)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x510 = INT16_MIN;
	uint32_t x512 = 15300U;
	volatile uint32_t t78 = 76U;

    t78 = (x509*(x510*(x511-x512)));

    if (t78 != 3546120192U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x517 = -7002499LL;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = 16959866U;
	volatile int8_t x520 = INT8_MIN;
	int64_t t79 = -2LL;

    t79 = (x517*(x518*(x519-x520)));

    if (t79 != -18211154678054912LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x525 = UINT32_MAX;
	int16_t x526 = 0;
	int16_t x527 = INT16_MIN;
	int16_t x528 = -1;
	static volatile uint32_t t80 = 99926325U;

    t80 = (x525*(x526*(x527-x528)));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x529 = -29458LL;
	uint64_t x530 = 131745691130LLU;
	int8_t x531 = 3;

    t81 = (x529*(x530*(x531-x532)));

    if (t81 != 481239606594134960LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x533 = -1;
	int16_t x534 = 236;
	uint8_t x535 = 0U;
	int8_t x536 = INT8_MIN;
	int32_t t82 = 429750;

    t82 = (x533*(x534*(x535-x536)));

    if (t82 != -30208) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x545 = -1;
	uint8_t x546 = 2U;
	int16_t x548 = INT16_MIN;
	volatile int32_t t83 = -195263796;

    t83 = (x545*(x546*(x547-x548)));

    if (t83 != -65524) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x561 = -46142426800LL;
	static int16_t x563 = -1226;
	uint64_t x564 = UINT64_MAX;

    t84 = (x561*(x562*(x563-x564)));

    if (t84 != 16594550148016111616LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x565 = 20534;
	uint8_t x566 = 120U;
	uint32_t x568 = 982U;

    t85 = (x565*(x566*(x567-x568)));

    if (t85 != 149966288U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x573 = 0U;
	int8_t x575 = INT8_MIN;
	static uint32_t x576 = UINT32_MAX;
	uint32_t t86 = 1992U;

    t86 = (x573*(x574*(x575-x576)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x581 = INT16_MIN;
	int16_t x582 = -1;
	volatile int8_t x583 = INT8_MAX;
	volatile int32_t x584 = -1;
	volatile int32_t t87 = -1;

    t87 = (x581*(x582*(x583-x584)));

    if (t87 != 4194304) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x585 = UINT32_MAX;
	int16_t x586 = 2193;
	int8_t x587 = INT8_MIN;
	int8_t x588 = 50;
	volatile uint32_t t88 = 14521694U;

    t88 = (x585*(x586*(x587-x588)));

    if (t88 != 390354U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x589 = INT8_MAX;
	int32_t x591 = 7849;
	static uint64_t x592 = 123497029LLU;
	static volatile uint64_t t89 = 3845LLU;

    t89 = (x589*(x590*(x591-x592)));

    if (t89 != 15232512260166385664LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x593 = -14;
	static int8_t x596 = INT8_MIN;

    t90 = (x593*(x594*(x595-x596)));

    if (t90 != 18446744072651714206LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x598 = 17601820263LL;
	int16_t x599 = INT16_MAX;
	uint32_t x600 = 59U;

    t91 = (x597*(x598*(x599-x600)));

    if (t91 != -575720337162204LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x601 = INT64_MAX;
	volatile int32_t x602 = INT32_MIN;
	uint64_t x604 = 768595602892LLU;
	uint64_t t92 = 956000865664LLU;

    t92 = (x601*(x602*(x603-x604)));

    if (t92 != 9660407129843957760LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x605 = 13915U;
	uint64_t x606 = 4246154317999LLU;
	uint16_t x607 = 0U;
	int8_t x608 = INT8_MAX;
	uint64_t t93 = 44887929992LLU;

    t93 = (x605*(x606*(x607-x608)));

    if (t93 != 10942918932170128821LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x609 = 29U;
	int64_t x611 = INT64_MIN;
	static int64_t x612 = INT64_MIN;

    t94 = (x609*(x610*(x611-x612)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x613 = 1126LLU;
	volatile uint64_t t95 = 1802LLU;

    t95 = (x613*(x614*(x615-x616)));

    if (t95 != 8928176829543127926LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x617 = INT16_MIN;
	volatile uint32_t x618 = 116U;
	static volatile int8_t x619 = INT8_MIN;
	volatile uint64_t t96 = 13980557236LLU;

    t96 = (x617*(x618*(x619-x620)));

    if (t96 != 727357194240LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x626 = 12;
	static int64_t x627 = -873LL;
	uint16_t x628 = UINT16_MAX;
	int64_t t97 = -192693718931422549LL;

    t97 = (x625*(x626*(x627-x628)));

    if (t97 != -297242208LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x657 = -1LL;
	uint32_t x658 = UINT32_MAX;
	int64_t x659 = -1LL;
	volatile int16_t x660 = 1;

    t98 = (x657*(x658*(x659-x660)));

    if (t98 != 8589934590LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x662 = 0U;
	int32_t x663 = -53861;
	int16_t x664 = 795;

    t99 = (x661*(x662*(x663-x664)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x672 = -3279;
	uint64_t t100 = 41538345034LLU;

    t100 = (x669*(x670*(x671-x672)));

    if (t100 != 7039451398144LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x673 = UINT8_MAX;
	static volatile int8_t x674 = INT8_MIN;
	uint8_t x675 = 22U;
	static volatile uint8_t x676 = 3U;

    t101 = (x673*(x674*(x675-x676)));

    if (t101 != -620160) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x682 = UINT32_MAX;
	static uint16_t x683 = 1963U;
	int64_t t102 = -3037495LL;

    t102 = (x681*(x682*(x683-x684)));

    if (t102 != 79081085319187500LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x685 = INT16_MIN;
	uint64_t x686 = 2815735676273LLU;
	int32_t x687 = -1;

    t103 = (x685*(x686*(x687-x688)));

    if (t103 != 11157991213977894912LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x689 = 10917117398654LLU;
	volatile uint16_t x690 = 163U;
	static int64_t x691 = 33629153911LL;
	static uint8_t x692 = UINT8_MAX;
	uint64_t t104 = 400164650430926LLU;

    t104 = (x689*(x690*(x691-x692)));

    if (t104 != 15250844242977396016LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x699 = 915374U;
	int8_t x700 = INT8_MIN;
	volatile uint32_t t105 = 409570U;

    t105 = (x697*(x698*(x699-x700)));

    if (t105 != 142270766U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x701 = INT16_MAX;
	static volatile uint32_t x702 = 1034600161U;
	static volatile uint8_t x703 = UINT8_MAX;
	static int32_t x704 = -1;
	volatile uint32_t t106 = 927U;

    t106 = (x701*(x702*(x703-x704)));

    if (t106 != 3317767936U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x713 = -144316741438LL;
	int8_t x715 = INT8_MIN;
	uint8_t x716 = 76U;
	static int64_t t107 = -304225LL;

    t107 = (x713*(x714*(x715-x716)));

    if (t107 != 24877319889082440LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x721 = INT32_MAX;
	uint8_t x722 = UINT8_MAX;
	uint32_t x723 = 30463U;
	uint32_t x724 = UINT32_MAX;
	volatile uint32_t t108 = 75438443U;

    t108 = (x721*(x722*(x723-x724)));

    if (t108 != 4287198976U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	uint64_t x726 = UINT64_MAX;
	int32_t x727 = INT32_MIN;
	int64_t x728 = -14332048812LL;
	volatile uint64_t t109 = 62LLU;

    t109 = (x725*(x726*(x727-x728)));

    if (t109 != 18445945558231528876LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x733 = INT16_MIN;
	volatile uint64_t x734 = UINT64_MAX;
	int32_t x735 = INT32_MIN;
	volatile int16_t x736 = 0;

    t110 = (x733*(x734*(x735-x736)));

    if (t110 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x753 = -156;
	int32_t x754 = INT32_MIN;
	static uint8_t x755 = UINT8_MAX;
	int64_t x756 = -1331LL;

    t111 = (x753*(x754*(x755-x756)));

    if (t111 != 531321814253568LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x761 = 32;
	int8_t x762 = 4;
	int8_t x763 = 0;
	uint64_t x764 = 30LLU;

    t112 = (x761*(x762*(x763-x764)));

    if (t112 != 18446744073709547776LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x791 = UINT64_MAX;
	uint64_t t113 = 4502LLU;

    t113 = (x789*(x790*(x791-x792)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x793 = 74U;
	uint32_t x795 = 11706U;
	uint64_t t114 = 2516737202LLU;

    t114 = (x793*(x794*(x795-x796)));

    if (t114 != 13167521413129264780LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x797 = 7512973068542845LLU;
	uint64_t x798 = 1854302LLU;
	uint32_t x799 = UINT32_MAX;
	volatile uint16_t x800 = 127U;
	uint64_t t115 = 40370931423743471LLU;

    t115 = (x797*(x798*(x799-x800)));

    if (t115 != 2577041234965859584LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x801 = UINT8_MAX;
	uint8_t x803 = 5U;
	int8_t x804 = INT8_MIN;
	int32_t t116 = 875472;

    t116 = (x801*(x802*(x803-x804)));

    if (t116 != 709433970) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int64_t x810 = INT64_MIN;
	volatile uint64_t x811 = UINT64_MAX;
	static int16_t x812 = INT16_MIN;

    t117 = (x809*(x810*(x811-x812)));

    if (t117 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x813 = INT64_MAX;
	uint8_t x814 = 15U;
	uint64_t x815 = 7623497182769064LLU;
	int64_t x816 = INT64_MIN;
	volatile uint64_t t118 = 42376320944LLU;

    t118 = (x813*(x814*(x815-x816)));

    if (t118 != 9109019579113239848LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x817 = INT64_MAX;
	static uint64_t x818 = 466825LLU;
	int32_t x819 = INT32_MIN;
	uint32_t x820 = UINT32_MAX;
	uint64_t t119 = 2696397329136495651LLU;

    t119 = (x817*(x818*(x819-x820)));

    if (t119 != 9222369537800331383LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x829 = -1;
	volatile int16_t x831 = 482;
	static uint32_t x832 = UINT32_MAX;
	volatile uint32_t t120 = 118512647U;

    t120 = (x829*(x830*(x831-x832)));

    if (t120 != 483U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x837 = INT8_MIN;
	static int64_t x839 = INT64_MIN;
	static int16_t x840 = -75;
	uint64_t t121 = 434681LLU;

    t121 = (x837*(x838*(x839-x840)));

    if (t121 != 18446744071211564416LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x841 = UINT64_MAX;
	uint16_t x842 = 3U;
	static int16_t x844 = -1;
	volatile uint64_t t122 = 3400782068558356LLU;

    t122 = (x841*(x842*(x843-x844)));

    if (t122 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x845 = 4;
	int32_t x848 = -1;

    t123 = (x845*(x846*(x847-x848)));

    if (t123 != 193863348) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x849 = UINT16_MAX;
	int64_t x851 = -1LL;
	uint8_t x852 = UINT8_MAX;
	static int64_t t124 = -64798585976LL;

    t124 = (x849*(x850*(x851-x852)));

    if (t124 != 16776960LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x855 = 41U;
	int32_t x856 = INT32_MAX;
	volatile int64_t t125 = 16LL;

    t125 = (x853*(x854*(x855-x856)));

    if (t125 != 547608319530LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x857 = -4775;
	static volatile int16_t x858 = -109;
	volatile int16_t x859 = INT16_MAX;
	static volatile uint32_t x860 = 125U;
	volatile uint32_t t126 = 0U;

    t126 = (x857*(x858*(x859-x860)));

    if (t126 != 4104443062U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x867 = 2510LLU;
	volatile int64_t x868 = 91655LL;
	uint64_t t127 = 112LLU;

    t127 = (x865*(x866*(x867-x868)));

    if (t127 != 191434508697600LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x869 = 20U;
	int8_t x870 = 1;
	uint8_t x871 = 1U;
	int16_t x872 = -1;

    t128 = (x869*(x870*(x871-x872)));

    if (t128 != 40) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x873 = INT16_MIN;
	int8_t x874 = -1;
	int32_t t129 = 15958679;

    t129 = (x873*(x874*(x875-x876)));

    if (t129 != -4685824) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x881 = 1;
	static uint8_t x882 = 5U;
	int64_t x883 = -3219LL;
	static volatile int32_t x884 = INT32_MAX;
	int64_t t130 = -152304647LL;

    t130 = (x881*(x882*(x883-x884)));

    if (t130 != -10737434330LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x885 = 349279129705451LLU;
	static volatile int16_t x888 = INT16_MAX;
	static uint64_t t131 = 16078860677795LLU;

    t131 = (x885*(x886*(x887-x888)));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x905 = 764U;
	static int16_t x908 = INT16_MAX;
	volatile uint64_t t132 = 2820770669076223115LLU;

    t132 = (x905*(x906*(x907-x908)));

    if (t132 != 2433604331747113628LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x909 = -3;
	int32_t x910 = -1033209;
	int8_t x911 = INT8_MIN;
	volatile int32_t t133 = 8707;

    t133 = (x909*(x910*(x911-x912)));

    if (t133 != -393652629) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x914 = 3LLU;
	static volatile int32_t x916 = 13;
	volatile uint64_t t134 = 9194759920576704135LLU;

    t134 = (x913*(x914*(x915-x916)));

    if (t134 != 7429005594LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x917 = 529498417170860870LLU;
	int32_t x918 = -1;
	uint16_t x919 = 24U;
	static int8_t x920 = INT8_MAX;

    t135 = (x917*(x918*(x919-x920)));

    if (t135 != 17644848821179566378LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x921 = UINT16_MAX;
	uint64_t x923 = UINT64_MAX;
	volatile int16_t x924 = INT16_MIN;

    t136 = (x921*(x922*(x923-x924)));

    if (t136 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x937 = -1;
	uint32_t x938 = 159U;
	int16_t x940 = -812;
	static volatile uint32_t t137 = 1U;

    t137 = (x937*(x938*(x939-x940)));

    if (t137 != 4294905604U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x945 = -193;
	int16_t x946 = INT16_MIN;
	static volatile int32_t x947 = INT32_MIN;
	uint64_t x948 = 157LLU;
	uint64_t t138 = 22352726LLU;

    t138 = (x945*(x946*(x947-x948)));

    if (t138 != 18433162905090359296LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x954 = 7866561501295744LLU;
	static uint32_t x956 = 29U;
	uint64_t t139 = 250319352819964606LLU;

    t139 = (x953*(x954*(x955-x956)));

    if (t139 != 9351614075330829568LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x957 = INT8_MIN;
	uint8_t x958 = UINT8_MAX;
	volatile uint8_t x960 = 9U;
	static volatile uint64_t t140 = 115LLU;

    t140 = (x957*(x958*(x959-x960)));

    if (t140 != 18446744072383290496LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x965 = -435746;
	static int8_t x966 = 54;
	static int16_t x967 = INT16_MIN;
	volatile int32_t t141 = -2283;

    t141 = (x965*(x966*(x967-x968)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x969 = -102;
	volatile uint64_t x970 = UINT64_MAX;
	int16_t x971 = -1;
	int16_t x972 = INT16_MAX;
	static uint64_t t142 = 212040651659LLU;

    t142 = (x969*(x970*(x971-x972)));

    if (t142 != 18446744073706209280LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x973 = -1LL;
	int16_t x974 = -1;
	static int8_t x976 = -15;
	int64_t t143 = -32239096LL;

    t143 = (x973*(x974*(x975-x976)));

    if (t143 != 14LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x978 = 1068640;
	uint64_t x979 = 1687477LLU;
	int32_t x980 = -4448745;
	uint64_t t144 = 255058167127783089LLU;

    t144 = (x977*(x978*(x979-x980)));

    if (t144 != 1672140130910400LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x981 = INT16_MIN;
	static uint32_t x982 = 18509076U;
	int32_t x983 = -23710464;
	uint32_t t145 = 2204U;

    t145 = (x981*(x982*(x983-x984)));

    if (t145 != 1845493760U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x985 = -3;
	static uint8_t x986 = 5U;
	int8_t x987 = INT8_MAX;
	static volatile int16_t x988 = 0;
	int32_t t146 = -8;

    t146 = (x985*(x986*(x987-x988)));

    if (t146 != -1905) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x989 = INT16_MIN;
	static uint32_t x990 = 1U;
	int16_t x991 = INT16_MIN;
	uint8_t x992 = UINT8_MAX;
	static volatile uint32_t t147 = 16657U;

    t147 = (x989*(x990*(x991-x992)));

    if (t147 != 1082097664U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x995 = INT8_MIN;
	int32_t x996 = 3447494;
	static volatile uint32_t t148 = 60U;

    t148 = (x993*(x994*(x995-x996)));

    if (t148 != 2433232418U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x997 = 27;
	int8_t x998 = INT8_MIN;
	uint64_t x999 = 867672783313LLU;
	static int32_t x1000 = 7357;
	uint64_t t149 = 3741315LLU;

    t149 = (x997*(x998*(x999-x1000)));

    if (t149 != 18443745396595847680LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x1009 = INT8_MIN;
	int16_t x1010 = INT16_MIN;
	volatile uint32_t x1011 = UINT32_MAX;
	static uint32_t t150 = 970615406U;

    t150 = (x1009*(x1010*(x1011-x1012)));

    if (t150 != 4005560320U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1021 = -1;
	static int8_t x1022 = 2;
	int8_t x1023 = INT8_MIN;
	int32_t x1024 = 57467;
	int32_t t151 = 17063;

    t151 = (x1021*(x1022*(x1023-x1024)));

    if (t151 != 115190) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x1029 = 5458094;
	uint64_t x1030 = UINT64_MAX;
	int8_t x1031 = 5;
	uint16_t x1032 = 74U;
	volatile uint64_t t152 = 44711758207640472LLU;

    t152 = (x1029*(x1030*(x1031-x1032)));

    if (t152 != 376608486LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1041 = 1LLU;
	int64_t x1042 = 0LL;
	int32_t x1043 = -3720405;
	static uint64_t t153 = 61820144007LLU;

    t153 = (x1041*(x1042*(x1043-x1044)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1049 = -20;
	int32_t x1050 = 21;
	int64_t x1051 = -1LL;
	uint64_t x1052 = 21452887LLU;
	static uint64_t t154 = 513245570129357410LLU;

    t154 = (x1049*(x1050*(x1051-x1052)));

    if (t154 != 9010212960LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1065 = UINT8_MAX;
	uint32_t x1066 = UINT32_MAX;
	uint8_t x1068 = 4U;
	uint32_t t155 = 4U;

    t155 = (x1065*(x1066*(x1067-x1068)));

    if (t155 != 33660U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1073 = UINT32_MAX;
	int32_t x1074 = INT32_MAX;
	static uint32_t x1076 = 44428215U;
	uint32_t t156 = 0U;

    t156 = (x1073*(x1074*(x1075-x1076)));

    if (t156 != 4250539336U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x1081 = 6728;
	volatile uint8_t x1082 = 2U;
	int8_t x1083 = INT8_MIN;
	uint16_t x1084 = 1670U;

    t157 = (x1081*(x1082*(x1083-x1084)));

    if (t157 != -24193888) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x1085 = UINT64_MAX;
	uint32_t x1087 = 153U;
	static int32_t x1088 = 673;
	uint64_t t158 = 18471393224786235LLU;

    t158 = (x1085*(x1086*(x1087-x1088)));

    if (t158 != 18446744073709023296LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1089 = -1186LL;
	int16_t x1090 = -1;
	int8_t x1091 = -6;
	static int16_t x1092 = INT16_MIN;
	int64_t t159 = 13877684LL;

    t159 = (x1089*(x1090*(x1091-x1092)));

    if (t159 != 38855732LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1097 = 101;
	static uint64_t x1098 = 12204449LLU;
	int64_t x1099 = INT64_MIN;
	volatile uint64_t t160 = 528LLU;

    t160 = (x1097*(x1098*(x1099-x1100)));

    if (t160 != 9223372194633892480LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1101 = 1U;
	uint64_t x1102 = 631LLU;
	volatile uint32_t x1103 = 560145824U;
	volatile uint16_t x1104 = 16U;

    t161 = (x1101*(x1102*(x1103-x1104)));

    if (t161 != 353452004848LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1105 = 1LL;
	int32_t x1106 = -1;
	static volatile int8_t x1107 = -4;
	static int32_t x1108 = -8880;
	volatile int64_t t162 = 844116820546LL;

    t162 = (x1105*(x1106*(x1107-x1108)));

    if (t162 != -8876LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1109 = -1;
	static int32_t x1110 = 2734638;
	uint64_t x1111 = 49445719LLU;
	volatile uint8_t x1112 = 2U;
	uint64_t t163 = 12LLU;

    t163 = (x1109*(x1110*(x1111-x1112)));

    if (t163 != 18446608857572906170LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1113 = 7931047589LLU;
	volatile int32_t x1114 = -223;
	int64_t x1116 = INT64_MIN;

    t164 = (x1113*(x1114*(x1115-x1116)));

    if (t164 != 5643875975008854069LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1117 = INT32_MIN;
	int16_t x1118 = -3696;
	static uint64_t x1120 = 39041LLU;
	uint64_t t165 = 181370356251LLU;

    t165 = (x1117*(x1118*(x1119-x1120)));

    if (t165 != 17066212701396533248LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1129 = -3381136884877LL;
	int32_t x1130 = INT32_MIN;
	uint64_t x1132 = 14LLU;
	static uint64_t t166 = 47893510628LLU;

    t166 = (x1129*(x1130*(x1131-x1132)));

    if (t166 != 9668918309768134656LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1133 = UINT8_MAX;
	static volatile int8_t x1134 = INT8_MIN;
	int8_t x1135 = INT8_MIN;
	int8_t x1136 = 0;
	int32_t t167 = 286002385;

    t167 = (x1133*(x1134*(x1135-x1136)));

    if (t167 != 4177920) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x1137 = 253450481U;
	uint64_t x1139 = UINT64_MAX;

    t168 = (x1137*(x1138*(x1139-x1140)));

    if (t168 != 9223372004666564721LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1145 = INT64_MAX;
	volatile int16_t x1147 = -1;
	uint64_t x1148 = 80999290439474014LLU;
	uint64_t t169 = 0LLU;

    t169 = (x1145*(x1146*(x1147-x1148)));

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1150 = 0U;
	int64_t x1152 = INT64_MIN;
	uint64_t t170 = 253710804156988243LLU;

    t170 = (x1149*(x1150*(x1151-x1152)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1153 = INT8_MIN;
	uint64_t x1154 = 58252LLU;
	int64_t x1156 = 14LL;
	uint64_t t171 = 418LLU;

    t171 = (x1153*(x1154*(x1155-x1156)));

    if (t171 != 1058788352LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x1158 = UINT64_MAX;
	int8_t x1159 = -1;
	int16_t x1160 = -1;
	volatile uint64_t t172 = 234LLU;

    t172 = (x1157*(x1158*(x1159-x1160)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1169 = UINT32_MAX;
	int16_t x1170 = 25;
	uint16_t x1171 = 2974U;
	uint32_t x1172 = 5U;

    t173 = (x1169*(x1170*(x1171-x1172)));

    if (t173 != 4294893071U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1177 = INT16_MIN;
	uint64_t x1178 = 1317841650954052LLU;
	static int16_t x1179 = -1;

    t174 = (x1177*(x1178*(x1179-x1180)));

    if (t174 != 7768990832190816256LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x1181 = 2360U;
	static volatile int8_t x1182 = INT8_MAX;
	static int16_t x1183 = INT16_MIN;
	static int64_t x1184 = 1157LL;
	int64_t t175 = 807902880426LL;

    t175 = (x1181*(x1182*(x1183-x1184)));

    if (t175 != -10168001000LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1192 = INT8_MIN;
	int64_t t176 = -84255LL;

    t176 = (x1189*(x1190*(x1191-x1192)));

    if (t176 != -1064461858499LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1205 = 5LL;
	volatile int64_t x1207 = -1LL;
	volatile int32_t x1208 = INT32_MIN;
	int64_t t177 = -307391LL;

    t177 = (x1205*(x1206*(x1207-x1208)));

    if (t177 != 1717986917600LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1211 = INT16_MIN;
	volatile int64_t t178 = 664170886516759947LL;

    t178 = (x1209*(x1210*(x1211-x1212)));

    if (t178 != 5098770047LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1213 = INT16_MIN;
	static volatile int16_t x1214 = -147;
	int64_t x1215 = -661729197LL;
	int8_t x1216 = INT8_MAX;
	int64_t t179 = -663211255608LL;

    t179 = (x1213*(x1214*(x1215-x1216)));

    if (t179 != -3187481333858304LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1217 = INT16_MIN;
	uint8_t x1218 = UINT8_MAX;
	int64_t x1220 = -1LL;
	int64_t t180 = 1175352955483945LL;

    t180 = (x1217*(x1218*(x1219-x1220)));

    if (t180 != 1061191680LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1221 = 1U;
	int64_t x1223 = 14937088297LL;
	int32_t x1224 = 1065;
	int64_t t181 = -681731262080066LL;

    t181 = (x1221*(x1222*(x1223-x1224)));

    if (t181 != 65633561297408LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1225 = -1;
	volatile uint16_t x1226 = 139U;
	static uint16_t x1227 = 0U;
	static uint16_t x1228 = UINT16_MAX;
	int32_t t182 = 639782;

    t182 = (x1225*(x1226*(x1227-x1228)));

    if (t182 != 9109365) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1230 = INT32_MIN;
	uint32_t t183 = 3U;

    t183 = (x1229*(x1230*(x1231-x1232)));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1233 = -1LL;
	static volatile int16_t x1235 = INT16_MIN;
	static uint16_t x1236 = UINT16_MAX;
	static volatile int64_t t184 = 8249201469825623LL;

    t184 = (x1233*(x1234*(x1235-x1236)));

    if (t184 != -294909LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1237 = INT32_MIN;
	int32_t x1240 = INT32_MIN;

    t185 = (x1237*(x1238*(x1239-x1240)));

    if (t185 != 2147483648U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1249 = 10629;
	int8_t x1250 = INT8_MIN;
	volatile uint32_t x1251 = UINT32_MAX;
	uint16_t x1252 = 33U;
	volatile uint32_t t186 = 0U;

    t186 = (x1249*(x1250*(x1251-x1252)));

    if (t186 != 46257408U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1258 = UINT64_MAX;
	static int8_t x1259 = 0;
	int16_t x1260 = INT16_MIN;

    t187 = (x1257*(x1258*(x1259-x1260)));

    if (t187 != 1965207302254788608LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1261 = 1332024921LL;
	uint32_t x1262 = UINT32_MAX;
	uint64_t x1263 = 276840676586729LLU;
	int64_t x1264 = -278720LL;
	volatile uint64_t t188 = 55269209LLU;

    t188 = (x1261*(x1262*(x1263-x1264)));

    if (t188 != 13598328665540645439LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1273 = UINT8_MAX;
	int16_t x1274 = 31;
	int8_t x1276 = 3;
	volatile int32_t t189 = -770762001;

    t189 = (x1273*(x1274*(x1275-x1276)));

    if (t189 != -259054755) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x1277 = UINT32_MAX;
	int16_t x1279 = -1570;
	int16_t x1280 = INT16_MIN;
	volatile uint32_t t190 = 321900224U;

    t190 = (x1277*(x1278*(x1279-x1280)));

    if (t190 != 4294811306U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1281 = -1;
	int16_t x1282 = 192;
	uint16_t x1283 = 14U;
	uint32_t x1284 = 60U;
	static uint32_t t191 = 624997U;

    t191 = (x1281*(x1282*(x1283-x1284)));

    if (t191 != 8832U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1289 = -1;
	int32_t x1290 = -1;
	volatile int8_t x1291 = -1;
	int8_t x1292 = 1;
	static volatile int32_t t192 = -370702235;

    t192 = (x1289*(x1290*(x1291-x1292)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1301 = INT16_MIN;
	volatile uint64_t x1302 = 55970286LLU;
	volatile int64_t x1303 = 8LL;
	volatile uint64_t x1304 = UINT64_MAX;
	volatile uint64_t t193 = 12277709LLU;

    t193 = (x1301*(x1302*(x1303-x1304)));

    if (t193 != 18446727567400566784LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1305 = UINT16_MAX;
	uint64_t x1306 = 8977444772102100LLU;
	static volatile uint16_t x1307 = 463U;
	static uint16_t x1308 = UINT16_MAX;
	uint64_t t194 = 4068416LLU;

    t194 = (x1305*(x1306*(x1307-x1308)));

    if (t194 != 6913325078938144704LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1317 = INT64_MIN;
	int32_t x1318 = INT32_MIN;
	int16_t x1319 = 5388;
	volatile uint64_t t195 = 119131421650LLU;

    t195 = (x1317*(x1318*(x1319-x1320)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1349 = UINT32_MAX;
	volatile int8_t x1350 = INT8_MAX;
	uint64_t x1351 = 28234337493841LLU;
	static int32_t x1352 = INT32_MIN;
	uint64_t t196 = 762674419763LLU;

    t196 = (x1349*(x1350*(x1351-x1352)));

    if (t196 != 9393602500803066577LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1357 = -1;
	uint32_t x1358 = 2U;
	static uint32_t x1359 = 1933U;
	static uint16_t x1360 = 11U;

    t197 = (x1357*(x1358*(x1359-x1360)));

    if (t197 != 4294963452U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1369 = INT8_MIN;
	int16_t x1370 = -81;
	uint32_t x1372 = UINT32_MAX;

    t198 = (x1369*(x1370*(x1371-x1372)));

    if (t198 != 41472U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1373 = INT32_MAX;
	volatile int16_t x1375 = INT16_MAX;
	static volatile uint32_t x1376 = 80520U;
	volatile uint32_t t199 = 13059U;

    t199 = (x1373*(x1374*(x1375-x1376)));

    if (t199 != 1337084U) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

